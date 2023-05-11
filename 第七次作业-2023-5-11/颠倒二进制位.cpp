#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
class cla {
public:
	cla(char s[]);
	void print();
private:
	char str[33];
};
cla::cla(char s[]) {
	for (int i = 0; i < 32; i++) {
		str[31 - i] = s[i];
	}
	str[32] = '\0';
}
void cla::print() {
	cout << str;
}

int main(void) {
	char s[33];
	cin >> s;
	cla c(s);
	c.print();
	
}