#include<iostream>
using namespace std;
int main() {
	bool L[100];
	int i;
	for (i = 0; i < 100; i++)
		L[i] = false;
	for (int j = 1; j <= 100; j++) 
		for (i = j-1; i < 100; i=i+j) {
			L[i] = (L[i] == true ? false : true);
		}
	for(i=0;i<100;i++)
		if (L[i]) {
			cout << i + 1 << "\t";
		}
	return 0;
}