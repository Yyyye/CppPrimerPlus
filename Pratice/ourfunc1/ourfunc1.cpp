#include <iostream>
using namespace std;  //		ȫ��ʹ��  
// ������ʽ:
// 1.��using ���ں����� �ú������Է���std��ȫ������
// 2.�ض�������  Ҳ����ʹ�� using  std::cout;(ʹ��ָ����Ԫ�� cout)
// 3.��ȫ��ʹ��using  ֱ�� ʹ�� std:: ���Է���ĳ���ض���Ԫ��
void  simon(int n);
int main()
{ 
	simon(3);
	cout << " Pick an integer";
	int count;
	cin >> count;
	simon(count);
	cout << "Done! " << endl;
	cin.get();
	cin.get();
	return 0;
}

void simon(int n)
{
	cout << "Simon says touch your toes" << n << " times " << endl;
}