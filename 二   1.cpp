#include<iostream>
#include <vector>
using namespace std;
int main()
{
	int a[10];
	int b = 0;
	for (int i = 0; i < 10; i++)
	{
		int x;		
		if (!(cin >> x)) return 0;

		bool exists = false;
		for (int m = 0; m < b; ++m) {
			if (a[m] == x) {
				exists = true;
				break;
			}
		}

		
		if (!exists && b < 10) {
			a[b++] = x;
		}
	}
	for (int i = 0; i < b; i++)
	{
		cout << ' ' << a[i];
	}

	return 0;
}