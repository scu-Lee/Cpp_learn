#include <iostream>
using namespace std;


//�������� - ��Ա���� �� ��Ա���� �ֿ��洢

//class Person
//{
//	int m_A;//�Ǿ�̬��Ա����  ������Ķ�����
//	static int m_B;//��̬��Ա����  ��������Ķ�����
//	void func()
//	{
//
//	}//�Ǿ�̬��Ա����  ��������Ķ�����
//	static void func2()
//	{
//
//	}//��̬��Ա����  ��������Ķ�����
//};
//
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//	//�ն���ռ���ڴ�ռ�Ϊ��1�ֽ�
//	//C++���������ÿ���ն������һ���ֽڵĿռ䣬Ϊ�����ֿն���ռ�ڴ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
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


//�������� - thisָ�����

//class person
//{
//public:
//	person(int age)
//	{
//		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//	person& personaddage(person& p)
//	{
//		this->age += p.age;
//		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
//		return *this;
//	}
//	int age;
//};
//
////1.������Ƴ�ͻ
//void test01()
//{
//	person p1(18);
//	cout << "p1������Ϊ��" << p1.age << endl;
//}
//
////2.���ض�������*this
//void test02()
//{
//	person p1(10);
//	person p2(10);
//	//��ʽ���
//	p2.personaddage(p1).personaddage(p1).personaddage(p1);
//	cout << "p2������Ϊ��" << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//�������� - ��ָ����ʳ�Ա����

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
//		//ԭ���Ǵ����ָ��ΪNULL
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


//�������� - const���γ�Ա����

//������
//class person
//{
//public:
//	//thisָ��ı�����ָ�볣�� ָ���ָ�򲻿����޸�
//	//const person* const this;
//	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
//	void showperson() const
//	{
//		this->m_B = 100;
//		//this->m_A = 100;
//		//this = NULL;//thisָ�벻�����޸�ָ���ָ���
//	}
//	void func()
//	{
//		m_A = 100;
//	}
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable
//};
//
//void test01()
//{
//	person p;
//	p.showperson();
//}
//
////������
//
//void test02()
//{
//	const person p;//�ڶ���ǰ��const��Ϊ������
//	//p.m_A = 100;
//	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�
//
//	//������ֻ�ܵ��ó�����
//	p.showperson();
//	//p.func();//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}