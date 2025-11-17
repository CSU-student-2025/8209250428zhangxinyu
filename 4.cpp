#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe
	cout << "output in unsigned int type:" << testUnint << endl;//<<oct;
	cout << "output in char type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double> (testUnint) << endl;
	cout << "output in double type:" <<setprecision(4)<< static_cast<double> (testUnint) << endl;
	cout << "output in Hex unsigned int type:" << oct << testUnint <<dec<<endl;//16½øÖÆÊä³ö system("pause");
	

	return 0;

}