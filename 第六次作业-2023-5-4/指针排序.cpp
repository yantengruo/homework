#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cla {
public:
	cla(int a[],int n);
	void print();
private:
	int f[20];
	int k;
};
cla::cla(int a[], int n) {
	k = n;
	for (int i = 0; i < n; i++) {
		f[i] = a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (f[i] > f[j]) {
				int t = f[j];
				f[j] = f[i];
				f[i] = t;
			}
		}
	}
}
void cla::print() {
	for (int i = 0; i < k; i++) {
		printf("%d ", f[i]);
	}
}

int main(void) {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cla c(a, n);
	c.print();
	delete[] a;
	return 0;
}