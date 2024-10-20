#include <iostream>
using namespace std;

//引用
//语法：数据类型 &别名 = 原名

//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	b = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


//引用注意事项

//int main()
//{
//	int a = 10;
//	//1.引用必须初始化
//	//int& b;//error
//	int& b = a;
//
//	//2.引用在初始化后，不可以改变
//	int c = 20;
//	b = c;//赋值操作，非引用
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	return 0;
//}


//引用做函数参数

//1.值传递
//void myswap01(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//	cout << "swap01 a = " << a << endl;
//	cout << "swap01 b = " << b << endl;
//}
//
////2.地址传递
//void myswap02(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
////3.引用传递
//int myswap03(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	myswap01(a, b);//值传递，形参不会修饰实参
//	myswap02(&a, &b);//地址传递，形参会修饰实参
//	myswap03(a, b);//引用传递，形参会修饰实参
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


//引用做函数的返回值

//1.不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;//局部变量 - 栈区
//	return a;
//}
//
////2.函数的调用可以作为左值
//int& test02()
//{
//	static int a = 10;//静态变量存放在全局区，全局区数据在程序结束后由系统释放
//	return a;
//}
//
//int main()
//{
//	int& ref = test01();
//	cout << "ref = " << ref << endl;//第一次编译器保留
//	cout << "ref = " << ref << endl;//第二次内存已释放
//
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	test02() = 1000;//函数的返回值为引用，则函数调用可以为左值
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//	return 0;
//}


//引用的本质

//发现为引用转换为int* const ref = &a;
//void func(int& ref)
//{
//	ref = 100;//ref为引用,转换为*ref = 100;
//}
//
//int main()
//{
//	int a = 20;
//
//	//自动转换为int* const ref = &a;指针常量是指针指向不可改，也说明为什么引用不可以改
//	int& ref = a;
//	ref = 20;//内部发现为引用转换为：*ref = 20；
//
//	cout << "a =  " << a << endl;
//	cout << "ref = " << ref << endl;
//	func(a);
//	return 0;
//}


//常量引用
//修饰形参，防止误操作

//void showvalue(const int& val)
//{
//	//val = 1000;
//	cout << "val = " << val << endl;
//}
//
//int main()
//{
//	//int a = 10;
//	//加const后，编译器将代码改为 -- int 任意变量名 = 10；const int& ref = 任意变量名;
//	const int& ref = 10;//引用必须引一块合法的内存空间
//	//ref = 20;//const 只读，不可修改
//	int a = 100;
//	showvalue(a);
//	cout << "a = " << a << endl;
//	return 0;
//}