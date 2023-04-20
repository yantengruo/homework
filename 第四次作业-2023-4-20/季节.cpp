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
	if (b == 1)
		printf("Spring");
	if (b == 2)
		printf("Summer");
	if (b == 3)
		printf("Fall");
	if (b == 4)
		printf("Winter");
}
int main(void) {
	int t;
	cin >> t;
	trans time(t);
	time.print();
}