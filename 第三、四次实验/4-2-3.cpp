#include<iostream>
using namespace std;
void sortArray(int* arr, int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (*(arr + j) > *(arr + j + 1)) {
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
}
void printArray(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
int main() {
	int n;
	cout << "请输入数组元素个数：";
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> *(arr + i);
	cout << "原始数组：";
	printArray(arr, n);
	sortArray(arr, n);
	cout << "排序后数组：";
	printArray(arr, n);
	delete[] arr;
	return 0;
}