#include<iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三边长：";
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		cout << "三角形面积为：" << area(a, b, c) << endl;
	}
	else {
		cout << "无法构成三角形" << endl;
	}
	return 0;
}