#include<iostream>
int main()
{
	// 一定要在对指针应用解除运算符*  之前将指针初始化为一个确定的适当的位置////
	using namespace std;
	int higgens = 5;
	int * ptr = &higgens;
	cout << "Value of  higgens=" << higgens << " : Anddres  of higgens = " << &higgens << endl;
	cout << "Value of *pt " << *ptr << ";Value of pt =" << ptr << endl;
	

	// 指针的危险
	//  long * fellow ;
	//  *fellow  =233333   指针被指向了 23333
	
	///////////////////////////////////////////////
	// 数组的地址
	//字面上两个地址相同

     short tell[10];
	 cout << " before add " << endl;
	 cout << tell << endl;
	 cout << &tell <<endl;		
	 // 当使用tell+1 的时候  --- >  内存地址+2
	 // 当使用&tell
	 // tell 指向的是  &tell[0] 是一个 2个字节内存的地址
	 // &tell 指向的是同一个地址 但是 所代表的是整个数组的内存

	 short(*pt)[10] = &tell;  //指向的是整个数组
	 short *pt2 = tell;   //指向数组的第一个
	 cout << "after add one to tell " << endl;
	 pt = pt + 1;
	 pt2 = pt2 + 1;
	 cout << pt << " this is tell after  add one " << endl;
	 cout << pt2 << " this is tell after  add one " << endl;
	 cin.get();

	 return 0;

	
	
	
	 //指针小结

	  //声明初始化
	 //typeName * pointerName;

	 //double *pn;
	 //char *pc;
	 //int *pi;

	 //指针赋值
		//double *pn;
		//double *pa;
		//char *pc;
		//double *bubble =3.2;
		//pn=&bubble;
		//pc = new char;
		//pa =new double[30]; 声明一个30个double的数组

	 //对指针解除引用(获取指针指向的值)   使用*  
	 //另一种是解除引用 是用数组表示
	 //bubble[0] 和*bubble 一样  不要用"未初始化的的指针"进行解除引用
	 //cout << "pn";
	 //*pc = '8';

	 //区分指针和指针所指向的值
	 //如果pt是指向int的指针  则  *pt不是指向int的指针而是完全等于一个int类型的变量
	 //如下

	 //int *pt =new int;
	 //*pt =S


	 //数组名 :
		//大多数情况下 C++ 数组的第一个元素视为元素的地址
		//
	 //指针算数
	 // int tacos[10] ={5,2,8,4,1,2,2,2,4,,6,8}
	 // int *pt =tacos;
	 // pt =pt+1;
	 // int *pe =&tacos[9];
	 //pe=pe-1;
	 // int diff =pe-pf;

	 //数组的动态编译和静态编译

	 //使用数组声明创建数组时 使用静态编译  则 长度在编译期确定
	 // int toas[10];
	 //也可以使用动态数组
	 //int size;
	 //cin>> size;
	 // int  *pt =new int[size];
	 //delete  [] pt;
	 //数组表示法和指针表示法
	 //tacos[0]
	 // tacos[3]  
	 //example

	 // int *pt =new int[10];
	 // *pt =5;
	 //pt[0]=6;
	 //pt[9]=44;
	 //int coast[10];
	 // *(coast +4) =12;


	 //指针和字符串

	 //char flower[10] = "rose";
	 //cout << flower << "s are red \n";






}