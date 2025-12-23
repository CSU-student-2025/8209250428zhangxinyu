#include<iostream>
using namespace std;
int main()
{
	bool a[100]{false};
	for (int i = 1; i < 100; i++)
	{
		for (int m = 0; m * i + i < 100; m++)
		{
			a[m * i + i] = !a[m * i + i];
		}		
	}
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == 1)
		{
			cout <<' ' << i;
		}
	}
	return 0;
}