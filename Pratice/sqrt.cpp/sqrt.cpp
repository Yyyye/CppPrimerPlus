#include<iostream>
#include<cmath>

///C++ 函数分为两种
// 1.有返回值  2.无返回值
///需要为每个函数提供函数原型
// 1.在源代码中输入函数模型
// 2.包含头文件
// 函数原型描述的是函数的参数和返回值 而头文件描述的是  函数的定义中包含函数的代码

int main()
{
	using namespace std;
	double area;
	cout << "Enter the floor area ,in square feet , of your home.";
	cin >> area;
	double side ;
	side = sqrt(area);
	cout << "That's  the equivalent  of a square " << side
		 << " feet to side" << endl;
	cout << "How fascinating " << endl;
	cin.get();
	cin.get();
	return 0;
}

// 定义的函数原型(例子)
//  double pow(double,double);
//  int rand(void);
//  void bucks(double);
///////////////////////////////////////////////
// 额外的英语补充:
	// 对于有返回值的成为函数(function)
	// 没有返回值称为过程(proceudre) 或者 子程序(subroutine)







