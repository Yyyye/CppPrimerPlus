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

	//��һЩ ���ص�ѭ��������do while ȥ����  for(;;i++){ if(i>30) { cout <<"done" <<endl;}}
}