#include<iostream>
using namespace std;
int main() {
	//int i = k + 1;未给k进行定义
	int k;
	cin >> k;
	int i = k + 1;
	cout << i++ << endl;
	//int i=1;i进行了重复定义
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;

}
