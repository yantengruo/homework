#include <iostream>
using namespace std;
class compose {
public:
	int* fp(char* p, int n) {
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (p[i] < p[j]) {
					char ch = p[i];
					p[i] = p[j];
					p[j] = ch;
				}
			}
		}
		f[0] = 26;
		for (int i = 1; i < n; i++) {
			if (p[i] != p[i - 1])
				f[i] = f[i - 1] - 1;
			else
				f[i] = f[i - 1];
		}
		return f;
	}
private:
	int f[10];
};
int main(void) {
	int n;
	cin >> n;
	char str[10];
	int* f;
	cin >> str;
	compose com;
	f = com.fp(str, n);
	int re = 0;
	for (int i = 0; i < n; i++) {
		re += f[i];
	}
	cout << re;
	return 0;
}