#include<iostream>
#include<iomanip>
#include <cstring>
#include<string>


using namespace std;
int indexOf(const char s1[], const char s2[])
{
	if (s1 == nullptr || s2 == nullptr) return -1;
	int i = 0;
	int a = strlen(s1);
	int b = strlen(s2);
	if (b == 0) return 0; 

	for (i = 0; i <= a - b; ++i)
	{
		int j = 0;
		while (j < b && s1[i + j] == s2[j]) ++j;
		if (j == b)return i;
	}	
	return -1; 
}
int main()
{
	cout << "输入主字符，回车结束" << endl;
	string str1;
	if (!getline(cin, str1))return 0;

	cout << "输入子字符，回车结束" << endl;
	string str2;
	if (!getline(cin, str2))return 0;
	int c = indexOf(str1.c_str(), str2.c_str());
	if (c >= 0)
		cout << "找到，起始位置（从0计）: " << c << endl;
	else
		cout << "未找到子字符串" << endl;
	return 0;
}