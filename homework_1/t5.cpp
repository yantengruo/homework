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
		f = new int[n+1];
		f[0] = 26;
		for (int i = 1; i < n; i++) {
			if (p[i] != p[i - 1])
				f[i] = f[i - 1] - 1;
			else
				f[i] = f[i - 1];
		}
		f[n] = '\0';
		return f;
	}
private:
	int*f;
};
int main(void) {
	int n;
	cin >> n;
	char*str=new char[n+1];
	int* f;
	cin >> str;
	str[n] = '\0';
	compose com;
	f = com.fp(str, n);
	int re = 0;
	for (int i = 0; i < n; i++) {
		re += f[i];
	}
	cout << re;
	delete[]str;
	delete[]f;
	return 0;
}
