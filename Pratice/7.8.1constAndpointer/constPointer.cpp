#include<iostream>

//指针和const
//可以用两种不同的方式  将const 用于指针 
//第一种方法是让指针指向常量指针. **可以防止使用该指针来修改所指向的值**
//第二种方式 是将指针声明为常量, 这样可以放置改变指向的位置

int main()
{
	using  namespace std;
	int age = 39;
	const int * pt = &age;
	//*pt = 20;  invalid
	age = 20;  //valid

	const float g_earth = 9.80;  
	const float *pe = &g_earth;  //valid 
	
	const  float g_moon = 1.63;
	//const *pm = &g_moon;  invalid

}