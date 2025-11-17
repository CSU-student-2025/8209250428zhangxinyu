#include<iostream>

using namespace std;
int main()
{
	int r, h;
	float w = 3.14;
	cin >> r >> h;
	const float v = w * r * r * h / 3;
	cout << v << endl;
	return 0;
}