#include <iostream>
using namespace std;  //		全局使用  
// 其他方式:
// 1.将using 放在函数里 让函数可以访问std的全部内容
// 2.特定函数中  也可以使用 using  std::cout;(使用指定的元素 cout)
// 3.完全不使用using  直接 使用 std:: 可以访问某个特定的元素
void  simon(int n);
int main()
{ 
	simon(3);
	cout << " Pick an integer";
	int count;
	cin >> count;
	simon(count);
	cout << "Done! " << endl;
	cin.get();
	cin.get();
	return 0;
}

void simon(int n)
{
	cout << "Simon says touch your toes" << n << " times " << endl;
}