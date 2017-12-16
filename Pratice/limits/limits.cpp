//在Cpp中前面部分的内容纪录
// 数据类型的的宽度
//  16<=short << int (至少和short一样长) << 32 << long(至少和int 一样长) << 64<<long long (至少和long一样长)
#include<iostream>
#include<climits>

int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;


	//sizeof  operater yields side of type or of variable
	cout << "int is " << sizeof(int) << " bytes ." << endl;  
	cout << "int sizeof test " << sizeof(n_int) <<" bytes."<< endl;
	cout << "int  sizeof test 2 :" << sizeof n_int << " bytes." << endl;  //可以去掉括号
	cout << "short is " << sizeof n_short << " bytes ," << endl;
	cout << "long is " << sizeof n_long << " bytes " << endl;
	cout << "long long is " << sizeof n_llong << " bytes " << endl;
	cout << endl;
	
	cout << "Maximum values :" << endl;
	cout << "int :" << n_int << endl;
	cout << "short :" << n_short << endl;
	cout << "long :" << n_long << endl;
	cout << "long  long :" << n_llong << endl;

	cout << "Minimum int value " << INT_MIN << endl;
	cout << "Bits per byte" << CHAR_BIT << endl;  //字符的位数
	cin.get();

	return 0;

	// climites  包含这样的语句   
	#define  INT_MAX =32767  //预编译命令 在程序运行前 会找到所有的INT_MAX 进行代替  是C的定义方式 ,  const是C++的方式

}