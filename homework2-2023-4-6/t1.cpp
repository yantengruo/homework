#include <iostream>
using namespace std;
class display {
public:
	display(int num);
	void print();
private:
	int yh[15][15];
	int n;
};
display::display(int num) {
	n = num;
	for (int i = 0; i < num; i++) {
		yh[i][0] = 1;
		yh[i][i] = 1;
		if (i >= 2) {
			for (int j = 1; j < i; j++) {
				yh[i][j] = yh[i - 1][j - 1] + yh[i - 1][j];
			}
		}
	}
}
void display::print() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", yh[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
	int n;
	cin >> n;
	int* num = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		display yh(num[i]);
		yh.print();
	}
	delete[] num;
	return 0;
}