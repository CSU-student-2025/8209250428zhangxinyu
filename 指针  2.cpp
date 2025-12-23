#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int parseHex(const char* const hexString)
{
    if (hexString == nullptr) return 0;

    int result = 0;
    int i = 0;

    for (; hexString[i] != '\0'; ++i)
    {
        unsigned char ch = static_cast<unsigned char>(hexString[i]);
        int digit = -1;
        if (ch >= '0' && ch <= '9') digit = ch - '0';
        else if (ch >= 'a' && ch <= 'f') digit = 10 + (ch - 'a');
        else if (ch >= 'A' && ch <= 'F') digit = 10 + (ch - 'A');
        else break;

        result = result * 16 + digit;
    }

    return result;
}

int main()
{
    cout << "请输入十六进制字符串（可带前缀 0x），回车结束：" << endl;
    string input;
    if (!getline(cin, input)) return 0;

    int a = parseHex(input.c_str());
    cout << "对应的十进制数为: " << a << endl;

    return 0;
}