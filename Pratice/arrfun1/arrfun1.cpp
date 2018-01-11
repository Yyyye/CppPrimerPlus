#include<iostream>
const int ArSize = 8;
int  sum_arr(int arr[], int n);

int main()
{
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128};

	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies enten " << sum << endl;
	system("pause");
	return 0;

}
int sum_arr(int  arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return  total;

}


//C++和C一样 将数组视为指针 ,    本质上 传递的的数组的第一个 (&sum_arr[0]) (index =0)
//arr[i] ==*(arr+i)
//&arr[i] ==ar+i;
//对指针+-1  实际上是加上了一个指针指向长度的相等的值

