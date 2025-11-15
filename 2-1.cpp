#include<iostream>
using namespace std;
int main() {
	char a;
	int c;
	cin >> a;
	c = int(a);
	if (int(a) >= 97 && int(a) <= 122) {
		cout << char(c - 32) << endl;
	}
	else {
		cout << int(a + 1) << endl;
	}
	return 0;
}