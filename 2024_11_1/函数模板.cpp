#include <iostream>
using namespace std;


//函数模板基本语法

//交换两个整型函数
//void swapInt(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////交换两个浮点型函数
//void swapDouble(double& a, double& b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//
////函数模板
//template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//swapInt(a, b);
//
//	//利用函数模板交换
//	//两种方式使用函数模板
//
//	//1.自动类推导
//	/*mySwap(a, b);*/
//
//	//2.显示指定类型
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	//double c = 1.1;
//	//double d = 2.2;
//	//swapDouble(c, d);
//	//cout << "c = " << c << endl;
//	//cout << "d = " << d << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//函数模板注意事项

//template<class T>//typename可以替换成class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1.自动类型推导，必须推导出一致的数据类型T才可以使用
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	mySwap(a, b);//正确！
//	//mySwap(a, c);//错误！推导不出一致的T类型
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2.模板必须要确定出T的数据类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func()函数调用" << endl;
//}
//
//void test02()
//{
//	func<void>();
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//函数模板案例 - 对通用数组排序

//规则 从大到小
//算法 选择
//测试 char数组、int数组

//template<class T>//typename可以替换成class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//认定最大值下标
//		for (int j = i + 1; j < len; j++)
//		{
//			//认定的最大值 比 遍历出的数值 要小，说明j下标的元素才是真正的最大值
//			if (arr[max] < arr[j])
//			{
//				max = j;//更新最大值下标
//			}
//		}
//		if (max != i)
//		{
//			//交换max和i元素
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////打印数组模板
//template<class T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
//	int sz = sizeof(intArr) / sizeof(int);
//	mySort(intArr, sz);
//	printArray(intArr, sz);
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//普通函数与函数模板的区别

//1.普通函数调用可以发生隐式类型转换
//2.函数模板 用自动类型推导，不可以发生隐式类型转换
//3.函数模板 用显示指定类型，可以发生隐式类型转换

//普通函数
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template<class T>
//int myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//a - 97 ,c - 99
//	cout << myAdd01(a, c) << endl;
//
//	//自动类型推导
//	//cout << myAdd02(a, c) << endl;
//
//	//显示指定类型
//	cout << myAdd02<int>(a, c) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//普通函数与函数模板的调用规则

//1.如果函数模板和普通函数都可以调用，优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.函数模板也可以发生重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板

//void myPrint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "调用的重载模板" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//myPrint(a, b);
//
//	//通过空模板参数列表，强制调用函数模板
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 100);
//
//	//如果函数模板可以产生更好的匹配，优先调用函数模板
//	char c1 = 'c';
//	char c2 = 'd';
//	myPrint(c1, c2);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//模板的局限性

//模板不是万能的，有些特定的数据类型，需要用具体化方式做特殊实现

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
////对比数据是否相等函数
//template<class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////利用具体化Person版本实现代码，具体化优先调用
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = myCompare(a, b);
//	if (ret)
//	{
//		cout << "a == b" << endl;
//	}
//	else
//	{
//		cout << "a != b" << endl;
//	}
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//	bool ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1 == p2" << endl;
//	}
//	else
//	{
//		cout << "p1 != p2" << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}