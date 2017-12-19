#include <iostream>

struct  inflatable
{
	char name[20];
	float volumn;
	double price;
};


struct widget
{
	char brand[20];
	int type;
	union
	{//  匿名的方式
		int id_num;
		char id_char[20];
	};

};

int main()
{
	using namespace std;
	inflatable  guest[2] = {
		{"Bambi",0.5,21.99},
		{"Godzilla",2000,565.99}
	};

	cout << "The guest " << guest[0].name << " and " << guest[1].name << endl;
	cout << " have  a combined volume of " << guest[0].volumn + guest[1].volumn <<" cubic feet"  <<endl;
	cin.get();
	

	//共用题  用于一组相同数据类型的数据格式    仅有int double和 long 但是同时一种类型只能有一种  
	//比如下面的代码就无法通过编译
	//union test
	//{
		//int test;
		//double test2;
		//int test2;

	//};

	return 0;
}