#include <iostream>
using namespace std;


//加号运算符重载

//class Person
//{
//public:
//	//1.成员函数重载+号
//	Person operator+(Person& p)
//	{
//		Person tmp;
//		tmp.m_A = this->m_A + p.m_A;
//		tmp.m_B = this->m_B + p.m_B;
//		return tmp;
//	}
//
//	int m_A;
//	int m_B;
//};
//
////2.全局函数重载+号
////Person operator+(Person& p1, Person& p2)
////{
////	Person tmp;
////	tmp.m_A = p1.m_A + p2.m_A;
////	tmp.m_B = p1.m_B + p2.m_B;
////	return tmp;
////}
//
////函数重载版本
//Person operator+(Person& p1, int num)
//{
//	Person tmp;
//	tmp.m_A = p1.m_A + num;
//	tmp.m_B = p1.m_B + num;
//	return tmp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//成员函数重载本质调用
//	//Person p3 = p1.operator+(p2);
//	//全局函数重载本质调用
//	//Person p3 = operator+(p1, p2);
//
//	Person p3 = p1 + p2;
//
//	//运算符重载也可以发生函数重载
//	Person p4 = p1 + 100;//Person + int 
//
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//
//	cout << "p4.m_A = " << p4.m_A << endl;
//	cout << "p4.m_B = " << p4.m_B << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//左移运算符重载

//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	//利用成员函数重载左移运算符 p.operator<<(cout) 简化版本 p<<cout
//	//不会利用成员函数重载<<运算符 因为无法实现cout在左侧
//	//void operator<<(cout)
//	//{
//
//	//}
//
//	int m_A;
//	int m_B;
//};
//
////只能利用全局函数重载左移运算符
//ostream& operator<<(ostream& cout, Person& p)//本质 operator<<(cout, p)  简化cout << p
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return cout;
//}
//
//void test01()
//{
//	Person p(10, 10);
//	//p.m_A = 10;
//	//p.m_B = 10;
//	cout << p << " hello world" << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//递增运算符重载

//自定义整型
//class MyInteger
//{
//public:
//	friend ostream& operator<<(ostream& out, MyInteger myint);
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//重载前置++运算符 返回引用是为了一直对一个数据进行递增操作
//	//重载前置++
//	MyInteger& operator++()
//	{
//		//先++
//		m_Num++;
//		//再将自身返回
//		return *this;
//	}
//	//重载后置++
//	//int代表占位参数，可以用于区分前置和后置递增
//	MyInteger& operator++(int)
//	{
//		//先记录当时结果
//		MyInteger tmp = *this;
//		//后递增
//		m_Num++;
//		//最后将记录结果返回
//		return tmp;
//	}
//private:
//	int m_Num;
//};
//
////重载<<运算符
//ostream& operator<<(ostream& out, MyInteger myint)
//{
//	out << myint.m_Num;
//	return out;
//}
//
//void test01()
//{
//	MyInteger myInt;
//	cout << ++myInt << endl;
//	cout << myInt << endl;
//}
//
//void test02()
//{
//	MyInteger myInt;
//	cout << myInt++ << endl;
//	cout << myInt << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//赋值运算符重载

//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);//堆区
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//重载赋值运算符
//	Person& operator=(Person& p)
//	{
//		//编译器是提供浅拷贝
//		//m_Age = p.m_Age;
//		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//		//返回对象本身
//		return *this;
//	}
//	int* m_Age;
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;//赋值操作
//	cout << "p1的年龄位：" << *p1.m_Age << endl;
//	cout << "p2的年龄位：" << *p2.m_Age << endl;
//	cout << "p3的年龄位：" << *p3.m_Age << endl;
//}
//
//int main()
//{
//	//int a = 1, b = 2, c = 3;
//	//c = b = a;
//	//cout << a << b << c << endl;
//	test01();
//	return 0;
//}


//关系运算符重载

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	//重载==号
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//private:
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Lee", 24);
//	Person p2("Scu", 24);
//	if (p1 == p2)
//	{
//		cout << "p1和p2是相等的！" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是不相等的！" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1和p2是不相等的！" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是不相等的！" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//函数调用运算符重载

//class MyPrint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void MyPrint02(string test)
//{
//	cout << test << endl;
//}
//
//void test01()
//{
//	MyPrint myprint;
//	myprint("hello world");//由于使用起来类似于函数调用，因此称为仿函数
//
//	MyPrint02("hello world");
//}
//
////仿函数非常灵活，没有固定的写法
////加法
//class MyAdd
//{
//public:
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test02()
//{
//	MyAdd myadd;
//	int ret = myadd(10, 20);
//	cout << "ret = " << ret << endl;
//
//	//匿名函数对象
//	cout << MyAdd()(100, 100) << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}