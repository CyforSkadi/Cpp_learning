#include<iostream>
using namespace std;

int main3() {

	//用户输入分数，分数大于600，视为考上一本大学
	//大于500，视为考上二本大学
	//大于400，视为考上三本大学
	//小于等于400，视为未考上本科

	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;

	if (score > 600)//if条件后面不要加分号
	{
		cout << "恭喜您考上一本大学" << endl;
	}
	else if (score > 500)
	{
		cout << "恭喜您考上二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上三本大学" << endl;
	}
	else
	{
		cout << "未考上本科" << endl;
	}

	system("pause");

	return 0;
}