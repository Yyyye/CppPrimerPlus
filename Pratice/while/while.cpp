#include<iostream>
const int ArSize = 16;
int main()
{
	using namespace std;
	char name[ArSize];
	cout << " Your  first name  ,please";
	cin >> name;
	cout << "Here  is your name ,verticalzed and ASCIIized:\n";
	int  i = 0;
	while (name[i] != '\0') {
		cout << name[i] << int(name[i]) << endl;
		i++;
	}
	cin.get();
	cin.get();
	return 0;
}