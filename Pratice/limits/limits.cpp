//��Cpp��ǰ�沿�ֵ����ݼ�¼
// �������͵ĵĿ��
//  16<=short << int (���ٺ�shortһ����) << 32 << long(���ٺ�int һ����) << 64<<long long (���ٺ�longһ����)
#include<iostream>
#include<climits>

int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;


	//sizeof  operater yields side of type or of variable
	cout << "int is " << sizeof(int) << " bytes ." << endl;  
	cout << "int sizeof test " << sizeof(n_int) <<" bytes."<< endl;
	cout << "int  sizeof test 2 :" << sizeof n_int << " bytes." << endl;  //����ȥ������
	cout << "short is " << sizeof n_short << " bytes ," << endl;
	cout << "long is " << sizeof n_long << " bytes " << endl;
	cout << "long long is " << sizeof n_llong << " bytes " << endl;
	cout << endl;
	
	cout << "Maximum values :" << endl;
	cout << "int :" << n_int << endl;
	cout << "short :" << n_short << endl;
	cout << "long :" << n_long << endl;
	cout << "long  long :" << n_llong << endl;

	cout << "Minimum int value " << INT_MIN << endl;
	cout << "Bits per byte" << CHAR_BIT << endl;  //�ַ���λ��
	cin.get();

	return 0;

	// climites  �������������   
	#define  INT_MAX =32767  //Ԥ�������� �ڳ�������ǰ ���ҵ����е�INT_MAX ���д���  ��C�Ķ��巽ʽ ,  const��C++�ķ�ʽ

}