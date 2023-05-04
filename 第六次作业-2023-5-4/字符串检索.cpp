#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
class cla {
public:
	cla(char a[],char b[]);
	void print();
private:
	int f[20];
	int k;
};
cla::cla(char a[], char b[]) {
	int len = strlen(a);
	int i = 0;
	for (int p=0; i < strlen(b)-len; i++) {
		int flag = 0;
		for (int j = 0; j < len; j++) {
			if (b[i + j] == a[j])
				flag++;
		}
		if (flag == len) {
			f[p] = i;
			p++;
		}
		k = p;
	}
	
}
void cla::print() {
	for (int i = 0; i < k; i++) {
		printf("%d ", f[i]);
	}
}

int main(void) {
	char a[1000], b[1000];
	gets_s(a);
	gets_s(b);
	cla c(a, b);
	c.print();
	return 0;
}