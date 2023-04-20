#include <iostream>
using namespace std;
class add {
public:
	add(int t);
	void print();
private:
	int b;

	
};
add::add(int t) {
	b = 0;
	for (int i = 0; i < 3; i++) {
		b += t % 10;
		t /= 10;
	}
}
void add::print() {
	printf("%d", b);
}
int main(void) {
	int t;
	cin >> t;
	add time(t);
	time.print();
}