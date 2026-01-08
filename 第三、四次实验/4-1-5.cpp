#include<iostream>
using namespace std;
int getlen(const char str[]) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}
int indexOf(const char s1[], const char s2[]) {
	int len1 = getlen(s1);
	int len2 = getlen(s2);
	if (s1 == 0) return 0;
	if (len1 > len2) return -1;
	for (int i = 0; i <= len2 - len1; i++) {
		bool match = true;
		for(int j=0;j<len1;j++)
			if (s2[i + j] != s1[j]) {
				match = false;
				break;
			}
		if (match) {
			return i;
		}
	}
	return -1;
}
int main() {
	const int MAX = 100;
	char s1[MAX], s2[MAX];
	cout << "Enter the first string:";
	cin.getline(s1, MAX);
	cout << "Enter the second string:";
	cin.getline(s2, MAX);
	int index = indexOf(s1, s2);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is " << index << endl;
	return 0;
}