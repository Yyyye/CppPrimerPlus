#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	int tree = 3;
	int guess(3.9832);  //���ﱻ�ض���   ֻ����3   

	//����ĳ�ʼ����ʽ     C++11  --->  { } �б��ʼ��   ������ ��խ������ת�������ϸ�  ���������Ϳ����޷���ʾ��������ֵ

	int debt = 7.2E12;
	cout << "tree " << tree << endl;
	cout << "guess " << guess << endl;
	cout << "debt " << debt << endl;
	cin.get();
	return 0;

	//����Ĳ��� :
	// �����һ�������� ��long double ����һ����ת��Ϊlong double
	//  ...double			..  double
	//  ...float			.. float
	//    ���� ������������ 
	// ���������� �����з��� ���޷��ŵ�   ���������ڼ������   �����ת��Ϊ�߼����
	// һ�����з��ŵ� ��һ�� ���޷��ŵ� �޷��ŵĲ����������з��ŵĸ�  ���з���תΪ�޷���
	// ����з������� ���Ա�ʾ�޷������͵�����ֵ  �޷���תΪ �з���
	// ���� ������������תΪ�з��ŵ� ���͵� �޷��Ű汾

	//ǿ������ת���ļ��ַ�ʽ
	//   (long )haha  
	//    long(haha)

	//static_cast<long> (thron)
	//static_cast<typeName>(value)


	//
}	
