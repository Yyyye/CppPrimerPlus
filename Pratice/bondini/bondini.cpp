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
	
	
	//�����¼ :  \u ����\U  ��ʾͨ�õ� unicode����
	//			  wchar_t  ��ʾ8λ��char  �ǿ��ַ�����
	//  Example  
	 wchar_t  bob =L'p';
	 wcout << L"tall"  <<bob <<endl;
    // C++ 11  
	// char16_t  ��char32_t
	 char16_t ch1 = u'q';
	 char32_t  ch2 = U'\U0000222B';
	 cout << ch1 << sizeof ch1 << endl;
	 cout << ch2 << sizeof ch2 << endl;

	 // ����  ��
	 cin.get();
	 cin.get();
	 return 0;
}