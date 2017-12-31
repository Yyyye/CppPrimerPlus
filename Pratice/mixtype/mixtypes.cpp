#include<iostream>

struct antarctica_years_end
{
	int year;
	
};

int main()
{
	antarctica_years_end s01, s02, s03;  //声明三个结构体  s01 , s02, s03
	s01.year = 1998;    
	antarctica_years_end *pa = &s02;   //取地址符 &  获取 s02的地址给pa
	pa->year = 1999;  // 这里就是->符号和.符号的使用不同之处
	antarctica_years_end trio[3];   //声明数组  antarctica_years_end  数组
	trio[0].year = 2003;
	//
	std::cout << trio[0].year << std::endl;   //2003
	const antarctica_years_end *arp[3] = { &s01,&s02,&s03 };   //又声明了一个arp的数组
	std::cout << arp[1]->year << std::endl; //1999
	const antarctica_years_end ** ppa = arp;  //指针的指针
	auto ppb = arp;	    // 一种便捷方法
	std::cout << (*ppa)->year << std::endl; //1998  
	std::cout << (*(ppb + 1))->year << std::endl;//1999
	std::cin.get();
	return 0;
}