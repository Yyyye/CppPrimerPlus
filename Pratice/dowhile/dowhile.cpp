#include<iostream>
int main()
{
	using namespace std;
	int n;
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number  \n ";
	do {
		cin >> n;

	} while (n != 7);
	cout << "Yes , 7 is my favorite .\n";
	return 0;

	//有一些 奇特的循环可以用do while 去代替  for(;;i++){ if(i>30) { cout <<"done" <<endl;}}
}