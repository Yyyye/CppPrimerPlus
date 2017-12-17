#include<iostream>
#include<string>
#include<cstring>


//¶îÍâ²Ù×÷  :    strcyp(charr1 , charr2)    // copy 
//				 strcat(charr1 , charr2)   // append 

int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] ="jaguar";
	string str1;
	string str2 ="panther" ;

	str1 = str2;
	strcpy_s(charr1, charr2);

	str1 += " paste";
	strcat_s(charr1, " juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << " The string " << str1 << " containes " << len1 << " character !\n";
	cout << " The string " << charr1 << " contains " << len2 << " character !\n";
	cin.get();
	return 0;



}

