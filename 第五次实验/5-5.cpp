#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int i = 60, int j = 80) { x = i; y = j; }
	void SetPoint(int i, int j) { x = 60 + i; y = 80 + j; }
	void display() { cout << "(" << x << "," << y << ")" << endl; }
};
int main() {
	Point p;
	cout << "初始坐标值:";
	p.display();
	p.SetPoint(1, 2);
	cout << "修改后的坐标值:";
	p.display();
	return 0;
}