#include <iostream>

int main()
{
	using namespace std;
	float hats, heads;
	cout.setf(iostream::fixed, ios_base::floatfield);
	cout << "Enter a number ";
	cin >> hats;
	cout << "Enter another number " << endl;
	cin >> heads;

	cout << "hats =" << hats << "; heads= " << heads << endl;
	cout << "hats + heads  " << hats + heads << endl;  //���ھ���ԭ��  ���� ����ֻ��ʾ6λ  ��������ȷ�Ľ��
	cout << "hats -heads " << hats - heads << endl;
	cout << "hats /heads " << hats / heads << endl;
	cout << "hats * heads " << hats* heads << endl;
	cin.get();
	cin.get();
	cin.get();
	return 0;

	
}