#include<iostream>

using namespace std;
int main()
{
	cout << "计算机程序" << endl;
	cout << "第一个数输入0时退出" << endl;
	while (true)
	{
		double x, y;
		char h;
		cin >> x;
		cin >> h;
		cin >> y;
		if (h == '+')
		{
			cout << (x + y) << endl;
			
		}
		else if (h == '-')
		{
			cout << (x - y) << endl;
			
		}
		else if (h == '*')
		{
			cout << (x * y) << endl;
			
		}
		else if (h == '/' )
		{
			if (y != 0)
			{
				cout << (x / y) << endl;
				
			}
			else
			{
				cout << "无法运算" << endl;
				
			}
		}
		else if (h == '%')
		{
			cout << (static_cast<int>(x) % static_cast<int>(y)) << endl;
			
		}
		if (x==0)
		{
			break;
		}
	}
	return 0;
}