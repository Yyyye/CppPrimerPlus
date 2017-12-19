#include<iostream>
int main() 
{
	using namespace std;
	int update = 6;// &地址运算符  获取地址
	int * p_updates ;  // 用于存储地址   * 被称为间接值  解除引用运算符     //*p_updates 和int 等效  
	p_updates = &update;//p_updates 是指针  // 更强调类型  --->   int*  是一个是一种类型(C++中)
			//两个指针的长度相同  但是指向的类型不同

	//two ways to express  value 
	cout << "Value  : update  " << update;
	cout << "p_update " << *p_updates << endl;
	// two ways to express address
	// 一种是直接显示指针   另一种是  取地址符
	cout << "Address:&update " << &update << endl;
	cout << " ,p_update " << p_updates << endl;


	//use pointer  to change value 
	*p_updates = *p_updates + 1;
	cout << " Now  updates " << p_updates << endl;
	cin.get();
	return 0;
}