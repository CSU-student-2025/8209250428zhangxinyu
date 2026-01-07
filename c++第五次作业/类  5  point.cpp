#include<iostream>
#include"point.h"
using namespace std;
point::point(int x, int y)
	:x(x), y(y)
{

}
void point::setpoint(int i, int j)
{
	x = 60 + i;
	y = 80 + j;
}
void point::display()const
{
	cout << "×ø±êÎª: (" << x << ", " << y << ")" << endl;
}