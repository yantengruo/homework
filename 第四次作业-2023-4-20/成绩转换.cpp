#include <iostream>
using namespace std;
class trans {
public:
	trans(int t);
	void print();
private:
	int b;

	
};
trans::trans(int t) {
	b = t;
}
void trans::print() {
	if (b >= 90&&b<=100)
		printf("A");
	if (b>=80&&b<90)
		printf("B");
	if (b>=70&&b<80)
		printf("C");
	if (b >= 60&&b<70)
		printf("D");
	if (b >= 0 && b <60)
		printf("E");
}
int main(void) {
	int t;
	cin >> t;
	trans time(t);
	time.print();
}