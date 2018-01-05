#include<iostream>
int main() 
{
	using namespace std;
	int quizscors[10] = { 20,20,20,20,20,20,19,18,20,20 };
	cout << "Doing  it right:\n";
	int i;
	for (i = 0; quizscors[i] == 20; i++)
		cout << "quiz " << i << "is a 20\n";
	// to actually running it ;
	for (i = 0; quizscors[i] = 20; i++)  //结果非0,  true  死循环.
		cout << "quiz " << i << " is a 20\n";
	cin.get();
	return 0;
}