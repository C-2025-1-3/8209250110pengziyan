#include<iostream>
using namespace std;
int length(const char* str) {
	int len = 0;
	while (*str != '\0') {
		len++; str++;
	}
	return len;
}
int indexof(const char* s1, const char* s2) {
	int len1 = length(s1);
	int len2 = length(s2);
	if (len1 == 0 || len1 > len2) {
		return -1;
	}
	for (int i = 0; i <= len2 - len1; i++) {
		bool match = true;
		const char* p1 = s1;
		const char* p2 = s2 + i;
		while (*p1 != '\0') {
			if (*p1 != *p2) {
				match = false;
				break;
			}
			p1++;
			p2++;
		}
		if (match) {
			return i;
		}
	}
	return -1;
}
int main() {
	char s1[100], s2[100];
	cout << "Enter str1:";
	cin.getline(s1,100);
	cout << "Enter str2:";
	cin.getline(s2, 100);
	int pos = indexof(s1, s2);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is " << pos << endl;
	return 0;
}