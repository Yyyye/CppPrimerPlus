#include<iostream>
int main()
{
	// 32<=float <<48 <<double << long double 
	// 通常  float 位32位  double为64位  long double 为89 ,96 或者128
	//有效范围是  -37到37位
	
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);  //迫使输出使用定点表示法  程序显示为小数点后6位  
	//ios_fixed 和floatfield 是iostream 提供的常量
	//float 至少保证有6位有效数字
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;  
	const float million = 1.0e6;
	cout << "tub =" << tub;
	cout << ", a million  tubs  = " << million *tub; // (这里 第七位还是有效的 但是在第七位之后  开始 不准确  输出为  3333333.2500000)
	cout << ", \nand  ten millon tubs =";
	cout << 10 * million *tub << endl;
	cout << "mint = " << mint << " and a million  mints =";
	cout << million *mint << endl;   //至少为13位精确  这里是15位 (系统)
	cin.get();
	return 0;
	//浮点常量 
	//  1.234f
	//  2.45E20F
	//  2.345324E28
	//  2.2L



}