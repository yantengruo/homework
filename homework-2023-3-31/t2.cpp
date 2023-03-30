#include <iostream>
using namespace std;
class Ti2 {
public:
	int* count(int* n, int* num) {
		int count = 0;
		for (int i = 0; i < *n; i++) {
			int flag = 0;
			for (int j = 0; j < *n; j++) {
				if (num[i] == num[j])
					flag++;
			}
			if (flag == 2) {
				p[count] = num[i];
				count++;
			}
		}
		p[count] = '\0';
		return p;
	}
private:
	int p[10];
};
int main(void) {
	int n;
	cin >> n;
	int p[20];
	int* p2;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	Ti2 ti;
	p2 = ti.count(&n, p);
	int i = 0;
	for (; p2[i] != '\0'; i++);
	for (int j = 0; j < i; j++) {
		for (int k = j + 1; k < i; k++) {
			if (p2[j] == p2[k])
				cout << p2[j] << " ";
		}
	}
	return 0;
}