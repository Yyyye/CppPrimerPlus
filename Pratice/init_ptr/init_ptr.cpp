#include<iostream>
int main()
{
	// һ��Ҫ�ڶ�ָ��Ӧ�ý�������*  ֮ǰ��ָ���ʼ��Ϊһ��ȷ�����ʵ���λ��////
	using namespace std;
	int higgens = 5;
	int * ptr = &higgens;
	cout << "Value of  higgens=" << higgens << " : Anddres  of higgens = " << &higgens << endl;
	cout << "Value of *pt " << *ptr << ";Value of pt =" << ptr << endl;
	cin.get();
	return 0;

	// ָ���Σ��
	//  long * fellow ;
	//  *fellow  =233333   ָ�뱻ָ���� 23333
	
	
	
	
	

}