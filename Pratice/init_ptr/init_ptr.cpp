#include<iostream>
int main()
{
	// 一定要在对指针应用解除运算符*  之前将指针初始化为一个确定的适当的位置////
	using namespace std;
	int higgens = 5;
	int * ptr = &higgens;
	cout << "Value of  higgens=" << higgens << " : Anddres  of higgens = " << &higgens << endl;
	cout << "Value of *pt " << *ptr << ";Value of pt =" << ptr << endl;
	cin.get();
	return 0;

	// 指针的危险
	//  long * fellow ;
	//  *fellow  =233333   指针被指向了 23333
	
	
	
	
	

}