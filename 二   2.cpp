#include<iostream>
using namespace std;
void bubble_sort(double a[], int n)
{
	double t;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
	{
		double x;
		cin >> x;
		a[i] = x;
	}
	bubble_sort(a, 10);
	for (int i = 0; i < 10; ++i) {
		if (i) cout << ' ';
		cout << a[i];
	}
	cout << '\n';

	return 0;
}
