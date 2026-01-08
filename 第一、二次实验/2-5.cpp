#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	char str[100];
	int a=0, b=0, c=0, d=0, i;
	cin.get(str,100);
	for (i = 0; i <= 99; i++) {
		if ((int(str[i]) >= 65 && int(str[i]) <= 90) || (int(str[i]) >= 97 && int(str[i]) <= 122)) {
			a++;
		}
		else {
			if (int(str[i]) >= 48 && int(str[i]) <= 57) {
				b++;
			}
			else {
				if (str[i] == ' ') {
					c++;
				}
				else if(str[i]=='\0') {
					break;
				}
				else {
					d++;
				}
			}
		}
	}
	cout << a << "个英文字母，" << b << "个数字字符，" << c << "个空格，" << d << "个其他字符。" << endl;
	return 0;
}