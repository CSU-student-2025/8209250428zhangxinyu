#pragma once
class student {
private:
	int id;
	int num;
public:
	void set_value(int id, int num);
	void display() const;
	int getid() const;
	int getnum() const;
};