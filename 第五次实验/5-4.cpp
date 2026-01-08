#include<iostream>
using namespace std;
class Student {
private:
	int id;
	float score;
public:
	void setData(int i, float s) {
		id = i;
		score = s;
	}
	float getScore() {
		return score;
	}
	int getid() {
		return id;
	}
};
void max(Student* p, int n) {
	float maxScore = p->getScore();
	int maxid = p->getid();
	for (int i = 1; i < n; i++) {
		if ((p + i)->getScore() > maxScore) {
			maxScore = (p + i)->getScore();
			maxid = (p + i)->getid();
		}
	}
	cout << "最高成绩者学号：" << maxid << endl;
	cout << "最高成绩：" << maxScore << endl;
}
int main() {
	Student stu[5];
	int id;
	float score;
	for (int i = 0; i < 5; i++) {
		cout << "请输入第" << i + 1 << "个学生的学号和成绩：";
		cin >> id >> score;
		stu[i].setData(id, score);
	}
	max(stu, 5);
	return 0;
}