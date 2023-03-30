#include <iostream>
using namespace std;
class Data {
public:
	int spare(int* p) {
		num = *p;
		result = 0;
		for (int i = 0; i < 3; i++) {
			result += num % 10;
			num /= 10;
		}
		return result;
	}
private:
	int num;
	int result;
};
int main(void) {
	Data data;
	int num;
	cin >> num;
	int result = data.spare(&num);
	cout << result;
	return 0;
}