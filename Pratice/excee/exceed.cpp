#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short  sue = sam;
	cout << "Sam has " << sam << " dolars and Sue has " << sue;
	cout << " dollars deposited " << endl
		<< "And $1 to each account  " << endl << "Now";
	sam = sam + 1;
	sue = sue + 1;
	cout << " Sam has " << sam << " dollars  and Sue has " << sue;
	cout << " dollars doposited .  \n Poor Sam " << endl;
	

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and  Sue  has " << sue;
	cout << " dollars  deposited ." << endl;
	cout << "Take $1 from each account " << endl << "Now";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited . " << endl << "Lucky Sue! " << endl;
	
	cin.get();


	//short ���� sam �� unsigned short ���� sue  �ֱ�����ΪSHORT MAX  ��������һ������
	// ����˵ :    sam +1   --->   ������  short�����ֵ   sam ���  -32768  sue �Ľ��ޱ������  ����û����
	//      ���� sam ��sue Ϊ0     ����  ��������  ��1   sam û����  sue ����� 65535
			

	// int  �Ǽ��������Ȼ����  ---  >   ����Ч�����`	 
	//�������ܴ���16λ  long
	// �洢����20��  long long   
	// ������������   short  
	// һ���ַ�  char
	return 0;
	
}