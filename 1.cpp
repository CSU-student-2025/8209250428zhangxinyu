#include<iostream>
using namespace std;
int max(int a, int b)
{
	while (1)
	{
		if (a == b)
		{
			cout <<"最大公约数为："<< a << endl;
			break;
		}
		else
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
	}
	return 0;
}
int min(int a, int b)
{
	int h = a;
	int m = b;
	while (1)
	{
		if (a == b)
		{
			cout << "最小公倍数为：" << (h*m*a)<< endl;
			break;
		}
		else
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
	}
	return 0;
}
int main()
{
	int x, y;
	cout << "请输入两个正整数：" << endl;
	while (1)
	{
		cin >> x >> y;
		max(x, y);
		min(x, y);
	}
	return 0;
}