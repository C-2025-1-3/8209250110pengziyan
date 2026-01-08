#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++)
		counts[i] = 0;
	int idx = 0;
	while (s[idx] != '\0') {
		char ch = s[idx];
		if (ch >= 'A' && ch <= 'Z') {
			ch = ch - 'A' + 'a';
		}
		if (ch >= 'a' && ch <= 'z') {
			int pos = ch - 'a';
			counts[pos]++;
		}
		idx++;
	}
}
int main() {
	char Str[1000];
	int counts[26];
	cin.getline(Str, 1000);
	count(Str, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << (char)('a' + i) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}