#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
class cla {
public:
	cla(char str[]);
	void print();
private:
	int f[20];
	int len;
};
cla::cla(char str[]) {
	int flag = 0;
	int j = 0;
	for (int i = 0; ; i++) {
		if (str[i] != ' '&&str[i]!='.')
			flag++;
		if (str[i] == ' ') {
			f[j] = flag;
			j++;
			flag = 0;
		}
		if (str[i] == '.') {
			f[j] = flag;
			j++;
			break;
		}
	}
	len = j;
}
void cla::print() {
	for (int i = 0; i < len; i++) {
		printf("%d ", f[i]);
	}
}

int main(void) {
	char str[100];
	gets_s(str);
	cla c(str);
	c.print();
}