#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters : enter # to quite \n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	
	cout << endl << count << " characters read\n";
	system("pause");
	return 0;
}

//ͨ�� �����ȡ������ַ�  �����ո��,�Ʊ���ͻ��з�
//cin.get()  �ķ���  ���Զ�ȡ��һ���ַ�. ��ʹ��һ��
//�ո�.  ʹ��cin.get() ---����cin>>ch

//C������ Ҫ�޸ı�����ֵ ��Ҫ�������ĵ�ַ���ݸ�����
//  cin.get() ���ݵ���&ch  �����ﲢ��������



//ʹ����һ��cin.get()

//cin.get() �������汾  һ����  ������(����ĵ�ַ)�ʹ�С
//��һ���� ����ch����


//�ļ�β����(EOF)  CTRL+Z ����CTRL+D
//��⵽EOF֮�� cin ��������־λ
//  eofbit �� failbit��������λ1.
//  ����һͨ��  eof()���ʱ�񱻱�����
 // ��  cin.eof()  ������Ϊeof  ---true
//  ����Ϊfalse
// ���������Ϊtrue >  eof() ��fail������Ϊ true
//  fail��ʹ�ñ�eof() ����
