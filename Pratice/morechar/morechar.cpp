#include <iostream>

int main()
{
	using namespace std;
	char ch = 'M';   //char 初始化为 M
	int i = ch;
	cout << "The ASCII code  for " << ch << " is " << i << endl;

	cout << "Add one to the character  code :" << endl;
	ch = ch + 1;   //ch本质上是一个整形   然后 对其 +1
	i = ch;   //  ch赋值给 i 
	cout << "The ASCII  code for  " << ch << " is " << i << endl;   //  ch显示的是字符  而 i 显示的数字

	cout << "Displaying  char ch using cout.put(char)";
	cout.put(ch);
	 
	cout.put('!');   //显示一个字符  使用cout对象的函数 put()
	//  cout 将字符变量 显示为字符    而字符常量显示为数字 (M,N) 
	//  早期C++中  字符常量为int 存储    M 的编码77 存储在16或者32位中  char 为8位
	//    char ch ='M'';
	cout << endl << "Done " << endl;
	system("pause");
	cin.get();
	cin.get();
	return 0;
}