#include<iostream>

using namespace std;
int main()
{
	float a;
	cin >> a;
	float x = a;
	float y = 0;
	while (abs(x - y) >0.00001)
	{
		y = x;
	    x = (x + a / x)*0.5;
		
		
		
	}
	cout << x << endl;
	return 0;
}