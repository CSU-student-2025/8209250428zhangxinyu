#include<iostream>
#include<cctype>
#include<iomanip>
#include<string>
#include <cstring>
using namespace std;
void count(const char s[], int counts[])
{
	
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;

	}
	if (s == nullptr)return;
	for (int i = 0; s[i] != '\0'; i++)
	{
		unsigned char a = static_cast<unsigned char>(s[i]);
		if (isalpha(a))
		{
			char lower = static_cast<char>(tolower(a));
			counts[lower - 'a']++;
		}
	}
}
int main()
{
	cout << "ÇëÊäÈë×Ö·û´®" << endl;
	string s;
	if (!getline(cin, s))return 0;
	int counts[26];
	count(s.c_str(), counts);
	for (int i = 0; i < 26; ++i)
	{
		if (counts[i] != 0)
		{
			cout << static_cast<char>('a' + i) << ": " << counts[i] << (i + 1 < 26 ? "  " : "\n") << endl;
		}
	}
	return 0;
}