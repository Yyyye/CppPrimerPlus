#include <iostream>

int main()
{
	using namespace std;
	char ch = 'M';   //char ��ʼ��Ϊ M
	int i = ch;
	cout << "The ASCII code  for " << ch << " is " << i << endl;

	cout << "Add one to the character  code :" << endl;
	ch = ch + 1;   //ch��������һ������   Ȼ�� ���� +1
	i = ch;   //  ch��ֵ�� i 
	cout << "The ASCII  code for  " << ch << " is " << i << endl;   //  ch��ʾ�����ַ�  �� i ��ʾ������

	cout << "Displaying  char ch using cout.put(char)";
	cout.put(ch);
	 
	cout.put('!');   //��ʾһ���ַ�  ʹ��cout����ĳ�Ա���� put()  �㱻��Ϊ��Ա�����
	//  cout ���ַ����� ��ʾΪ�ַ�    ���ַ�������ʾΪ���� (M,N) 
	//  ����C++��  �ַ�����Ϊint �洢 
	//    char ch ='M'';   M �ı���77 �洢��16����32λ��  char Ϊ8λ �����Ǹ���int ����߰�λ��char
	cout << endl << "Done " << endl;
	cout << '$';  //���ڻ��ӡASCII��
	cout.put('$');
	system("pause");
	cin.get();
	cin.get();
	return 0;
}