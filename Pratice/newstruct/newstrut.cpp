#include<iostream>
struct   inflatable
{
	char name[10];
	float volume;
	double price;

};
int main()
{
	using namespace std;
	inflatable *ps = new inflatable(); //alot memory for struct
	cout << "Enter of  inflatable  item" << endl;//ʹ�ö�̬�ṹʱ��Ҫʹ�ó�Ա�����  ->
	//����ṹ��ʶ���ǽṹ��  ���þݵ������  �����ָ���  ��ʹ��->(��ͷ�����)
	cin >> (*ps).volume;
	cout << "Enter price :$";
	cin >> ps->name;
	cout << "Name : " << (*ps).name << endl;
	cout << "Volume :" << ps->volume << "cubic feet \n";
	cout << "Price :$ " << ps->price << endl;
	delete ps;
	cin.get();
	cin.get();
	cin.get();
	return 0;

	//�ṹ��ʼ��  
	//things gub={3,345,33};

	//ָ���ʼ�� 
	//things *pt =new things;  //things *pt =&gub;

}