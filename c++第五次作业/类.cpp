#include<iostream>
using namespace std;
class Time             // ¶¨ÒåTimeÀà
{
private:
	int minute;
	int sec;
	int hour;
public:
	void input()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void output()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;         
	t1.input();
	t1.output();
	return 0;
}