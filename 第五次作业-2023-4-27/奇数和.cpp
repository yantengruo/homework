#include<iostream>
using namespace std;
class cla {
public:
	cla(int n[],int cou);
	int even(int n);
	void print();
private:
	int num;
};
cla::cla(int n[],int cou) {
	num = 0;
	for (int i = 0; i < cou; i++) {
		num += even(n[i]);
	}
}
void cla::print() {
	printf("%d", num);
}
int cla::even(int n) {
	if (n % 2 == 0)
		return 0;
	else
		return n;
}
int main(void) {
	int n[30];
	int i = 0;
	for (;; i++) {
		cin >> n[i];
		if (n[i] <= 0)
			break;
	}
	cla add(n, i);
	add.print();
}