#include<iostream>
void cheers(int);
double cube(double x);

int main()
{
	using namespace std;
	cheers(5);
	cout << "Give me  a number :\n";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << " A " << side << " foot cube has a volume of ";
	cout << volume << "cubic feet\n";
	cheers(cube(2));
	system("pause");
	return 0;
}

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers" << endl;
	cout << endl;
	
}

double cube(double x)
{
	return x*x*x;
}

//C++ 存在原型的原因
//原型描述 函数到编译器的接口  将函数的返回值类型(if exits) 以及参数类型 告诉编译器  
//原型存在的意义是提高编译效率 检查错误等.. (存在函数在不同文件的情况 以及停止main函数的编译的问题)


//正确的语法
// 以分号结尾  不要求提供变量名

//C++原型和 ANSI原型
//ANSI C中的原型是可选的 
//C++中不可缺少  
//C++为空时 定义和void 相同  ANSI为空的时候 表明不指出参数 (将在后面定义参数列表 )  C++不指定参数列表可以使用省略号  
//void  say_hi(...)


//原型的功能 
// 1.确保编译器正确处理函数返回值
// 2.编译器检查使用参数数目是否正确
// 3.编译器检查使用参数的类型是否正确


