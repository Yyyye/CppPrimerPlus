#include<iostream>
int main()
{
	using namespace std;
	cout << "What year wat your hours built ? \n";
	int year;
	cin >> year;
	 // 方案1
	// cin.get();
	// 方案二
	//(cin>> year).get();
	cout << "What is its street  address ? \n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built " << year << endl;
	cout << "Address :" << address << endl;
	cout << "Done !";  //读取地址出现问题  因为 getline 看到换行符  认为这个是一个空行 ,所以直接将空字符 赋值给address数组
				// 解决之道是读取地址之前 将换行符丢弃
	cin.get();
	return 0;
}