#include<iostream>  //预处理编译指令
					
//进行主编译前对原文件进行处理 以# 开头  
//在源码编译前对文本进行"替换"或者""添加"
//#include 会使 iostream 和源代码一起送到编译器 组成一个"复合"文件
//新C++风格  去掉头文件的后缀   同时在使用没有后缀名的头文件 需要添加命名空间 std
int main()//函数头
{  // {} 函数体
	
	using namespace std; //编译指令
						 // 表明当前的头文件所处的空间 以免版本错乱
						 //更好的做法   using std::cout
	cout << "Come up and C++ me some time.";   // 使用cout的显示消息语句
											   //<< 指定流方向  将左侧的流输出给cout(是一个重载运算符)
	cout << endl;   //重起一行  mianipulator
	cout << "You wont't regret it !" << endl;
	cin.get();  //停留   
	return 0;  // 结束main的return语句
}

//C++语言风格
//  每条语句占一行
//	每个函数以一个{} 开始和结束  并且" 各占一行" 
//  函数语句对花括号进行缩进
//  函数名称相关的圆括号周围没有空格

