#include<iostream>
//规则:
//从51个数字中 取6个

long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choice;
	cout << "Enter total  number of choice  on the game  card and \n"
		"the number of  picks allowed \n";
	while ((cin >> total >> choice) && choice <= total)
	{
		cout << "You have one chance  in ";
		cout << probability(total, choice);
		cout << "of wining .\n";
		cout << "Next two numbers (q to quit)";
	}
	cout << "bye\n";
	system("pause");
	return 0;
}

long double  probability(unsigned number,unsigned picks )
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (int n = number, p = picks; p > 0; n--, p--)
		result = result*n / p;
	return result;
	
}

