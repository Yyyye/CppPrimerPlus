#include<iostream>
const int ArSize = 80;
int main()
{
	using namespace std;
	char line[ArSize];
	int spaces = 0;
	cout << "Enter a line of  text :\n";
	cin.get(line, ArSize);
	cout << "Complete  line :\n " << line << endl;
	cout << "Line through  first period :\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
		{
			break;
		}
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << "spaces \n";
	cout << " Done \n";
	cin.get();
	cin.get();
	return 0;

	//contiune  到过该程序循环体的剩余部分
	//break跳过循环的剩余部分
}
