#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
class cla {
public:
	cla(char a[],char b[]);
	void print();
private:
	int num;
	int n;
};
cla::cla(char a[],char b[]) {
	n = 0;
	for (int i = 0; i < strlen(a)-strlen(b); i++) {
		int f = 0;
		for (int j = 0; j < strlen(b); j++) {
			if (a[i+j] == b[j])
			    f++;
		}
		if (f == strlen(b)) {
			num = i;
			n = 1;
			break;
		}

	}
}
void cla::print() {
	if (n == 1)
		printf("%d", num);
	else
		printf("%d", -1);
	
}

int main(void) {
	char a[500], b[500];
	scanf("%s", a);
	scanf("%s", b);
	cla c(a, b);
	c.print();
	
}