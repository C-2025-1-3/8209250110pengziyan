#include<iostream>
using namespace std;
#define PI 3.14
int main() {
	double r, h, v;
	cout << "请依次输入圆锥的半径和高：";
	cin >> r >> h;
	v = PI * r * r * h / 3;
	cout << v << endl;
	return 0;
}