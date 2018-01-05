#include<iostream>
int main(void) 
{
	using namespace std;
	int ch;
	int count = 0;
	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters "<<endl;
	system("pause");
	return 0;
	//这里EOF 可以作为判断
	//先进行  cin.get() 和EOF的判断 再赋值给ch




	//cin.get()   cin.get(ch) 的区别

	/*
			属性	    		cin.get(ch)	  ch = cin.get()
	---------------------------------------------------------
    传递字符的方式			|	赋值参数ch	| 返回值赋值给ch
	---------------------------------------------------------
	字符输入时函数的返回值	|istream 对象	| int 类型字符编码  boolean 转换为true
	---------------------------------------------------------
	到达EOF返回				|istream对象	| EOF				(bool转换为false)
	---------------------------------------------------------


	*/



}