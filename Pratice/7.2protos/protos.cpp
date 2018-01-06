#include<iostream>
void cheers(int);
double cube(double x);

int main()
{
	using namespace std;
	cheers(5);
	cout << "Give me  a number :\n";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << " A " << side << " foot cube has a volume of ";
	cout << volume << "cubic feet\n";
	cheers(cube(2));
	system("pause");
	return 0;


}

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers" << endl;
	cout << endl;
	
}

double cube(double x)
{
	return x*x*x;
}

//C++ 存在原型的原因
//原型描述 函数到编译器的接口  将函数的返回值类型(if exits) 以及参数类型 告诉编译器


//正确的语法