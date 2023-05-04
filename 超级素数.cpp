#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
class cla {
public:
	int sushu(int n);
	int supersushu(int n);
	cla();
	void print();
private:
};
int cla::sushu(int n) {
	int f = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			f++;
	}
	if (f == 0)
		return 1;
	else
		return 0;
}
int cla::supersushu(int n) {
	int f = 0;
	int sum = 0, ji = 1, spa = 0;
	for (int i = n; i > 0;) {
		sum += i % 10;
		i /= 10;
	}
	for (int i = n; i > 0;) {
		spa += (i % 10) * (i % 10);
		i /= 10;
	}
	for (int i = n; i > 0;) {
		ji *= i % 10;
		i /= 10;
	}
	if (sushu(n) == 0||sushu(sum)==0||sushu(ji)==0||sushu(spa)==0)
		f++;
	if (f == 0)
		return 1;
	if (f != 0)
		return 0;
}
cla::cla() {
}
void cla::print() {
	int count = 0, sum = 0;
	for (int i = 100; i < 1000; i++) {
		if (supersushu(i) == 1) {
			count++;
			sum += i;
		}
	}
	printf("超级素数数量=%d\n超级素数之和=%d", count, sum);
}

int main(void) {
	cla c;
	c.print();
	return 0;
}