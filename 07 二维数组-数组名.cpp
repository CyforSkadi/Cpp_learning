#include<iostream>
using namespace std;

int main7()
{
	//1、查看内存空间大小
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组一行大小： " << sizeof(arr[0]) << endl;
	cout << "二维数组元素大小： " << sizeof(arr[0][0]) << endl;

	cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2、查看二维数组的首地址
	cout << "二维数组首地址：" << (int)arr << endl;
	cout << "二维数组第一行地址：" <<(int) arr[0] << endl;
	cout << "二维数组第二行地址：" << (int)arr[1] << endl;

	cout << "二维数组第一个元素地址：" << (int)&arr[0][0] << endl;
	cout << "二维数组第二个元素地址：" << (int)&arr[0][1] << endl;

	system("pause");

	return 0;
}