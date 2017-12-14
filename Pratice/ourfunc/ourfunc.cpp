#include <iostream>
void simon(int);
int main()   //返回给unix或者window  或者退出值  window 或者unix的脚本可以通过这个值检测程序是否运行成功
{
	using namespace std;
	simon(5);
	cout << "Pick an integer ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!";
	cin.get();
	cin.get();
	return 0;
}
void simon( int n)  //函数头  
{
	using namespace std;
	cout << "Simon says touch  your toes " << n << " times " << endl;
}
//首先是一个函数头,然后花括号的函数体
//simon位于main下方  C++ 不允许函数嵌套