#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void SetTime() {
		cin >> hour >> minute >> sec;
	}
	void ShowTime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main() {
	Time t1;
	t1.SetTime();
	t1.ShowTime();
	return 0;
}