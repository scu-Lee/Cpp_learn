#include <iostream>
using namespace std;

//全局区
//全局变量，静态变量，常量

////全局变量
//int g_a = 10;
//int g_b = 20;
//
////const修饰的全局变量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main()
//{
//	//局部变量
//	int a = 10;
//	int b = 20;
//	cout << "局部变量a的地址为：" << (int)&a << endl;
//	cout << "局部变量b的地址为：" << (int)&b << endl;
//
//	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
//	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 20;
//	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
//	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;
//
//	//常量
//	//字符串常量
//	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;
//
//
//	//const修饰的变量
//	//const修饰的全局变量，const修饰的局部变量
//	cout << "全局常量c_g_a的地址为：" << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b的地址为：" << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;//c-const l-local g-global
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a的地址为：" << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b的地址为：" << (int)&c_l_b << endl;
//	return 0;
//}


//栈区
//注意事项：不要返回局部变量的地址，栈区的数据由编译器管理开辟和释放

//int* func(int b)//形参也会放在栈区
//{
//	b = 100;
//	int a = 10;//存放在栈区的数据在函数执行完后自动释放
//	return &a;
//}
//
//int main()
//{
//	int* p = func(1);
//	cout << *p << endl;//第一次正确打印，编译器做了保留
//	cout << *p << endl;//第二次这个数据就不再保留了
//	return 0;
//}


//堆区

//int* func()
//{
//	//利用new关键字可以将数据开辟到堆区
//	//指针本质也是局部变量，放在栈上，指针保存的数据还是在堆区
//	int* p = new int(10);
//	return p;
//}
//
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}


//new操作符

//1.new的基本语法
//int* func()
//{
//	//在堆区创建整型数据
//	//new返回是该数据类型的指针
//	int* p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//堆区的数据由程序员管理开辟，程序员管理释放
//	//如果想释放堆区的数据，利用关键字delete
//	delete p;
//	//cout << *p << endl;//内存已被释放，再次访问为非法访问，error
//}
//
////2.在堆区利用new开辟数组
//void test02()
//{
//	//创建10整型数据的数组，在堆区
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		cout << arr[j] << endl;
//	}
//	//释放堆区数组
//	//释放数组的时候要加[]
//	delete[] arr;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}