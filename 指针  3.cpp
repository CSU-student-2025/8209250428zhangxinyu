#include<iostream>
using namespace std;
void f(char* st, int i)
{
    st[i] = '\0';
    cout << st;   
    if (i > 1) f(st, i - 1);
}
void sortAscending(int *arr, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        if (minIdx != i)
        {
            int tmp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = tmp;
        }
    }
}

int main()
{
    cout << "请输入数组元素个数: ";
    int n;
    if (!(cin >> n) || n <= 0) return 0;

    int *arr = new int[n];

    cout << "请输入 " << n << " 个整数，以空格或回车分隔:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "数组首地址 (指针值): " << static_cast<const void*>(arr) << endl;
    cout << "通过索引访问内容: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << (i + 1 < n ? " " : "");
    cout << endl;

    sortAscending(arr, n);

    cout << "排序后（从小到大），通过指针遍历输出: ";
    for (int *p = arr; p < arr + n; ++p)
    {
        cout << *p;
        if (p + 1 < arr + n) cout << " ";
    }
    cout << endl;


    delete[] arr;
    arr = nullptr;

    return 0;
}