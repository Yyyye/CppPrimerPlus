#include<iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char  name[ArSize];
	char dessert[ArSize];
	
	cout << "Enter  your name .\n";
	cin >> name;  
	//����������� ȫ��   Test Name   
	//cin ֻ��ȡ��һ������ �ŵ������� 
	//Ȼ��  �Զ�������ַ� �ٰѵڶ��ַ� �ŵ����������
	// ���ڶ�����Ҫ������ϲ����ʳ���ʱ�� ��Ὣ Name ֱ�Ӷ���  
	// ���µڶ��ε�cin<< ��û����ʾ��ʹ����
	// ������Ҫgetline() ����������
	cout << "Enter your favorite dessert \n";
	cin >> dessert;
	cout << "I have some dilicious " << dessert;
	cout << " for  you. " << name << ".\n";
	cin.get();
	cin.get();
	cin.get();
	return 0;


}