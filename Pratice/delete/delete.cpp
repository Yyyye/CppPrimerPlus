#include<iostream>
#include<cstring>
using namespace std;

char * getname(void);

int main()
{
	char *name;
	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;
	 
	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;
	return 0;
}

char * getname()
{
	char temp[80];
	cout << " Enter last name ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(temp,pn);
	return pn;
}
//�洢

//1.�Զ��洢  �����ڶ���ı���ʹ���Զ��洢�ռ�   �溯�� (��)(��)  ---> �ڴ淢���仯  �ֲ�����   FILO ջ
//2.��̬�洢  ���������ڼ䶼���ڵĴ洢��ʽ   �����ⶨ�� ����ʹ�� static
//3.��̬�洢  ����һ���ڴ��  ���������������   ��