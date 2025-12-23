#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	for (int i = 10; i > 1; i--)
	{
		a = (a + 1) * 2;
	}
	cout << a << endl;
	return 0;
}