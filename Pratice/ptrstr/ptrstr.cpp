#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren";  //这里是字面常量
	char *ps;
	cout << "Enter a kind of animal ";
	cin >> animal;
	
	ps = animal;
	cout <<  ps  << "\n";
	cout << "Before  using scrcpy()" << endl;
	cout << "animal" << " at " << (int*)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	ps = new char(strlen(animal) + 1);
	//strcpy(ps, animal);   //存在问题 //TODO   //不要使用运算符将字符串赋值给数组
	cout << "after using strcpy()" << endl;
	cout << animal << "at " <<(int*)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete[] ps;
	cin.get();
	cin.get();
	return 0;

}