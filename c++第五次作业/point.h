#pragma once
class point
{
private:
	int x;
	int y;
public:
	point(int x, int y);
	void setpoint(int i, int j);
	void display()const;
};