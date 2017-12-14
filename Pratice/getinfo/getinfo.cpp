//getinfo.cpp  ---input and output
#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;
	cout << "How   many carrtos  do you have ?"<<endl;
	cin >> carrots;  //cin的输入流 流向carrots
	cout << "Here are two more ";  //以下时cout的拼接
	carrots = carrots + 2;  //cout 是ostream类(iostream的成员)
	cout << "Now you have " << carrots << " carrots";  //当输入比较长时, 使用分行输出的方式 
	//cin.get();  //这里需要输入两行的cin.get()才可以解决 cin.get();直接退出
	//cin.get();  //第一条cin.get() 在输入数字的时候并按Enter时读取输入 ,第二条才是暂停
	system("pause"); //也可以使用system("pause");

	return 0;

	///////////////////////////////////////////////////////
	// C++ 包括两种向对象传递消息的方式 
	// 1.使用类方法
	// 2.重新定义运算符


}