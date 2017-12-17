#include<iostream>


//结构定义中 分为两步:
	//1.定义结构描述(声明 各种数据类型)
	//2.然后创建结构变量 (结构数据对象)

struct  inflatable  // 结构名称   struct 可以省略
{  // 
	char name[20];
	float volumn;
	double price;
};
int main()   // 结构声明 可以放在main里面也可以放在main 上方
{
	using namespace std;   // 结构创建 也可以放在一行中进行
	inflatable guest =   	//  创建一个guest  用户
	{
		"Glorious Gloria",
		1.88,
		22.99
	};


	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Expand your guest list with " << guest.name << " and " << pal.name << "\n";
	cout << "You can both have for $" << guest.price + pal.price << "\n"<<endl;
	cin.get();
	return 0;

}



