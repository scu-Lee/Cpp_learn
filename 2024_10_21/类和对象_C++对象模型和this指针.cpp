#include <iostream>
using namespace std;


//对象特性 - 成员变量 和 成员函数 分开存储

//class Person
//{
//	int m_A;//非静态成员变量  属于类的对象上
//	static int m_B;//静态成员变量  不属于类的对象上
//	void func()
//	{
//
//	}//非静态成员变量  不属于类的对象上
//	static void func2()
//	{
//
//	}//静态成员变量  不属于类的对象上
//};
//
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//	//空对象占用内存空间为：1字节
//	//C++编译器会给每个空对象分配一个字节的空间，为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//对象特性 - this指针概念

//class person
//{
//public:
//	person(int age)
//	{
//		//this指针指向被调用的成员函数所属的对象
//		this->age = age;
//	}
//	person& personaddage(person& p)
//	{
//		this->age += p.age;
//		//this指向p2的指针，而*this指向的就是p2这个对象本体
//		return *this;
//	}
//	int age;
//};
//
////1.解决名称冲突
//void test01()
//{
//	person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//
////2.返回对象本身用*this
//void test02()
//{
//	person p1(10);
//	person p2(10);
//	//链式编程
//	p2.personaddage(p1).personaddage(p1).personaddage(p1);
//	cout << "p2的年龄为：" << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//对象特性 - 空指针访问成员函数

//class person
//{
//public:
//	void showclassname()
//	{
//		cout << "this is person class" << endl;
//	}
//	void showpersonage()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		//原因是传入的指针为NULL
//		cout << "age is " << this->m_age << endl;
//	}
//	int m_age = 24;
//};
//
//void test01()
//{
//	person* p = NULL;
//	//p->showclassname();
//	p->showpersonage();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//对象特性 - const修饰成员函数

//常函数
//class person
//{
//public:
//	//this指针的本质是指针常量 指针的指向不可以修改
//	//const person* const this;
//	//在成员函数后面加const，修饰的是this指针，让指针指向的值也不可以修改
//	void showperson() const
//	{
//		this->m_B = 100;
//		//this->m_A = 100;
//		//this = NULL;//this指针不可以修改指针的指向的
//	}
//	void func()
//	{
//		m_A = 100;
//	}
//	int m_A;
//	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
//};
//
//void test01()
//{
//	person p;
//	p.showperson();
//}
//
////常对象
//
//void test02()
//{
//	const person p;//在对象前加const变为常对象
//	//p.m_A = 100;
//	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改
//
//	//常对象只能调用常函数
//	p.showperson();
//	//p.func();//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}