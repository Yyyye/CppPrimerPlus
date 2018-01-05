#include<iostream>

int main()
{
	using namespace std;
	cout << "Thi program  my  refor mat har disk \n"
		"and destory all your  data\n"
		"Do you wish to conine?"
		<< endl;
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "You were  warned\a\a\n!";
	else if (ch == 'n' || ch == 'N')
		cout << "A wise choice ... bye\n";
	else
		cout << "...";

	return 0;
	
	
		
}