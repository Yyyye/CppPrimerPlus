#include<iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name : \n";
	cin.get(name, ArSize).get();  //都到行尾,但是不丢弃不丢弃换行符  保留在输入队列中
	cout << "Enter your favorite dessert :\n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert;   //
	cout << " for you " << name << ".\n";
	cin.get();
	return 0;

}