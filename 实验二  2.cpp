#include<iostream>

using namespace std;
int main()
{
	cout << "ÇëÊäÈëÊý×Ö" << endl;
	float x;
	cin >> x;
	if (x > 0 && x < 5)
	{
		if (x >= 1)
		{
			cout << (1 / 2 * x + 1) << endl;
		}
		else
		{
			cout << (3 - 2 * x) << endl;
		}	
	}
	else
	{
		cout << (x * x) << endl;
	}
	return 0;
}