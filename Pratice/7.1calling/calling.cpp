#include<iostream>
double simple(); // 函数原型(function prototype)
int main()
{
	using namespace std;
	cout << "main()  will call  the simple function";
	int x =	simple(); //函数调用( function call)   main 在这里寻找寻找返回值 并赋值给x 函数原型告诉main 可以返回 double
	cin.get();
	return 0;
}
double simple() { //函数定义(function definition)
	using namespace std;
	cout << " I'm  but a simple function\n"; 
	return 5; //计算返回值   并由函数原型告知 该返回什么类型的数据
}
//过程 :
//1. 函数通过将返回值赋值到指定cpu寄存器或或者内存单元中, 并将其返回
//2. 随后调用程序去查看该内存单
//3. 返回函数和调用函数必须就该内存单元存储的数据类型达成一致
//4. 函数原型将返回值告知调用程序.函数定义命令被调用函数该返回什么类型
