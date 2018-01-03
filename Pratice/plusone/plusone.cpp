#include<iostream>
int main()
{
	using namespace std;
	int a = 20;
	int b = 20;
	cout << "a = " << a << " ; b= " << b << "\n";
	cout << "a++ = " << a++ << ": ++b =" << ++b << endl; //20 21
	cout << "a  = " << a << ": b=" << b << "\n";

	double  arr[5] = { 21.2,32.8,23.4,45.2,37.4 }; 
	double *pt = arr;
	cout << *pt++ << endl;
	cout << *pt << endl;
	cin.get();
	return 0;

}

//额外补充
//指针和递增运算的问题
//double  arr[5] = { 21.2,32.8,23.4,45.2,37.4 };
//double *pt = arr;
//++pt;    将什么解除引用 将什么递增 取决于运算符的位置和优先级  
// 前缀递增和前缀递减 以及解除引用的优先级相同   从右到左
//后缀递增和后缀递减的优先级相同,  比前缀的优先级更高 从左到右
// example

// 1. *++pt   ----- >   因为是前缀递增 优先级  是  从右到左   所以   先 进行  ++pt  然后在进行 *运算
// 2. ++*pt   ------>   同样也是前缀递增  优先级是 从右到左   所以   先进行 * 运算 然后 对将这个这个值进行++  这里是对值
// 3.(*pt)++  ------>   这里是后缀递增 优先级  是  从左到右   所以   先进行 * 运算 然后 再进行 ++运算  
// 4. *pt++   ------>   //dereference  original  location  then increase  pointer 


