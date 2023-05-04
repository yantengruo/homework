#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
class cla {
public:
	cla(char a[],int n);
	void print();
private:
	char f[200];
	int k;
	int num;
};
cla::cla(char a[], int n) {
	int j = 0;
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] != '-') {
			if (a[i] >= 'a' && a[i] <= 'z')
				f[j] = a[i] - ('a' - 'A');
			else
				f[j] = a[i];
			j++;
		}
	}
	k = j;
	num = n;
}
void cla::print() {
	int d = 0;
	if (k % num == 0)
		d = num;
	else
		d = k % num;
	int i = 0;
	for (; i < d; i++) {
		printf("%c", f[i]);
	}
	for (int j = 0; j < (k - d) / num; j++) {
		printf("-");
		for (int q = 0; q < num; q++) {
			printf("%c", f[i]);
			i++;
		}
	}
}

int main(void) {
	char a[200];
	cin >> a;
	int n;
	cin >> n;
	cla c(a, n);
	c.print();
	return 0;
}