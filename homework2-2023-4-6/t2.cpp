#include <iostream>
using namespace std;
class transform {
public:
	transform(int num);
	void print();
private:
	int octal[10];
	int n;
};
transform::transform(int num) {
	n = 0;
	for (int i = 0; num > 0; i++) {
		octal[i] = num % 8;
		num /= 8;
		n++;
	}
}
void transform::print() {
	if (n < 5) {
		for (int i = 0; i < 5 - n; i++) {
			cout << 0;
		}
	}
	for (int i = n-1; i >=0; i--) {
		cout << octal[i];
	}
}
int main(void) {
	int num;
	cin >> num;
	transform trans(num);
	trans.print();
	return 0;
}