#include <iostream>
using namespace std;


//函数默认参数
//语法：返回值类型 函数名（形参 = 默认值）{};
//传入参数则使用传入参数，否则使用默认参数

//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}

//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右必须有默认值
//int func2(int a, int b = 10, int c, int d)//error
//{
//	return a + b + c + d;
//}

//2.如果函数声明有默认参数，函数实现就不能有默认参数
//声明和实现只能有一个有默认参数
//int func2(int a, int b);
//int func2(int a = 10, int b = 20)
//{
//	return a + b;
//}
//
//int main()
//{
//	int x = func(10, 30);
//	cout << x << endl;
//	x = func2();
//	cout << x << endl;
//	return 0;
//}


//占位参数
//语法：返回值 函数名（数据类型）{};
//占位参数可以有默认参数 - 如：void func(int a, int = 10){}

//void func(int a, int)
//{
//	cout << "this is a function." << endl;
//}
//
//int main()
//{
//	func(10，10);//占位参数必须填补
//	return 0;
//}


//函数重载
//可以让函数名相同，提高复用性

//函数重载满足条件
//1.同一个作用域下
//2.函数名称相同
//3.函数参数类型不同，或者个数不同，或者顺序不同
//void func()
//{
//	cout << "func 的调用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a) 的调用" << endl;
//}
//
//void func(double a)
//{
//	cout << "func(double a) 的调用" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b) 的调用" << endl;
//}
//
//void func(double a, int b)
//{
//	cout << "func(double a, int b) 的调用" << endl;
//}
//
////注意事项
////函数返回值不可以作为函数重载的条件
////int func(double a, int b)//error
////{
////	cout << "func(double a, int b) 的调用" << endl;
////}
//
//int main()
//{
//	func();
//	func(10);
//	func(3.14);
//	func(10, 3.14);
//	func(3.14, 10);
//	return 0;
//}


//函数重载注意事项
//1.引用作为重载条件
//void func(int& a)//int& a = 10;不合法
//{
//	cout << "func(int& a) 的调用" << endl;
//}
//
//void func(const int& a)//const int& a = 10;合法
//{
//	cout << "func(const int& a) 的调用" << endl;
//}
//
////2.函数重载碰到默认参数
//void func2(int a, int b = 10)
//{
//	cout << "func2(int a,int b) 的调用" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a) 的调用" << endl;
//}
//
//int main()
//{
//	//int a = 10;
//	//func(a);
//	func(10);
//	//func2(10);//当函数重载碰到默认参数时，出现二义性，error
//	func2(10, 20);//ok
//	return 0;
//}