#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cla {
public:
	cla(int a,int b);
	void print();
private:
	int f[202];
};
cla::cla(int a,int b) {
	f[0] = 0;
	a = a % b;
	for (int i = 1; i <= 200; i++) {
		if (a == 0) {
			f[i] = -1;
			break;
		}
		else {
			a = (a % b) * 10;
			f[i] = a / b;
			a = a % b;
		}


	}
}
void cla::print() {
	printf("%d.", 0);
	for (int i = 1; i < 201; i++) {
		if (f[i] >= 0)
			printf("%d", f[i]);
		else
			break;
	}
}

int main(void) {
	int a, b;
	scanf("%d/%d", &a, &b);
	cla add(a,b);
	add.print();
}