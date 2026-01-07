#include<iostream>
#include"student_max.h"
using namespace std;
void student::set_value(int i, int s)
{
	id = i;
	num = s;
}
void student::display() const
{
	cout << "Ñ§ºÅ:" << id <<' ' << "³É¼¨:" << num << endl;
}
 int student::getid()const
{
	return id;
}
 int student::getnum()const
 {
	 return num;
 }