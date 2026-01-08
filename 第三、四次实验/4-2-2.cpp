#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int w = 0;
	const char* p = hexString;
	while (*p != '\0') {
		char ch = *p;
		int digit;
		if (ch >= '0' && ch <= '9') {
			digit = ch - '0';
		}
		else if (ch >= 'A' && ch <= 'F') {
			digit = ch - 'A' + 10;
		}
		else if (ch >= 'a' && ch <= 'f') {
			digit = ch - 'a' + 10;
		}
		else {
			return NULL;
		}
		w = w * 16 + digit;
		p++;
	}
	return w;
}
int main() {
	char hexStr[100];
	cin >> hexStr;
	int result = parseHex(hexStr);
	cout << "转换后结果为：" << result << endl;
	return 0;
}