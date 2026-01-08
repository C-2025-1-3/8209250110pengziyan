#include<iostream>
using namespace std;
class Box {
private:
	double l, w, h;
public:
	void in() {
		cout << "输入长宽高：";
		cin >> l >> w >> h;
	}
	double vol() {
		return l * w * h;
	}
	void out() {
		cout << "体积为：" << vol() << endl;
	}
};
int main() {
	Box a, b, c;
	cout << "长方体1：";
	a.in();
	cout << "长方体2：";
	b.in();
	cout << "长方体3：";
	c.in();
	a.out();
	b.out();
	c.out();
	return 0;
}