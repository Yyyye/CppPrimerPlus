//getinfo.cpp  ---input and output
#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;
	cout << "How   many carrtos  do you have ?"<<endl;
	cin >> carrots;  //cin�������� ����carrots
	cout << "Here are two more ";  //����ʱcout��ƴ��
	carrots = carrots + 2;  //cout ��ostream��(iostream�ĳ�Ա)
	cout << "Now you have " << carrots << " carrots";  //������Ƚϳ�ʱ, ʹ�÷�������ķ�ʽ 
	//cin.get();  //������Ҫ�������е�cin.get()�ſ��Խ�� cin.get();ֱ���˳�
	//cin.get();  //��һ��cin.get() ���������ֵ�ʱ�򲢰�Enterʱ��ȡ���� ,�ڶ���������ͣ
	system("pause"); //Ҳ����ʹ��system("pause");

	return 0;

	///////////////////////////////////////////////////////
	// C++ ������������󴫵���Ϣ�ķ�ʽ 
	// 1.ʹ���෽��
	// 2.���¶��������


}