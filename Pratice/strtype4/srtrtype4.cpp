#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr1[20];
	string str;


	cout << "Length of string before charr1 input :"
		<< strlen(charr1) << endl;    //长度不确定 :  对于未初始化的字符数组 出现空字符的位置不确定

	cout << " Length of strign before str input :"
		<< str.size() << endl;   

	cout << "Enter  an line of text :   \n";
	cin.getline(charr1, 20);   
	 
	cout << " You enter  " << charr1 << endl;
	cout << " Enter another  lien of text ." << endl;
	getline(cin,str);  //指定数据源 和 存放位置     string  在得到数据后 初始化大小  
	// fix me   这里有一个叫做友元函数的东西..
	cout << "You enter  " << str << endl;
	cout << "Length of string in charr1   after input  " 
		<<strlen(charr1)<<endl;
	cout << "Length  of string  str  after input "
		<< str.size() << endl;
	
	cin.get();
	return 0;
	
}