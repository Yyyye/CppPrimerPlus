#include<iostream>
void cheers(int);
double cube(double x);

int main()
{
	using namespace std;
	cheers(5);
	cout << "Give me  a number :\n";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << " A " << side << " foot cube has a volume of ";
	cout << volume << "cubic feet\n";
	cheers(cube(2));
	system("pause");
	return 0;
}

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers" << endl;
	cout << endl;
	
}

double cube(double x)
{
	return x*x*x;
}

//C++ ����ԭ�͵�ԭ��
//ԭ������ �������������Ľӿ�  �������ķ���ֵ����(if exits) �Լ��������� ���߱�����  
//ԭ�ʹ��ڵ���������߱���Ч�� �������.. (���ں����ڲ�ͬ�ļ������ �Լ�ֹͣmain�����ı��������)


//��ȷ���﷨
// �ԷֺŽ�β  ��Ҫ���ṩ������

//C++ԭ�ͺ� ANSIԭ��
//ANSI C�е�ԭ���ǿ�ѡ�� 
//C++�в���ȱ��  
//C++Ϊ��ʱ �����void ��ͬ  ANSIΪ�յ�ʱ�� ������ָ������ (���ں��涨������б� )  C++��ָ�������б����ʹ��ʡ�Ժ�  
//void  say_hi(...)


//ԭ�͵Ĺ��� 
// 1.ȷ����������ȷ����������ֵ
// 2.���������ʹ�ò�����Ŀ�Ƿ���ȷ
// 3.���������ʹ�ò����������Ƿ���ȷ


