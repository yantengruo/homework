#include <iostream>
using namespace std;
class grade {
public:
	grade(int r1,int r2,int r3,int r4,int r5,int r6);
	void print();
	float f(int r) { return (r - pj) * (r - pj); }
private:
	float pj;
	float fc;
	
};
grade::grade(int r1,int r2,int r3,int r4,int r5,int r6) {
	pj = (float)(r1 + r2 + r3 + r4 + r5 + r6)/6;
	fc = (f(r1)+f(r2)+f(r3)+f(r4)+f(r5)+f(r6)) / 6;
}

void grade::print() {
	printf("%.2f %.2f\n", pj, fc);
}
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int r1, r2, r3, r4, r5, r6;
		cin >> r1 >> r2 >> r3 >> r4 >> r5 >> r6;
		grade g(r1, r2, r3, r4, r5, r6);
		g.print();
	}
}