#include<iostream>

// STL 将区间法广义化  --- >  超尾的概念  :对于数组而言,表示数组结尾的参数指向最后元素后面的指针
//如:  int  elbound[20]  elbound 和elbound+20 定义了区间   这是种指针定义的方式
//  需要正确的顺序传递传递指针

const int ArSize = 8;
int sum_arr(const int * begin, const int * end);

int main()
{
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "Total  cookies eaten : " << sum << endl;
	sum = sum_arr(cookies + 4, cookies + 5);
	cout << "Last  four  eaters ate " << sum << endl;
	system("pause");
	return 0;
}

int sum_arr(const int * begin, const int *end)
{
	const int * pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
		total += total+ *pt;

	return total;
}




