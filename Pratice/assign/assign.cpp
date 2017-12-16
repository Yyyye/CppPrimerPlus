#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	int tree = 3;
	int guess(3.9832);  //这里被截断了   只保留3   

	//这里的初始化方式     C++11  --->  { } 列表初始化   不允许 缩窄对类型转换更加严格  变量的类型可能无法表示赋给他的值

	int debt = 7.2E12;
	cout << "tree " << tree << endl;
	cout << "guess " << guess << endl;
	cout << "debt " << debt << endl;
	cin.get();
	return 0;

	//额外的补充 :
	// 如果有一个操作数 是long double 则另一个会转化为long double
	//  ...double			..  double
	//  ...float			.. float
	//    否则 就是整型提升 
	// 两个操作数 都是有符号 和无符号的   操作符存在级数差别   结果会转化为高级别的
	// 一个是有符号的 另一个 是无符号的 无符号的操作级数比有符号的高  则有符号转为无符号
	// 如果有符号类型 可以表示无符号类型的所有值  无符号转为 有符号
	// 否则 两个操作数都转为有符号的 类型的 无符号版本

	//强制类型转化的几种方式
	//   (long )haha  
	//    long(haha)

	//static_cast<long> (thron)
	//static_cast<typeName>(value)


	//
}	
