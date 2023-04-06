#include <iostream>
using namespace std;
class week {
public:
	week(int y, int m, int d);
	void print();
private:
	int sday;
};
week::week(int y, int m, int d) {
	sday = 0;
	for (int i = 1900; i < y; i++) {
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
			sday += 366;
		else
			sday += 365;
	}
	for (int i = 1; i <= m; i++) {
		if (i == 1)
			sday += 0;
		if (i == 2)
			sday += 31;
		if (i == 3) {
			if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
				sday += 29;
			else
				sday += 28;
		}
		if (i == 4)
			sday += 31;
		if (i == 5)
			sday += 30;
		if (i == 6) 
			sday += 31;
		if (i == 7)
			sday += 30;
		if (i == 8)
			sday += 31;
		if (i == 9)
			sday += 31;
		if (i == 10)
			sday += 30;
		if (i == 11)
			sday += 31;
		if (i == 12)
			sday += 30;
	}
	sday += d-1;
	sday %= 7;
}
void week::print() {
	if (sday == 0)
		cout << "Monday";
	if (sday == 1)
		cout << "Tuesday";
	if (sday == 2)
		cout << "Wednesday";
	if (sday == 3)
		cout << "Thursday";
	if (sday == 4)
		cout << "Friday";
	if (sday == 5)
		cout << "Saturday";
	if (sday == 6)
		cout << "Sunday";
}
int main(void) {
	int year, month, day;
	char ch1, ch2;
	cin >> year >> ch1 >> month >> ch2 >> day;
	week w(year, month, day);
	w.print();
	return 0;
}