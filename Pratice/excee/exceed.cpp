#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short  sue = sam;
	cout << "Sam has " << sam << " dolars and Sue has " << sue;
	cout << " dollars deposited " << endl
		<< "And $1 to each account  " << endl << "Now";
	sam = sam + 1;
	sue = sue + 1;
	cout << " Sam has " << sam << " dollars  and Sue has " << sue;
	cout << " dollars doposited .  \n Poor Sam " << endl;
	

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and  Sue  has " << sue;
	cout << " dollars  deposited ." << endl;
	cout << "Take $1 from each account " << endl << "Now";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited . " << endl << "Lucky Sue! " << endl;
	
	cin.get();


	//short 变量 sam 和 unsigned short 变量 sue  分别设置为SHORT MAX  导致这样一个问题
	// 比如说 :    sam +1   --->   超出了  short的最大值   sam 变成  -32768  sue 的界限比这个大  所以没问题
	//      设置 sam 和sue 为0     现在  将这两个  减1   sam 没问题  sue 变成了 65535
			

	// int  是计算机的自然常量  ---  >   运行效率最高`	 
	//变量可能大于16位  long
	// 存储超过20亿  long long   
	// 大型整型数组   short  
	// 一个字符  char
	return 0;
	
}