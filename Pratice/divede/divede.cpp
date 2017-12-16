#include<iostream>

int main()
{
	using namespace std;
	cout.setf(iostream::fixed, ios_base::floatfield);
	cout << "Integer  division  9/5  = " << 9 / 5 << endl;
	cout << "Floating division  9,0/5.0 =" << 9.0 / 5.0 << endl;
	cout << "Mix division  9.0/5  = " << 9.0 / 5 << endl;
	cout << "double constants " << 1e7 / 9.0 << endl;  //如果两个都是double  结果都会转为double
	cout << "float constants " << 1e7f / 9.0f << endl;  // 如果两个都是float    结果位float
	cout << " mix float doubel constant " << 1e7 / 9.0f << endl;  //混合的情况下是double1
	cin.get();
	return 0;
}