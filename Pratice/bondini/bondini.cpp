#include<iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activity!\n";
	cout << "Enter  your agent  cod :_______\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered  " << code << "...\n";
	cout << "\aCode verified ! Proceed with Plan Z3 !\n";
	
	
	//额外记录 :  \u 或者\U  表示通用的 unicode编码
	//			  wchar_t  表示8位的char  是宽字符类型
	//  Example  
	 wchar_t  bob =L'p';
	 wcout << L"tall"  <<bob <<endl;
    // C++ 11  
	// char16_t  和char32_t
	 char16_t ch1 = u'q';
	 char32_t  ch2 = U'\U0000222B';
	 cout << ch1 << sizeof ch1 << endl;
	 cout << ch2 << sizeof ch2 << endl;

	 // 浮点  将
	 cin.get();
	 cin.get();
	 return 0;
}