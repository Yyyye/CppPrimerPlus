#include<iostream>
const int ArSize = 6;

int main()
{
	using namespace std;
	float naq[ArSize];
	cout << "Enter  the NAAQs (New Age Awarenese Questions"
		<< "of \n  your  neihhors .Program temernates "
		<< "when you make\n" << ArSize << "entities"
		<< "or enter a negative  value \n";

	int i = 0;
	float temp;
	cout << "First  value:";
	cin >> temp;
	while (i < ArSize &&temp>0)
	{
		naq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "Next value :";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "No data --bytes\n";
	else
	{
		cout << "Enter your NAAQ \n";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; i < i; j++)
			if (naq[j] > you)
				++count;
		cout << count;
		cout << "of your nei....  \n";
	}
}