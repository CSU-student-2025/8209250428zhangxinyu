#include<iostream>

using namespace std;
int main()
{
	int i;
	int h = 0;
	int z = 0;
	for (i = 2; i < 100; i = i * 2,++z)
	{
		h = i + h;
	}
	cout << (h/z)*0.8 << endl;
	return 0;
}