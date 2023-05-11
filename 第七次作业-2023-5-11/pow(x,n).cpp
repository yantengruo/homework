#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
class cla {
public:
	cla(int a,int b);
	void print();
private:
	int pow;
};
cla::cla(int a,int b) {
	pow = 1;
	for (int i = 0; i < b; i++) {
		pow *= a;
	}
}
void cla::print() {
	printf("%d", pow);
}

int main(void) {
	int a, b;
	cin >> a >> b;
	cla c(a, b);
	c.print();
	
}