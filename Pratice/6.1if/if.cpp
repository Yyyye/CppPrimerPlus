#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int space =0;
	int total =0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')  //Îª ' '  ²Å¼ÆËãspace
			++space;
		++total;
		cin.get(ch);
	}
	cout << space << endl;
	cout << " characters  total  in  sentences ";
	cin.get();
	cin.get();
	return 0;
}