#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cla {
public:
	cla(int a[],int n,int k);
	void print();
private:
	int flag;
};
cla::cla(int a[], int n,int k) {
	flag = 0;
	int f = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= 0)
			f++;
	}
	if (f >= k)
		flag = 1;
	else
		flag = 0;
}
void cla::print() {
	if (flag == 1)
		printf("N0");
	else
		printf("YES");
}

int main(void) {
	int n, k;
	cin >> n >> k;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cla c(a, n, k);
	c.print();
	delete[] a;
	return 0;
}