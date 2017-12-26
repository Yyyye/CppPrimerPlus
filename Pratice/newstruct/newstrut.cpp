#include<iostream>
struct   inflatable
{
	char name[10];
	float volume;
	double price;

};
int main()
{
	using namespace std;
	inflatable *ps = new inflatable(); //alot memory for struct
	cout << "Enter of  inflatable  item" << endl;//使用动态结构时需要使用成员运算符  ->
	//如果结构标识名是结构名  则用据点运算符  如果是指针的  则使用->(箭头运算符)
	cin >> (*ps).volume;
	cout << "Enter price :$";
	cin >> ps->name;
	cout << "Name : " << (*ps).name << endl;
	cout << "Volume :" << ps->volume << "cubic feet \n";
	cout << "Price :$ " << ps->price << endl;
	delete ps;
	cin.get();
	cin.get();
	cin.get();
	return 0;

	//结构初始化  
	//things gub={3,345,33};

	//指针初始化 
	//things *pt =new things;  //things *pt =&gub;

}