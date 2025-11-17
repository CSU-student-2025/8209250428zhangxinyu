#include<iostream>

using namespace std;
int main()
{
	cout << "请输入三条边长" << endl;
	float a, b, c;
	cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "周长为"<<(a + b + c) << endl;
		const int h = (a - b) * (a - c) * (b - c);
		if (h==0)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
	}
	else
	{
		cout << "无法构成三角形" << endl;
	}
	return 0;
}