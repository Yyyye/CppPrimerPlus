#include<iostream>
#include<cctype>

int main()
{
	using namespace std;
	cout << "Enter  text for analysis  , and type @"
		"to teminate input\n" << endl;
	char ch;
	int whitespace = 0;
	int digist = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;


	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digist++;
		else if (ispunct(ch))
			punct++;
		else
			others++;

		cin.get(ch);
	}

	cout << chars << " letters ,"
		<< whitespace << "whitespace,"
		<< digist << "digist "
		<< punct << "punctuations"
		<< others << " others \n";
		
	system("pause");
	return 0;


}