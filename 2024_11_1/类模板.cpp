#include <iostream>
using namespace std;


//��ģ���﷨

//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name,AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name = " << this->m_Name << " age = " << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	Person<string, int>p1("�����", 999);
//	p1.showPerson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��ģ���뺯��ģ������

//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name,AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name = " << this->m_Name << " age = " << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//void test01()
//{
//	//Person p("�����", 999);//error,�޷����Զ������Ƶ�
//	Person<string, int>p("�����", 999);//ֻ������ʾָ������
//	p.showPerson();
//}
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person<string>p1("��˽�", 888);
//	p1.showPerson();
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//��ģ���г�Ա��������ʱ��

//��ģ���г�Ա�����ڵ���ʱ�Ŵ���

//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//
//	//��ģ���еĳ�Ա����,������һ��ʼ�ʹ����ģ�������ģ�����ʱ������
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2;
//	}
//};
//
//void test01()
//{
//	MyClass<Person1>m;
//	m.func1();
//	//m.func2();//�������˵���������òŻ�ȥ������Ա����
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��ģ���������������

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.ָ����������
//void printPerson(Person<string, int>& p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("�����", 100);
//	printPerson(p);
//}
//
////2.����ģ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1����Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2����Ϊ��" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("��˽�", 90);
//	printPerson2(p);
//}
//
////3.������ģ��
//template<class T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//	cout << "T������Ϊ��" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p("��ɮ", 30);
//	printPerson3(p);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}


//��ģ����̳�

//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base//error,����֪��������T�����ͣ����ܼ̳и�����
//class Son:public Base<int>
//{
//	;
//};
//
//void test01()
//{
//	Son s1;
//}
//
////��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char> s2;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//��ģ���Ա��������ʵ��

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	this->m_Name = name;
//	//	this->m_Age = age;
// //   }
//	void showPerson();
//	//{
//	//	cout << "���֣�" << this->m_Name << " ���䣺" << this->m_Age << endl;
//	//}
//	T1 m_Name;
//	T2 m_Age;
//};
//
////���캯������ʵ��
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////��Ա��������ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//}
//
//void test01()
//{
//	Person<string, int> p("Tom", 20);
//	p.showPerson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��ģ����ļ���д

////template<class T1,class T2>
////class Person
////{
////public:
////	Person(T1 name, T2 age);
////	void showPerson();
////	T1 m_Name;
////	T2 m_Age;
////};
//
////template<class T1,class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->m_Name = name;
////	this->m_Age = age;
////}
////
////template<class T1, class T2>
////void Person<T1, T2>::showPerson()
////{
////	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
////}
//
////��һ�ֽ����ʽ ֱ�Ӱ��� Դ�ļ�
////#include "Person.cpp"
//
////�ڶ��ֽ����ʽ ��.h�ļ���.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
//#include "Person.hpp"
//
//void test01()
//{
//	Person<string, int> p("jerry", 18);
//	p.showPerson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��ģ������Ԫ

//ͨ��ȫ�ֺ�����ӡPerson��Ϣ

//��ǰ�ñ�����֪��Person�����
//template<class T1,class T2>
//class Person;
//
////����ʵ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "����ʵ�� --- ������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	//ȫ�ֺ��� ����ʵ��
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//	}
//
//	//ȫ�ֺ��� ����ʵ��
//	//�ӿ�ģ������б�<>
//	//���ȫ�ֺ���ʱ����ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int> p("Tom", 20);
//	printPerson(p);
//}
//
////2.ȫ�ֺ���������ʵ��
//void test02()
//{
//	Person<string, int> p("Jerry", 20);
//	printPerson2(p);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}