#include <iostream>
#include "student_max.h"
using namespace std;
void max(student* p, int n)
{
	if (n <= 0 || p == nullptr) return;
	student* best = &p[0];
	for (int i = 1; i < n; ++i)
	{
		if (p[i].getnum() > best->getnum())
			best = &p[i];
	}
	cout << "最高成绩者学号: " << best->getid() << endl;
}
int main()
{
	 const int n = 5;
	 student arr[n];
	 for (int i = 0; i < n; i++)
	 {
		 int id, num;
		 cout << "请输入第" << i + 1 << "个学生的学号和成绩:" << endl;
		 cin >> id >> num;
		 arr[i].set_value(id, num);

	 }
	 max(arr, n);
	 return 0;
}