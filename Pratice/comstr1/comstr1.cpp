#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char word[5] = "?ate";
	//	起始字符是a   一直到m ,否则就让  ch++ 变成下一个字母.
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << strcmp("str1", "str0") << endl;
	cout << "After loop ends words is " << word << endl;
	cin.get();
	return 0;

	//检测字符串是否相等
	//strcmp(str1,str2) ==0  如果两个字符串相等 则这个结果为true
	//  如果两个字符串不相等,则下面两个为true
	//  strcmp(str1,str2) !=0
	//  strcmp(str1,str2) 
	//  strcmp(str1,str2) <0   或者>0  其实是 前面的字符串减去后面的字符串的各个ascii码相减

}