#include<iostream>
#include<vector>
#include<array>

int main()
{
	using namespace std;
	double a1[4] = { 1.2,2.4,3.6,4.8 };

	//C++ 98 STL
	vector<double> a2(4); //自由存储 ,堆
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;

	//C++ 11
	array<double, 4> a3 = { 3.14,2.72,1.62,1.41 };  //栈中
	array <double, 4>  a4;
	a4 = a3;
	cout << " a1[2]  " << a1[2] << " at " << &a1[2] << endl;
	cout << " a2[2]  " << a2[2] << " at " << &a2[2] << endl;
	cout << " a3[2]  " << a3[2] << " at " << &a3[2] << endl;
	cout << " a4[2]  " << a4[2] << " at " << &a4[2] << endl;

	//misdeed
	a1[-2] = 20.2;  //不检查数组越界错误  相当于 往前移动两个double大小的偏移
	//使用 at 来解决这种角标的不安全性  at会检查数组越界的问题
	cout << " a1[-2] " << a1[-2] << " at " << &a1[-2] << endl;
	cout << " a3[2] " << a3[2] << " at " << &a3[2] << endl;
	cout << " a4[2] " << a4[2] << " at " << &a4[2] << endl;
	cin.get();
	return 0;


}