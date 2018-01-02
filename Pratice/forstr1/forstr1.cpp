#include<iostream>
#include<string>

int main()
{
	using namespace std;
	cout << "Enter a word ";  //其实是一个反序输出
	string word;
	cin>> word;

	for (int i = word.size() - 1; i > 0; i--)
		cout << word[i];
	cout << "\n Bye .\n";
	
	cin.get();
	cin.get();
	return 0;
}