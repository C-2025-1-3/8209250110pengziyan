#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i=0, j=0, k=0;
	while (i < size1 && j < size2) {
		if (list1[i] <= list2[j]) {
			list3[k] = list1[i];
			i++;
			k++;
		}
		else {
			list3[k] = list2[j];
			j++;
			k++;
		}
	}
	while (i < size1) {
		list3[k] = list1[i];
		i++;
		k++;
	}
	while (j < size2) {
		list3[k] = list2[j];
		j++;
		k++;
	}
}
int main() {
	const int MAX = 80;
	int size1, size2;
	int list1[MAX], list2[MAX], list3[MAX*2];
	cout << "Enter list1:";
	cin >> size1;
	for (int a = 0; a < size1; a++)
		cin >> list1[a];
	cout << "Enter list2:";
	cin >> size2;
	for (int b = 0; b < size2; b++)
		cin >> list2[b];
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is:";
	for (int c = 0; c < size1 + size2; c++)
		cout << list3[c] << "\t";
	cout << endl;
	return 0;
}