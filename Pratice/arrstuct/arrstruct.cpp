#include <iostream>

struct  inflatable
{
	char name[20];
	float volumn;
	double price;
};


struct widget
{
	char brand[20];
	int type;
	union
	{//  �����ķ�ʽ
		int id_num;
		char id_char[20];
	};

};

int main()
{
	using namespace std;
	inflatable  guest[2] = {
		{"Bambi",0.5,21.99},
		{"Godzilla",2000,565.99}
	};

	cout << "The guest " << guest[0].name << " and " << guest[1].name << endl;
	cout << " have  a combined volume of " << guest[0].volumn + guest[1].volumn <<" cubic feet"  <<endl;
	cin.get();
	

	//������  ����һ����ͬ�������͵����ݸ�ʽ    ����int double�� long ����ͬʱһ������ֻ����һ��  
	//��������Ĵ�����޷�ͨ������
	//union test
	//{
		//int test;
		//double test2;
		//int test2;

	//};

	return 0;
}