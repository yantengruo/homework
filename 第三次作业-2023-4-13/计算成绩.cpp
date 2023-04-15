#include <iostream>
using namespace std;
class grade {
public:
	grade(int r);
	void print();
	void input();
private:
	int num;
	char name[100][30];
	float pingshi[100];
	float qimo[100];
	float zong[100];
};
grade::grade(int r) {
	num = r;
}
void grade::input() {
	for (int i = 0; i < num; i++) {
		cin >> name[i] >> pingshi[i] >> qimo[i];
	}
}
void grade::print() {
	for (int i = 0; i < num; i++) {
		zong[i] = pingshi[i] * 0.4 + qimo[i] * 0.6;
		printf("%s %.2f %.2f %.2f\n", name[i], pingshi[i], qimo[i], zong[i]);
	}
}
int main(void) {
	int n;
	cin >> n;
	grade g(n);
	g.input();
	g.print();
}