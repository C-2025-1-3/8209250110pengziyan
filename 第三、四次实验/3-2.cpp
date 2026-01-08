#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num) {
	int i;
	if (num < 2) return false;
	for(i=2;i<num;i++)
		if (num % i == 0) {
			return false;
			break;
		}
	if (i == num - 1 || num == 2) return true;
}
int main() {
	int count = 0;
	int num = 2;
	while (count < 200) {
		if (is_prime(num)) {
			cout << num << " ";
			count++;
			if (count % 10 == 0) {
				cout << endl;
			}
		}
		num++;
	}
	return 0;
}