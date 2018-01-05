#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters : enter # to quite \n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	
	cout << endl << count << " characters read\n";
	system("pause");
	return 0;
}

//通常 逐个读取输入的字符  包括空格符,制表符和换行符
//cin.get()  的方法  可以读取下一个字符. 即使是一个
//空格.  使用cin.get() ---代替cin>>ch

//C语言中 要修改变量的值 需要将变量的地址传递给函数
//  cin.get() 传递的是&ch  而这里并不是这样



//使用哪一个cin.get()

//cin.get() 有两个版本  一个是  数组名(数组的地址)和大小
//令一个是 接收ch参数


//文件尾条件(EOF)  CTRL+Z 或者CTRL+D
//检测到EOF之后 cin 的两个标志位
//  eofbit 和 failbit都被设置位1.
//  可以一通过  eof()检查时否被被设置
 // 则  cin.eof()  被设置为eof  ---true
//  否则为false
// 如果被设置为true >  eof() 和fail被设置为 true
//  fail的使用比eof() 更广
