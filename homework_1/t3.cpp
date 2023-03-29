#include <iostream>
using namespace std;
class ident {
public:
	int id1(char* a, int n) {
		result = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] != '_' && a[i] != '-' && a[i] != '.' && a[i] != '@') {
				if ((a[i] < 'a' || a[i]>'z') && (a[i] > 'Z' || a[i] < 'A') && (a[i] > '9' || a[i] < '0'))
					result++;
			}
		}
		return result;
	}
	int id2(char* a, int n) {
		result = -1;
		if (a[0] == '@' || a[n - 1] == 0)
			result++;
		for (int i = 0; i < n; i++) {
			if (a[i] == '@')
				result++;
		}
		return result;
	}
	int id3(char* a, int n) {
		result = -1;
		if (a[n - 1] == '.')
			result++;
		for (int i = 0; i < n; i++) {
			if (a[i] == '.')
				result++;
			if (a[i] == '@' && a[i + 1] == '.')
				result++;
		}
		return result;
	}
private:
	int result;
};
int main(void) {
	char address[30];
	cin >> address;
	ident id;
	int len = strlen(address);
	int result = id.id1(address, len) + id.id2(address, len) + id.id3(address, len);
	if (result == 0)
		cout << "yes";
	else
		cout << "no";
	return 0;
}