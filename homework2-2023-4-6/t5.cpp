#include <iostream>
using namespace std;
class transform {
public:
	transform(int num,int x);
	void print();
private:
	int trans[10];
	int n;
};
transform::transform(int num,int x) {
	n = 0;
	for (int i = 0; num > 0; i++) {
		trans[i] = num % x;
		num /= x;
		n++;
	}
}
void transform::print() {
	for (int i = n-1; i >=0; i--) {
		if (trans[i] < 10) {
			cout << trans[i];
		}
		else {
			char ch;
			ch = 'A' + (trans[i] - 10);
			cout << ch;
		}
	}
	cout << endl;
}
int main(void) {
	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		if (b[i] > 16 || b[i] < 2) {
			cout << "error";
			return 0;
		}
	}
	for (int i = 0; i < n; i++) {
		transform trans(a[i], b[i]);
		trans.print();
	}
	delete[] a;
	delete[] b;
	return 0;
}