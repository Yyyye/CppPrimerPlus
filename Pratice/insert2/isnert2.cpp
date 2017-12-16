#include<iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name :\n";
	cin.getline(name, ArSize);
	cout << "Enter your favorite dessert: \n ";
	cin.getline(dessert, ArSize);
	cout << "I have some dilicious " << dessert;   //会将换行符 转为空字符
	cout << " for you." << name << ".\n";
	cin.get();
	cin.get();
	return 0;


}