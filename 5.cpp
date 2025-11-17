#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "请输入华氏温度" << endl;
	float i;
	cin >> i;
	const float k = (i - 32) / 1.8f;
	cout << "摄氏温度为" <<fixed<<setprecision(2)<< k << endl;
	return 0;
}