#include <iostream>
int main()
{
	using namespace std;
	// ���  ��һλ 1-9    ʮ����     0 --> �˽���    0x 16����
	int chest = 42; 
	int waist = 0x42;
	int inseam = 042;

	cout << "Monsieur cut a striking figure ! \n ";
	cout << "chest = " << chest << " 42 in decimal\n";
	cout << " waist" << waist << "(0x42 in hex \n";
	cout << "inseam " << inseam << "(042 in oct" << endl;
	cin.get();
	return 0;

}