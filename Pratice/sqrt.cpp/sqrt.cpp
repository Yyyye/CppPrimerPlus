#include<iostream>
#include<cmath>

///C++ ������Ϊ����
// 1.�з���ֵ  2.�޷���ֵ
///��ҪΪÿ�������ṩ����ԭ��
// 1.��Դ���������뺯��ģ��
// 2.����ͷ�ļ�
// ����ԭ���������Ǻ����Ĳ����ͷ���ֵ ��ͷ�ļ���������  �����Ķ����а��������Ĵ���

int main()
{
	using namespace std;
	double area;
	cout << "Enter the floor area ,in square feet , of your home.";
	cin >> area;
	double side ;
	side = sqrt(area);
	cout << "That's  the equivalent  of a square " << side
		 << " feet to side" << endl;
	cout << "How fascinating " << endl;
	cin.get();
	cin.get();
	return 0;
}

// ����ĺ���ԭ��(����)
//  double pow(double,double);
//  int rand(void);
//  void bucks(double);
///////////////////////////////////////////////
// �����Ӣ�ﲹ��:
	// �����з���ֵ�ĳ�Ϊ����(function)
	// û�з���ֵ��Ϊ����(proceudre) ���� �ӳ���(subroutine)







