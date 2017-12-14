#include<iostream>

int main()
{
	using	namespace std;
	int carrots;  //定义 carrots  变量
	carrots = 25;  //赋值
	cout << "I have ";
	cout << carrots;
	cout << "carrots.";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch . crunch . Now I have " << carrots << " carrots ." << endl;  //相比较于prinf 更加"智能"
	cin.get();
	return 0;

}
