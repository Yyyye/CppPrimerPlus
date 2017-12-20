#include<iostream>
int main() 
{
	using namespace std;
	double wages[3] = { 10000.0,20000.0,10000.0 };
	short stacks[3] = { 3,2,1 };
	//test
	cout << stacks+1 << endl;   //取的是数组第一个的地址
	cout << &stacks << endl;  //取得是数组整个地址   二者不同`

	double *pw = wages;  //声明一个指针 指向 wages
	short *ps = &stacks[0];

	//with array element 
	cout << "pw =" << pw << ",*pw =" << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw  pointer :\n";
	cout << "pw = " << pw << " *pw" << *pw << "\n\n";
	cout << "ps = " << ps << "*ps  = " << *ps << "\n\n";

	ps = ps + 1;  // 让ps的指针指向下一个
	cout << " add 1 to the ps pointer \n";
	cout << "ps = " << ps << "*ps  = " << *ps << "\n\n";
	cout << "access two  element with array notation \n";
	cout << "stack[0]" << stacks[0];
	cout << ", stack[1] " << stacks[1] <<endl;
	cout << "access two elements with ponter notation \n";
	cout << "*stack " << *stacks << ", *(stacks+1) " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array  \n";
	cout << sizeof(pw) << " =size of pw array" << endl;
	cin.get();
	return 0;










}