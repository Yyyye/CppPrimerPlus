#include<iostream>
int main()
{
	// һ��Ҫ�ڶ�ָ��Ӧ�ý�������*  ֮ǰ��ָ���ʼ��Ϊһ��ȷ�����ʵ���λ��////
	using namespace std;
	int higgens = 5;
	int * ptr = &higgens;
	cout << "Value of  higgens=" << higgens << " : Anddres  of higgens = " << &higgens << endl;
	cout << "Value of *pt " << *ptr << ";Value of pt =" << ptr << endl;
	

	// ָ���Σ��
	//  long * fellow ;
	//  *fellow  =233333   ָ�뱻ָ���� 23333
	
	///////////////////////////////////////////////
	// ����ĵ�ַ
	//������������ַ��ͬ

     short tell[10];
	 cout << " before add " << endl;
	 cout << tell << endl;
	 cout << &tell <<endl;		
	 // ��ʹ��tell+1 ��ʱ��  --- >  �ڴ��ַ+2
	 // ��ʹ��&tell
	 // tell ָ�����  &tell[0] ��һ�� 2���ֽ��ڴ�ĵ�ַ
	 // &tell ָ�����ͬһ����ַ ���� �������������������ڴ�

	 short(*pt)[10] = &tell;  //ָ�������������
	 short *pt2 = tell;   //ָ������ĵ�һ��
	 cout << "after add one to tell " << endl;
	 pt = pt + 1;
	 pt2 = pt2 + 1;
	 cout << pt << " this is tell after  add one " << endl;
	 cout << pt2 << " this is tell after  add one " << endl;
	 cin.get();

	 return 0;

	
	
	
	 //ָ��С��

	  //������ʼ��
	 //typeName * pointerName;

	 //double *pn;
	 //char *pc;
	 //int *pi;

	 //ָ�븳ֵ
		//double *pn;
		//double *pa;
		//char *pc;
		//double *bubble =3.2;
		//pn=&bubble;
		//pc = new char;
		//pa =new double[30]; ����һ��30��double������

	 //��ָ��������(��ȡָ��ָ���ֵ)   ʹ��*  
	 //��һ���ǽ������ ���������ʾ
	 //bubble[0] ��*bubble һ��  ��Ҫ��"δ��ʼ���ĵ�ָ��"���н������
	 //cout << "pn";
	 //*pc = '8';

	 //����ָ���ָ����ָ���ֵ
	 //���pt��ָ��int��ָ��  ��  *pt����ָ��int��ָ�������ȫ����һ��int���͵ı���
	 //����

	 //int *pt =new int;
	 //*pt =S


	 //������ :
		//���������� C++ ����ĵ�һ��Ԫ����ΪԪ�صĵ�ַ
		//
	 //ָ������
	 // int tacos[10] ={5,2,8,4,1,2,2,2,4,,6,8}
	 // int *pt =tacos;
	 // pt =pt+1;
	 // int *pe =&tacos[9];
	 //pe=pe-1;
	 // int diff =pe-pf;

	 //����Ķ�̬����;�̬����

	 //ʹ������������������ʱ ʹ�þ�̬����  �� �����ڱ�����ȷ��
	 // int toas[10];
	 //Ҳ����ʹ�ö�̬����
	 //int size;
	 //cin>> size;
	 // int  *pt =new int[size];
	 //delete  [] pt;
	 //�����ʾ����ָ���ʾ��
	 //tacos[0]
	 // tacos[3]  
	 //example

	 // int *pt =new int[10];
	 // *pt =5;
	 //pt[0]=6;
	 //pt[9]=44;
	 //int coast[10];
	 // *(coast +4) =12;


	 //ָ����ַ���

	 //char flower[10] = "rose";
	 //cout << flower << "s are red \n";






}