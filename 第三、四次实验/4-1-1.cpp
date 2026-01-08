#include<iostream>
using namespace std;
int main() {
	int a[10], b[10],i,j,k=1,num=0;
	cout << "Enter ten numbers:";
	for (i = 0; i < 10; i++)
		cin >> a[i];
	b[0] = a[0];
	for (i = 1; i < 10; i++)
		for (j = 0; j < i; j++)
			if (a[j] == a[i]) {
				break;
			}
			else {
				if (j == i - 1) {
					b[k] = a[i];
					k++;
					num++;
				}
			}
	cout << "The distinct numbers are:";
	for (k = 0; k <= num; k++)
		cout << b[k] << " ";
	cout << endl;
	return 0;
	
}