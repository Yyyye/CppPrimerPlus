#include<iostream>
#include<cstring>

int main()
{
	using namespace std;
	const int Size = 15;
	char  name1[Size];
	char name2[Size] ="C++owboy";

	cout << "Howdy! I'm " << name2;
	cout << "! what's your name ?";
	cin >> name1;
	cout << "Well " << name1 << ". your name here ";
	cout << strlen(name1) << " letters  and is stred \n";   //只计算可见字符
	cout << " in array of  " << sizeof(name1) << " bytes ";
	cout << "Your  initial  is " << name1[0] << endl;
	name2[3] = '\0';
	cout << "Here are the first 3 characters  of my name :";
	cout << name2 << endl;
	cin.get();
	cin.get();
	return 0;



}
