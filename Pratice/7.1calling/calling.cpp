#include<iostream>
double simple(); // ����ԭ��(function prototype)
int main()
{
	using namespace std;
	cout << "main()  will call  the simple function";
	int x =	simple(); //��������( function call)   main ������Ѱ��Ѱ�ҷ���ֵ ����ֵ��x ����ԭ�͸���main ���Է��� double
	cin.get();
	return 0;
}
double simple() { //��������(function definition)
	using namespace std;
	cout << " I'm  but a simple function\n"; 
	return 5; //���㷵��ֵ   ���ɺ���ԭ�͸�֪ �÷���ʲô���͵�����
}
//���� :
//1. ����ͨ��������ֵ��ֵ��ָ��cpu�Ĵ���������ڴ浥Ԫ��, �����䷵��
//2. �����ó���ȥ�鿴���ڴ浥
//3. ���غ����͵��ú�������͸��ڴ浥Ԫ�洢���������ʹ��һ��
//4. ����ԭ�ͽ�����ֵ��֪���ó���.��������������ú����÷���ʲô����
