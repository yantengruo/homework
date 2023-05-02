#include<iostream>
using namespace std;
class cla {
public:
	cla(int a,int b);
	void print();
private:
	int min;
	int max;
};
cla::cla(int a,int b) {
	int m, M;
	if (a > b) {
	     m = b;M = a;
	}
	else{
		m = a; M = b;
	}
	for (int i = 1; i < m; i++) {
		if (a % i == 0 && b % i == 0)
			max = i;
	}
	for (int i = M;; i++) {
		if (i % a == 0 && i % b == 0)
		{
			min = i;
			break;
		}

	}

}
void cla::print() {
	printf("%d %d", max,min);
}

int main(void) {
	int a, b;
	cin >> a >> b;
	cla add(a,b);
	add.print();
}