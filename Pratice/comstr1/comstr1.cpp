#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char word[5] = "?ate";
	//	��ʼ�ַ���a   һֱ��m ,�������  ch++ �����һ����ĸ.
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << strcmp("str1", "str0") << endl;
	cout << "After loop ends words is " << word << endl;
	cin.get();
	return 0;

	//����ַ����Ƿ����
	//strcmp(str1,str2) ==0  ��������ַ������ ��������Ϊtrue
	//  ��������ַ��������,����������Ϊtrue
	//  strcmp(str1,str2) !=0
	//  strcmp(str1,str2) 
	//  strcmp(str1,str2) <0   ����>0  ��ʵ�� ǰ����ַ�����ȥ������ַ����ĸ���ascii�����

}