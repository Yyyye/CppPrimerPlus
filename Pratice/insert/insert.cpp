#include<iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char  name[ArSize];
	char dessert[ArSize];
	
	cout << "Enter  your name .\n";
	cin >> name;  
	//假设输入的是 全名   Test Name   
	//cin 只读取第一个单词 放到数组内 
	//然后  自动加入空字符 再把第二字符 放到输入队列中
	// 当第二次需要输入最喜欢的食物的时候 则会将 Name 直接读入  
	// 导致第二次的cin<< 并没有显示给使用者
	// 我们需要getline() 解决这个问题
	cout << "Enter your favorite dessert \n";
	cin >> dessert;
	cout << "I have some dilicious " << dessert;
	cout << " for  you. " << name << ".\n";
	cin.get();
	cin.get();
	cin.get();
	return 0;


}