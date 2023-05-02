#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cla {
public:
	cla(int a[],int b[],int n);//a是幂次，b是系数
	void print();
private:
	int f[100][2];
	int h;
};
cla::cla(int a[], int b[],int n) {
	for (int i = 0; i < n+1; i++) {
		for (int j = i; j < n+1; j++) {
			if (a[i] < a[j]) {
				int t = a[j], q = b[j];
				a[j] = a[i];
				b[j] = b[i];
				a[i] = t;
				b[i] = q;
			}
		}
	}
	a[n+1] = 0;
	int j = 0;
	f[0][1] = 0;
	for (int i = 0; i < n+1; i++) {
		if (a[i] == a[i + 1]) {
			f[j][0] = a[i];
			f[j][1] += b[i];
		}
		if(a[i]!=a[i+1]) {
			f[j][0] = a[i];
			f[j][1] += b[i];
			j++;
			f[j][1] = 0;
		}
	}
	h = j;
}
void cla::print() {
	for (int i = 0; i < h+1; i++) {
		if (f[i][0]!=0) {
			printf("%dx%d", f[i][0], f[i][1]);
			printf("+");
		}
		else
			printf("%d", f[i][1]);
	}
}

int main(void) {
	int h = 0;
	int flag = 0;
	int a[100], b[100];
	for (;; h++) {
		cin >> a[h] >> b[h];
		if (a[h] == 0)
			flag++;
		if (flag == 2)
			break;
	}
	cla c(a, b, h);
	c.print();

}