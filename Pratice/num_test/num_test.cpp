#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter  the  staring countDown value :";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)  //C++ ������ 0 ��Ϊfalse
		cout << "i  = " << i << "\n";
	cout << "Done now that  i = " << i << "\n";
	cin.get();
	cin.get();
	return 0;


}