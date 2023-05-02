#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cla {
public:
	cla(int*a[],int n);
	void print();
private:
	int f1;
	int f2;
	int flag;
};
cla::cla(int*a[], int n) {
	for (int i = 0; i < n; i++) {
		int max = a[i][0];
		int j;
		for (int s = 0; s < n; s++) {
			if (a[i][s] > max) {
				max = a[i][s];
				j = s;
			}
		}
		int min = a[0][j];
		for (int k = 0; k < n; k++) {
			if (a[k][j] < min) {
				min = a[k][j];
			}
		}
		if (max == min) {
			flag = 1;
			f1 = i;
			f2 = j;
			break;
		}
		else
			flag = 0;
	}
}
void cla::print() {
	if (flag == 0)
		printf("NO");
	else
		printf("%d %d", f1, f2);
}

int main(void) {
	int n;
	cin >> n;
	int*a[20];
	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cla c(a, n);
	c.print();
	for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
}