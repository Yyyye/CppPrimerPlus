#include<iostream>
int main()
{
	using namespace std;
	int a = 20;
	int b = 20;
	cout << "a = " << a << " ; b= " << b << "\n";
	cout << "a++ = " << a++ << ": ++b =" << ++b << endl; //20 21
	cout << "a  = " << a << ": b=" << b << "\n";
	cin.get();
	return 0;

}

//额外补充
//指针和递增运算的问题
//double  arr[5] = { 21.2,32.8,23.4,45.2,37.4 };
//double *pt = arr;
//++pt;    将什么解除引用 将什么递增 取决于运算符的位置和优先级   前缀递增和前缀递减 以及解除引用的优先级相同  从左到右