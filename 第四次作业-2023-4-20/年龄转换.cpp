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
	if (b >= 1&&b<=10)
		printf("Children");
	if (b>=11&&b<=20)
		printf("Teenagers");
	if (b>=21&&b<=40)
		printf("Youth");
	if (b >= 41&&b<=50)
		printf("middle-aged");
	if (b >= 51 && b <= 80)
		printf("Elderly");
	if (b >= 81 && b <= 100)
		printf("Old man");
}
int main(void) {
	int t;
	cin >> t;
	trans time(t);
	time.print();
}