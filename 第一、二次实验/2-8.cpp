#include<iostream>
using namespace std;
float f1(float x,float y)
{
	float z;
	z = (x + y / x) / 2;
	return z;
}
int main() {
	float a, b[100];
	int i;
	cin >> a;
	b[0] = (a + 1) / 2;
	for (i = 1; i <= 100; i++) {
		b[i] = f1(b[i - 1], a);
		if ((b[i] - b[i - 1]) > -0.00001 && (b[i] - b[i - 1]) < 0.00001) {
			cout << b[i] << endl;
			break;
		}
	}
	return 0;
}
/*float精度不够，改为double就能使|x(n+1)-x(n)|<10的-10次方*/