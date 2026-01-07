#include<iostream>
#include"number.h"
using namespace std;
int main()
{
	int a, b, h;
	number number1;
	number number2;
	number number3;

	for (int i = 1; i < 4; i++)
	{
		cout << "请输入第"<<i << "个长方体的长宽高:";
		cin >> a >> b >> h;
		if (i == 1) {
			number1.input(a, b, h);
		}
		else if (i == 2) {
			number2.input(a, b, h);
		}
		else {
			number3.input(a, b, h);
		}
		cout << "第" << i << "个长方体的体积为:";
		if (i == 1) {
			number1.output();
		}
		else if (i == 2) {
			number2.output();
		}
		else {
			number3.output();
		}
		cout << endl;
      }
	return 0;
}