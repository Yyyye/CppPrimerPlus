#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters : enter # to quite \n";
	cin >> ch;  //第一个字符 可能就是#
	while (ch != '#') 
	{
		cout << ch;  
		++count;
		cin >> ch; //cin在读取char的时候会忽略空格和换行符
	}
	cout << endl << count << " characters read \n";
	return 0;
}