#include<iostream>

int main()
{
	using namespace std;
	float a = 2.34E+22f;
	float b = a + 1.0f;
	cout << "a = " << a << endl;
	cout << " b-a  = " << b - a << endl;
	cin.get();   //float 只能保证前六位 或者前七位的有效    所以在第23位表示的时候 会出现问题
	return 0;
}