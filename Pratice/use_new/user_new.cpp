#include<iostream>
int main()
{
	using namespace std;
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;
	cout << "nights value = "<<nights;
	cout << "ngiths " << " : location " << &nights << endl;
	
	cout << "int ";
	cout << "value  =" " locatin " << &nights << endl;
	double * pd = new double;
	*pd = 10000001.0;
	cout << "double ";
	cout << "value  = " << *pd << ": location  =" << pd << endl;
	cout << "size of  pf =" << sizeof(pt);
	cout << "size of *pf " << sizeof(*pd) << endl;
	cout << "size of pd =" << sizeof  pd;
	cout << " : size of *pd " << sizeof(*pd) << endl;
	cin.get();
	return 0;

	//delete  �ͷ� ��new ��ʼ�����ڴ�  ��Ҫʹ��delete �ͷ�һ���ڴ�����
	//  ʹ�� new[] ��ʼ����ַ  --->  ʹ��delte[] �ͷŵ�ַ
	//  new��ʵ���� ҲӦ����delete �ͷ�  
	//�Կ�ָ����� delete�ǰ�ȫ�� 
	// int * pome = new int [10];
	// ͨ���Դ�������(���� ,�ַ���,�ṹ) ʹ��new
	//��̬����Ͷ�̬����(�����Ƿ�ʹ���Ƿ񱻷����ڴ�)




	
}