#include<iostream>


//�ṹ������ ��Ϊ����:
	//1.����ṹ����(���� ������������)
	//2.Ȼ�󴴽��ṹ���� (�ṹ���ݶ���)

struct  inflatable  // �ṹ����   struct ����ʡ��
{  // 
	char name[20];
	float volumn;
	double price;
};
int main()   // �ṹ���� ���Է���main����Ҳ���Է���main �Ϸ�
{
	using namespace std;   // �ṹ���� Ҳ���Է���һ���н���
	inflatable guest =   	//  ����һ��guest  �û�
	{
		"Glorious Gloria",
		1.88,
		22.99
	};


	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Expand your guest list with " << guest.name << " and " << pal.name << "\n";
	cout << "You can both have for $" << guest.price + pal.price << "\n"<<endl;
	cin.get();
	return 0;

}



