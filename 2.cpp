#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num = 2;
    int h = 0;
    while (h < 200)
    {
        if (is_prime(num))
        {
            cout << setw(6) << num;
            h = h + 1;
            if (h % 10 == 0)
            {
                cout << endl;
            }
        }
        num++;
    }
    return 0;
}