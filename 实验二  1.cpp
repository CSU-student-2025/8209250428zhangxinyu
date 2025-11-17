#include<iostream>

using namespace std;
int main()
{
	char x ;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;	
	cin >> x;
	if ('a' <= x &&x<= 'z')
	{
		const char i = x - 32;
		cout << i << endl;
	}
	else
	{
		const char h = x + 1;
		cout << static_cast<int>(static_cast<unsigned char>(h)) << endl;
	}
	return 0;
}