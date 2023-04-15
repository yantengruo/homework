#include <iostream>
using namespace std;
class roun {
public:
	roun(int r);
	void print();
private:
	float s;
	float l;
	int ll;
};
roun::roun(int r) {
	s = r * r * 3.14;
	ll = 2 * r;
	l = 2 * r * 3.14;
}
void roun::print() {
	cout << "直径=" << ll<<endl;
	cout << "周长=" << l << endl;
	cout << "面积=" << s << endl;
}
int main(void) {
	int r;
	cin >> r;
	roun round(r);
	round.print();
}