#include <iostream>
void simon(int);
int main()   //���ظ�unix����window  �����˳�ֵ  window ����unix�Ľű�����ͨ�����ֵ�������Ƿ����гɹ�
{
	using namespace std;
	simon(5);
	cout << "Pick an integer ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!";
	cin.get();
	cin.get();
	return 0;
}
void simon( int n)  //����ͷ  
{
	using namespace std;
	cout << "Simon says touch  your toes " << n << " times " << endl;
}
//������һ������ͷ,Ȼ�����ŵĺ�����
//simonλ��main�·�  C++ ��������Ƕ��