#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr1[20];
	string str;


	cout << "Length of string before charr1 input :"
		<< strlen(charr1) << endl;    //���Ȳ�ȷ�� :  ����δ��ʼ�����ַ����� ���ֿ��ַ���λ�ò�ȷ��

	cout << " Length of strign before str input :"
		<< str.size() << endl;   

	cout << "Enter  an line of text :   \n";
	cin.getline(charr1, 20);   
	 
	cout << " You enter  " << charr1 << endl;
	cout << " Enter another  lien of text ." << endl;
	getline(cin,str);  //ָ������Դ �� ���λ��     string  �ڵõ����ݺ� ��ʼ����С  
	// fix me   ������һ��������Ԫ�����Ķ���..
	cout << "You enter  " << str << endl;
	cout << "Length of string in charr1   after input  " 
		<<strlen(charr1)<<endl;
	cout << "Length  of string  str  after input "
		<< str.size() << endl;
	
	cin.get();
	return 0;
	
}