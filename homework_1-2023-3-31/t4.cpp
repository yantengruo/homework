#include <iostream>
using namespace std;
class add {
public:
	int jian(int x, int y) {
		int m;
		if (x > y)
			m = y;
		else
			m = x;
		for (int i = 1; i <= m; i++) {
			if (x % i == 0 && y % i == 0)
				max = i;
		}
		return max;
	}
private:
	int max;

};
int main(void) {
	int n;
	cin >> n;
	int*zi=new int[n+1];
	int*mu=new int[n+1];
	for (int i = 0; i < n; i++) {
		char q;
		cin >> zi[i] >> q >> mu[i];
		if (mu[i] == 0 || q != '/') {
			cout << "error";
			return 0;
		}
	}
	int z = 0, m = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j != i)
				zi[i] *= mu[j];
		}
		z += zi[i];
	}
	for (int i = 0; i < n; i++) {
		m *= mu[i];
	}
	add add;
	int g = add.jian(z, m);
	z = z / g;
	m = m / g;
	if (m != 1 && z != 0) {
		cout << z << "/" << m;
	}
	else if (m == 1 && z != 0) {
		cout << z;
	}
	else {
		cout << 0;
	}
	delete[]zi;
	delete[]mu;
	return 0;
}