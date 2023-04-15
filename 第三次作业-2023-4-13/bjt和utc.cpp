#include <iostream>
using namespace std;
class timetrans {
public:
	timetrans(int t);
	void print();
private:
	int bjt;
	int utc;
	
};
timetrans::timetrans(int t) {
	bjt = t;
	if (bjt >= 800) {
		utc = bjt - 800;
	}
	else {
		utc = 2460 - (800 - bjt);
	}
}
void timetrans::print() {
	printf("%d", utc);
}
int main(void) {
	int t;
	cin >> t;
	timetrans time(t);
	time.print();
}