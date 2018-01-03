#include<iostream>
int main()
{
	using namespace std;
	cout << " The amazing Accounte will  sum and average ";
	cout << "five number for you .\n";
	cout << "Please  enter five values .\n";
	double number;
	double sum = 0.0;
	for (int  i = 1; i <= 5; i++)
	{
		cout << "Value " << i << ":";
		cin >> number;
		sum += number;
	}

	cout << "Five exqusite choices  indeed ";
	cout << "They  sum to  " << sum << endl;
	cout << "and average to " << sum / 5 << "\n.";
	cout << "The amazing Acountto bids you adieu! \n";
	cin.get();
	cin.get();
	cin.get();
	cin.get();
	cin.get();
	return 0;

	//定义在语句块中的变量 只在该语句快中才存在
}