#include <iostream>
using namespace std;

//函数定义
//语法：返回值类型 函数名（参数列表） （函数体语句 return表达式）

//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}


//函数调用

//num1和num2为形式参数
//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用语法：函数名称（参数）
//	//a ,b为实际参数
//	int c = add(a, b);
//	cout << "c = " << c << endl;
//
//	int d = 100;
//	int e = 200;
//	int f = add(d, e);
//	cout << "f = " << f << endl;
//	return 0;
//}


//值传递

//void swap(int num1, int num2)
//{
//	cout << "交换前：" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//
//	int tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//
//	cout << "交换后：" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	//return：返回值不需要的时候，可以不写return
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	//值传递，函数的形参发生改变，不会影响实参
//	swap(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


//函数常见形式

//1.无参无返
//void test1()
//{
//	cout << "this is test1" << endl;
//}
//
////2.有参无返
//void test2(int a)
//{
//	cout << "this is test2 a = " << a << endl;
//}
//
////3.无参有返
//int test3()
//{
//	cout << "this is test3" << endl;
//	return 1000;
//}
//
////4.有参有返
//int test4(int a)
//{
//	cout << "this is test4 a = " << a << endl;
//	return a;
//}
//int main()
//{
//	//无参无返函数调用
//	test1();
//	//有参无返函数调用
//	test2(100);
//	//无参有返函数调用
//	int num1 = test3();
//	cout << "num1 = " << num1 << endl;
//	//有参有返函数调用
//	int num2 = test4(10000);
//	cout << "num2 = " << num2 << endl;
//	return 0;
//}


//函数声明

////声明可以多次，定义只能一次
////声明
//int max(int a, int b);
//int max(int a, int b);
////定义
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << max(a, b) << endl;
//	return 0;
//}


//函数分文件编写

//1.创建.h后缀名的头文件
//2.创建.cpp后缀名的源文件
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义

//#include "swap.h"
//
//int main()
//{
//	int a = 10;
//	int b = 30;
//	swap(a, b);
//	return 0;
//}