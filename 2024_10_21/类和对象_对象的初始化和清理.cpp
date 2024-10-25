#include <iostream>
using namespace std;

//对象特性 - 构造函数和析构函数

//对象的初始化和清理
//class Person
//{
//public:
//	//1.构造函数 进行初始化操作
//	//没有返回值，不用写void
//	//函数名与类名相同
//	//构造函数可以有参数，可以发生重载
//	//创建对象的时候，构造函数会自动调用，而且只调用一次
//	Person()
//	{
//		cout << "Person 构造函数的调用" << endl;
//	}
//
//	//2.析构函数 进行清理操作
//	//没有返回值，不用写void
//	//函数名与类名相同 在名称前面加~
//	//析构函数不可以有参数，不可以发生重载
//	//对象在销毁前，析构函数会自动调用，而且只调用一次
//	~Person()
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//};
//
////析构函数和构造函数都是必须有的实现，如果自己不提供，编译器会提供一个空实现的析构和构造
//void test01()
//{
//	Person p;//在栈上的数据，test01执行完后，释放这个对象
//}
//
//int main()
//{
//	//test01();
//	Person p;
//	return 0;
//}


//对象特性 - 函数的分类以及调用

//分类
//按照参数分类 - 无参构造（默认构造）和 有参构造
//按照类型分类 - 普通构造            和 拷贝构造
//class Person
//{
//public:
//	//无参（默认）构造函数
//	Person()
//	{
//		cout << "Person的无参构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p)
//	{
//		//将传入的人身上的所有属性拷贝到我身上
//		cout << "Person的拷贝构造函数的调用" << endl;
//		age = p.age;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "Person的析构函数的调用" << endl;
//	}
//	int age = 10;
//};
//
////调用
//void test01()
//{
//	//1.括号法
//	//Person p1;//默认构造函数调用
//	//Person p2(10);//有参构造函数
//	//Person p3(p2);//拷贝构造函数
//
//	////注意事项
//	////调用默认构造函数的时候，不要加()
//	////编译器为把以下这行代码当作函数的声明,不会认为在创建对象
//	////Person p1();
//
//	//cout << "p2的年龄为：" << p2.age << endl;
//	//cout << "p3的年龄为：" << p3.age << endl;
//	
//	//2.显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造函数
//	//Person p3 = Person(p2);//拷贝构造函数
//
//	//Person(10);//匿名对象 特点：当前执行结束后，系统会立即回收掉匿名对象
//	//cout << "aaaaa" << endl;
//
//	//注意事项2
//	//不要利用拷贝构造函数初始化匿名对象，编译器会认为 Person(p3) == Person p3; - 对象声明重定义
//	//Person(p3);
//
//	//3.隐式转换法
//	//Person p4 = 10;//相当于写了 Person p4 = Person(10); 有参构造
//	//Person p5 = p4;//拷贝构造
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//对象特性 - 拷贝构造函数的调用时机

//1.使用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的方式给函数参数传值
//3.值方式返回局部对象
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person 默认构造函数的调用" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person 有参构造函数的调用" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person 拷贝构造函数的调用" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//	int m_Age;
//};
//
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}
//
////2.值传递的方式给函数参数传值
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
////3.值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}


//对象特性 - 构造函数调用规则

//1.创建一个类，C++编译器会给每个类都添加至少3个函数
//默认构造 （空实现）
//析构构造 （空实现）
//拷贝构造 （值拷贝）
//2.
//如果我们写了有参构造函数，编译器就不再提供默认构造函数，依然提供拷贝构造函数
//如果我们写了拷贝构造函数，编译器就不再提供其他普通构造函数了
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person 的默认构造函数调用" << endl;
//	//}
//	//Person(int age)
//	//{
//	//	cout << "Person 的有参构造函数调用" << endl;
//	//	m_Age = age;
//	//}
//	Person(const Person& p)
//	{
//		cout << "Person 的拷贝构造函数" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person 的析构函数调用" << endl;
//	}
//	int m_Age;
//};
//
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////	Person p2(p);
////	cout << "p2的年龄为：" << p2.m_Age << endl;
////}
//
//void test02()
//{
//	Person p;
//	//Person p(28);
//	//Person p2(p);
//	//cout << "p2的年龄为：" << p2.m_Age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//对象特性 - 深拷贝和浅拷贝

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person 的默认构造函数调用" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person 的有参构造函数调用" << endl;
//	}
//	//自己实现拷贝构造函数 解决浅拷贝带来的问题
//	Person(const Person& p)
//	{
//		cout << "Person 拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;//编译器默认实现的就是这行代码
//		
//		//深拷贝操作
//		m_Height = new int(*p.m_Height);
//	}
//	~Person()
//	{
//		//析构代码，将堆区的数据做释放的操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person 的析构函数调用" << endl;
//	}
//	int m_Age;
//	int* m_Height;
//};
//
//void test01()
//{
//	Person p1(18, 160);
//	cout << "p1的年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//	return 0; 
//}


//对象特性 - 初始化列表

//class person
//{
//public:
//	////传统初始化
//	//person(int a, int b, int c)
//	//{
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//初始化列表方式初始化
//	person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//void test01()
//{
//	//person(10, 20, 30);
//
//	person p(30, 20, 10);
//	cout << "m_A = " << p.m_A << endl;
//	cout << "m_B = " << p.m_B << endl;
//	cout << "m_C = " << p.m_C << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//对象特性 - 类对象作为类成员

//手机类
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone的构造函数调用" << endl;
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone的析构函数的调用" << endl;
//	}
//	//手机品牌名称
//	string m_PName;
//};
//
////人类
//class Person
//{
//public:
//	//Phone m_Phone = pName 隐式转换法
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数的调用" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//
////当其他类对象作为本类成员，构造的时候先构造类对象，再构造自身,析构的顺序与构造相反
//
//void test01()
//{
//	Person p("小李", "iphone12");
//	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//对象特性 - 静态成员 - 静态成员变量

//class Person
//{
//public:
//	//1.所有对象都共享同一份数据
//	//2.编译阶段就分配内存
//	//3.类内声明，类外初始化操作
//	static int m_A;
//
//	//静态成员变量也是有访问权限的
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;
//int Person::m_B = 300;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p2.m_A << endl;
//}
//
//void test02()
//{
//	//静态成员变量不属于某个对象上，所有对象都共享同一份数据，因此静态成员有两种访问方式
//	//1.通过对象访问
//	Person p;
//	cout << p.m_A << endl;
//	//2.通过类名访问
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl;//类外访问不到私有的静态成员变量
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//对象特性 - 静态成员函数

//1.所有对象共享同一个函数
//2.静态成员函数只能访问静态成员变量
//class person
//{
//public:
//	static void func()
//	{
//		m_A = 100;//静态成员函数可以访问静态成员变量
//		//m_B = 200;//静态成员函数不可以访问非静态成员变量 - 无法区分到底是哪个对象的m_B属性
//		cout << "static void func()调用" << endl;
//	}
//
//	static int m_A;//静态成员变量
//	int m_B;//非静态成员变量
//
//	//静态成员函数也是有访问权限的
//private:
//	static void func2()
//	{
//		cout << "static void func2()调用" << endl;
//	}
//};
//
//int person::m_A = 0;
//
//void test01()
//{
//	//1.通过对象访问
//	person p;
//	p.func();
//	//2.通过类名访问
//	person::func();
//	//person::func2();类外访问不到私有静态成员函数
//}
//
//int main()
//{
//	test01();
//	return 0;
//}