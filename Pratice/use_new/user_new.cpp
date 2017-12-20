#include<iostream>
int main()
{
	using namespace std;
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;
	cout << "nights value = "<<nights;
	cout << "ngiths " << " : location " << &nights << endl;
	
	cout << "int ";
	cout << "value  =" " locatin " << &nights << endl;
	double * pd = new double;
	*pd = 10000001.0;
	cout << "double ";
	cout << "value  = " << *pd << ": location  =" << pd << endl;
	cout << "size of  pf =" << sizeof(pt);
	cout << "size of *pf " << sizeof(*pd) << endl;
	cout << "size of pd =" << sizeof  pd;
	cout << " : size of *pd " << sizeof(*pd) << endl;
	cin.get();
	return 0;

	//delete  释放 用new 初始化的内存  不要使用delete 释放一块内存两次
	//  使用 new[] 初始化地址  --->  使用delte[] 释放地址
	//  new的实体类 也应该用delete 释放  
	//对空指针而言 delete是安全的 
	// int * pome = new int [10];
	// 通常对大型数据(数组 ,字符串,结构) 使用new
	//静态编译和动态编译(不管是否使用是否被分配内存)




	
}