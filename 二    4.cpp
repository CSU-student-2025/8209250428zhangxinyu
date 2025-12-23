#include<iostream>
#include<vector>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	// 使用标准归并方法，最多进行 size1 + size2 次比较
	while (i < size1 && j < size2)
	{
		if (list1[i] <= list2[j])
			list3[k++] = list1[i++];
		else
			list3[k++] = list2[j++];
	}
	while (i < size1)
		list3[k++] = list1[i++];
	while (j < size2)
		list3[k++] = list2[j++];
}
int main()
{
	cout << "第一项为数组元素个数";
	cout << "请输入两个数组" << endl;
	//第一数组
	cout << "第一数组:";
	int size1;
	if (!(cin >> size1)) return 0;
	vector<int>list1(size1);
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	//第二数组
	cout << "第二数组:";
	int size2;
	if (!(cin >> size2)) return 0;
	vector<int>list2(size2);
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	//第三数组
	int size3 = size1 + size2;
	vector<int> list3(size3);
	merge(list1.data(), size1, list2.data(), size2, list3.data());
	cout << "第三数组：" << endl;
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << (i + 1 < size3 ? " " : "");
	}
	cout << endl;

	return 0;
}