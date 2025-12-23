#include"mytemperature.h"
#include<iostream>
using namespace std;
//摄氏度到华氏度
double celsius_to_fah(double cel)
{
	return (((cel * 9) / 5) + 32);
}
//华氏温度到摄氏温度
double fahrenheit_to_cels(double fah)
{
	return (((fah - 32) * 5) / 9);
}