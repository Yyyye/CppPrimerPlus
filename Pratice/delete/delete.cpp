#include<iostream>
#include<cstring>
using namespace std;

char * getname(void);

int main()
{
	char *name;
	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;
	 
	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;
	return 0;
}

char * getname()
{
	char temp[80];
	cout << " Enter last name ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(temp,pn);
	return pn;
}
//存储

//1.自动存储  函数内定义的变量使用自动存储空间   随函数 (生)(死)  ---> 内存发生变化  局部变量   FILO 栈
//2.静态存储  程序运行期间都存在的存储方式   函数外定义 或者使用 static
//3.动态存储  管理一个内存池  较上面两个更灵活   堆