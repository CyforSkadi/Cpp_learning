#include<iostream>
using namespace std;



void swap1(int num1, int num2)	
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	//return;
}

int main3()
{
	
	int a = 10;
	int b = 20;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap1(a, b);
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}