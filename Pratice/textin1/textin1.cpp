#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters : enter # to quite \n";
	cin >> ch;  //��һ���ַ� ���ܾ���#
	while (ch != '#') 
	{
		cout << ch;  
		++count;
		cin >> ch; //cin�ڶ�ȡchar��ʱ�����Կո�ͻ��з�
	}
	cout << endl << count << " characters read \n";
	return 0;
}