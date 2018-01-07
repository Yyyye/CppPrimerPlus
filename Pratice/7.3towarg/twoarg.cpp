#include <iostream>
using namespace std;
void n_chars(char, int);
int  main()
{
	int times;
	char ch;
	cout << "Enter  a characters ";
	cin >> ch;
	while (ch != 'q')
	{
		cout << "Enter an integer :\n";
		cin >> times;
		n_chars(ch, times);
		cout << "\n Enter another  character  or press the "
			"q-key to quit";
		cin >> ch;
	}
	cout << "The value  of times  is " << times << endl;
	cout << "Bye\n";
	system("pause");
	return 0;
}

void n_chars(char c, int n)
{
	while (n-- > 0)
		cout << c;
}
