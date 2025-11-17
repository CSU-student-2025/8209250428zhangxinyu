#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input;
	cout << "输入字符串:" << endl;
	getline(cin, input);
	int z = 0;
	int e = 0;
	int m = 0;
	int k = 0;
	int t = 0;
	for (size_t i = 0; i < input.size(); ++i)
	{
		char c = input[i];
		const int h = static_cast<int>(c);
		if (h >= 48 && h <= 57)
		{
			m = m + 1;
		}
		else if (h >= 65 && h <= 90)
		{
			z = z + 1;
		}
		else if (h >= 97 && h <= 122)
		{
			e = e + 1;
		}
		else if (h >= 33 && h <= 47 || h >= 58 && h <= 64 || h >= 91 && h <= 76)
		{
			t = t + 1;
		}
		else if (c == ' ')
		{
			k = k + 1;
		}
	}
	cout << "数字字符个数为" << m << endl;
	cout << "中文字符个数为" << z << endl;
	cout << "英文字符个数为" << e << endl;
	cout << "其他字符个数为" << t << endl;
	cout << "空格字符个数为" << k << endl;
	return 0;
}