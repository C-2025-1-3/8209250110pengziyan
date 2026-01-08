#include<iostream>
using namespace std;
void bubbleSort(double list[], int listSize) {
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1]) {
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
int main() {
	const int size = 10;
	double arr[size];
	cout << "请输入十个双精度数字：";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	bubbleSort(arr, size);
	cout << "排序后的数字为：";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}