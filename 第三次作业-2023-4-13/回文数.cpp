#include <iostream>
using namespace std;
class backwen {
public:
	backwen(int m,int k);
	void print();
private:
	int wen[20];
	int num;
};
backwen::backwen(int m, int k) {
	num = k;
	for (int i = m, j = 0; j < k; i++) {
		int b = 0;
		for (int q = i; q > 0;) {
			b = b * 10 + q % 10;
			q /= 10;
		}
		if (b == i) {
			wen[j] = i;
			j++;
		}
	}
}
void backwen::print() {
	for (int i = 0; i < num; i++) {
		cout << wen[i] << " ";
	}
}
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m, k;
		cin >> m >> k;
		backwen back(m, k);
		back.print();
	}
}