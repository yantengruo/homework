#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
class cla {
public:
	cla();
	void print(int n,char A,char B,char C);
private:
	int num;
};
cla::cla() {
	num = 0;
}
void cla::print(int n, char A, char B, char C) {
	if (n == 1) {
		num++;
		printf("Step%d:Move Disk%d from %c to %c\n",num, n, A, C);
	}
	if(n==2){
		num++;
		printf("Step%d:Move Disk%d from %c to %c\n",num, n, A, B);
		print(n - 1,A,B,C);
		num++;
		printf("Step%d:Move Disk%d from %c to %c\n",num, n, B, C);
	}
	if (n > 2) {
		print(n - 1, A, C, B);
		num++;
		printf("Step%d:Move Disk%d from %c to %c\n",num, n, A, C);
		print(n - 1, B, A, C);
	}
	
}

int main(void) {
	char A = 'A', B = 'B', C = 'C';
	int n;
	cin >> n;
	cla c;
	c.print(n, A, B, C);
	
}