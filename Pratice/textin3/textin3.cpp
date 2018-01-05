#include<iostream>
int main()
{
	using namespace std;
	char ch;
	cin.get(ch);
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false) {
		cout << ch;
		++count;
		cin.get(ch);

	}
	cout << endl << count << " charaters read \n";
	system("pause");

	return 0;

	//常见的输入做法

	//cin.get(ch);
	//while (cin.fail() == false)
	//{
	//	cin.get(ch);
	// }

}