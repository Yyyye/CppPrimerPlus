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
	//����EOF ������Ϊ�ж�
	//�Ƚ���  cin.get() ��EOF���ж� �ٸ�ֵ��ch




	//cin.get()   cin.get(ch) ������

	/*
			����	    		cin.get(ch)	  ch = cin.get()
	---------------------------------------------------------
    �����ַ��ķ�ʽ			|	��ֵ����ch	| ����ֵ��ֵ��ch
	---------------------------------------------------------
	�ַ�����ʱ�����ķ���ֵ	|istream ����	| int �����ַ�����  boolean ת��Ϊtrue
	---------------------------------------------------------
	����EOF����				|istream����	| EOF				(boolת��Ϊfalse)
	---------------------------------------------------------


	*/



}