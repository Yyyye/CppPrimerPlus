#include<iostream>

//ָ���const
//���������ֲ�ͬ�ķ�ʽ  ��const ����ָ�� 
//��һ�ַ�������ָ��ָ����ָ��. **���Է�ֹʹ�ø�ָ�����޸���ָ���ֵ**
//�ڶ��ַ�ʽ �ǽ�ָ������Ϊ����, �������Է��øı�ָ���λ��

int main()
{
	using  namespace std;
	int age = 39;
	const int * pt = &age;
	//*pt = 20;  invalid
	age = 20;  //valid

	const float g_earth = 9.80;  
	const float *pe = &g_earth;  //valid 
	
	const  float g_moon = 1.63;
	//const *pm = &g_moon;  invalid

}