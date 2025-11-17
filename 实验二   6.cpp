#include<iostream>

using namespace std;
int main()
{
	cout << "请输入两个正整数" << endl;
	int x, y;
	cin >> x >> y;
	int h, z;
	h = x; z = y;
	while (true)
	{		
		
		if (x != y)
		{
			if (x > y)
			{
				x = x - y;
			}
			else
			{
				y = y - x;
			}
		}
		else
		{
			cout << "最大公约数为：" << x << endl;
			cout << "最小公倍数为：" << (h * z / x) << endl;
			break;
		}
		
	}	
	
	return 0;
}