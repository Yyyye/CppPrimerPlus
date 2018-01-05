#include<iostream>
#include<fstream>
#include<cstdlib>

const int SIZE = 60;

int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of  data file ";
	cin.get(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not  open file " << filename << endl;
		cout << "Programe terminating \n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;
	inFile >> value;
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}

	if (inFile.eof())  //ÏÈ½øÐÐ eof judge
	{
		cout << "End of file  reach\n";
	}
	else if (inFile.fail())
		cout << "Input  terminated by data mismatch\n";
	else
		cout << "Input ternimated  for unknow  reason \n";
	
	if (count == 0)
		cout << "Now data  processed \n";
	else
	{
		cout << "Item  read: " << count << endl;
		cout << "Sum  : " << sum << endl;
		cout << "Average :" << sum / count << endl;

	}
	inFile.close();
	cin.get();
	cin.get();
	return 0;









}