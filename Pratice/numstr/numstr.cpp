#include<iostream>
int main()
{
	using namespace std;
	cout << "What year wat your hours built ? \n";
	int year;
	cin >> year;
	 // ����1
	// cin.get();
	// ������
	//(cin>> year).get();
	cout << "What is its street  address ? \n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built " << year << endl;
	cout << "Address :" << address << endl;
	cout << "Done !";  //��ȡ��ַ��������  ��Ϊ getline �������з�  ��Ϊ�����һ������ ,����ֱ�ӽ����ַ� ��ֵ��address����
				// ���֮���Ƕ�ȡ��ַ֮ǰ �����з�����
	cin.get();
	return 0;
}