#include<iostream>
#include"number.h"
using namespace std;
void number::output(){
	cout << "Ìå»ýÎª:" << (length * height * width);
}
void number::input(int a, int b, int h)
{
	length = a;
	width = b;
	height = h;
}