#include<iostream>
int main() 
{
	using namespace std;
	int update = 6;// &��ַ�����  ��ȡ��ַ
	int * p_updates ;  // ���ڴ洢��ַ   * ����Ϊ���ֵ  ������������     //*p_updates ��int ��Ч  
	p_updates = &update;//p_updates ��ָ��  // ��ǿ������  --->   int*  ��һ����һ������(C++��)
			//����ָ��ĳ�����ͬ  ����ָ������Ͳ�ͬ

	//two ways to express  value 
	cout << "Value  : update  " << update;
	cout << "p_update " << *p_updates << endl;
	// two ways to express address
	// һ����ֱ����ʾָ��   ��һ����  ȡ��ַ��
	cout << "Address:&update " << &update << endl;
	cout << " ,p_update " << p_updates << endl;


	//use pointer  to change value 
	*p_updates = *p_updates + 1;
	cout << " Now  updates " << p_updates << endl;
	cin.get();
	return 0;
}