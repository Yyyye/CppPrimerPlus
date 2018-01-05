#include<iostream>
#include<ctime>

int main()
{
	using namespace std;
	cout << "Enter  the delay time ,in secondes";
	float seces;
	cin >> seces;
	clock_t delay = seces*CLOCKS_PER_SEC;
	cout << "staring\a\n";
	clock_t start = clock();
	while (clock() - start < delay) {
		;
	}
	cout << "done \a\n";
	cin.get();
	cin.get();
	return 0;

	//C++别名的问题:
	// 1.#define  BYTE char 用char 代替所有BYTE
	// 2.tpyedef char byte 将char作为char的别名

}