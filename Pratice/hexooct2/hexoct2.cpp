#include<iostream>
using namespace std;

int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;
	 
	cout << "Mosieur cut a striking figure !" << endl;
	cout << "chest  =" << chest << "{decimal for 42}" << endl;
	cout << hex;
	cout << "waist  = " << waist << endl;
	cout << oct;
	cout << "inseam  =" << inseam << " {octal in 42}" << endl;
	cin.get();
	return 0;
}