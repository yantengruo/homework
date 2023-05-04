#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
class cla {
public:
	cla(char a[]);
	void print();
private:
	int f[20];
	int k;
};
cla::cla(char a[]) {
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] <= 'C' && a[i] >= 'A')
			f[i] = 2;
		if (a[i] <= 'F' && a[i] >= 'D')
			f[i] = 3;
		if (a[i] <= 'I' && a[i] >= 'G')
			f[i] = 4;
		if (a[i] <= 'L' && a[i] >= 'J')
			f[i] = 5;
		if (a[i] <= 'O' && a[i] >= 'M')
			f[i] = 6;
		if (a[i] <= 'S' && a[i] >= 'P')
			f[i] = 7;
		if (a[i] <= 'V' && a[i] >= 'T')
			f[i] = 8;
		if (a[i] <= 'Z' && a[i] >= 'W')
			f[i] = 9;
		k = i;
	}
}
void cla::print() {
	for (int i = 0; i < k; i++) {
		printf("%d", f[i]);
	}
}

int main(void) {
	char a[20];
	cin >> a;
	cla c(a);
	c.print();
	return 0;
}