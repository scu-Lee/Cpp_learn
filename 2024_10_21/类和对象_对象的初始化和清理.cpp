#include <iostream>
using namespace std;

//�������� - ���캯������������

//����ĳ�ʼ��������
//class Person
//{
//public:
//	//1.���캯�� ���г�ʼ������
//	//û�з���ֵ������дvoid
//	//��������������ͬ
//	//���캯�������в��������Է�������
//	//���������ʱ�򣬹��캯�����Զ����ã�����ֻ����һ��
//	Person()
//	{
//		cout << "Person ���캯���ĵ���" << endl;
//	}
//
//	//2.�������� �����������
//	//û�з���ֵ������дvoid
//	//��������������ͬ ������ǰ���~
//	//���������������в����������Է�������
//	//����������ǰ�������������Զ����ã�����ֻ����һ��
//	~Person()
//	{
//		cout << "Person ���������ĵ���" << endl;
//	}
//};
//
////���������͹��캯�����Ǳ����е�ʵ�֣�����Լ����ṩ�����������ṩһ����ʵ�ֵ������͹���
//void test01()
//{
//	Person p;//��ջ�ϵ����ݣ�test01ִ������ͷ��������
//}
//
//int main()
//{
//	//test01();
//	Person p;
//	return 0;
//}


//�������� - �����ķ����Լ�����

//����
//���ղ������� - �޲ι��죨Ĭ�Ϲ��죩�� �вι���
//�������ͷ��� - ��ͨ����            �� ��������
//class Person
//{
//public:
//	//�޲Σ�Ĭ�ϣ����캯��
//	Person()
//	{
//		cout << "Person���޲ι��캯���ĵ���" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person���вι��캯���ĵ���" << endl;
//	}
//	//�������캯��
//	Person(const Person& p)
//	{
//		//������������ϵ��������Կ�����������
//		cout << "Person�Ŀ������캯���ĵ���" << endl;
//		age = p.age;
//	}
//	//��������
//	~Person()
//	{
//		cout << "Person�����������ĵ���" << endl;
//	}
//	int age = 10;
//};
//
////����
//void test01()
//{
//	//1.���ŷ�
//	//Person p1;//Ĭ�Ϲ��캯������
//	//Person p2(10);//�вι��캯��
//	//Person p3(p2);//�������캯��
//
//	////ע������
//	////����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
//	////������Ϊ���������д��뵱������������,������Ϊ�ڴ�������
//	////Person p1();
//
//	//cout << "p2������Ϊ��" << p2.age << endl;
//	//cout << "p3������Ϊ��" << p3.age << endl;
//	
//	//2.��ʾ��
//	//Person p1;
//	//Person p2 = Person(10);//�вι��캯��
//	//Person p3 = Person(p2);//�������캯��
//
//	//Person(10);//�������� �ص㣺��ǰִ�н�����ϵͳ���������յ���������
//	//cout << "aaaaa" << endl;
//
//	//ע������2
//	//��Ҫ���ÿ������캯����ʼ���������󣬱���������Ϊ Person(p3) == Person p3; - ���������ض���
//	//Person(p3);
//
//	//3.��ʽת����
//	//Person p4 = 10;//�൱��д�� Person p4 = Person(10); �вι���
//	//Person p5 = p4;//��������
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�������� - �������캯���ĵ���ʱ��

//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2.ֵ���ݵķ�ʽ������������ֵ
//3.ֵ��ʽ���ؾֲ�����
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person Ĭ�Ϲ��캯���ĵ���" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person �вι��캯���ĵ���" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person �������캯���ĵ���" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person ���������ĵ���" << endl;
//	}
//	int m_Age;
//};
//
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
//
////2.ֵ���ݵķ�ʽ������������ֵ
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
////3.ֵ��ʽ���ؾֲ�����
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


//�������� - ���캯�����ù���

//1.����һ���࣬C++���������ÿ���඼�������3������
//Ĭ�Ϲ��� ����ʵ�֣�
//�������� ����ʵ�֣�
//�������� ��ֵ������
//2.
//�������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��캯������Ȼ�ṩ�������캯��
//�������д�˿������캯�����������Ͳ����ṩ������ͨ���캯����
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person ��Ĭ�Ϲ��캯������" << endl;
//	//}
//	//Person(int age)
//	//{
//	//	cout << "Person ���вι��캯������" << endl;
//	//	m_Age = age;
//	//}
//	Person(const Person& p)
//	{
//		cout << "Person �Ŀ������캯��" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person ��������������" << endl;
//	}
//	int m_Age;
//};
//
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////	Person p2(p);
////	cout << "p2������Ϊ��" << p2.m_Age << endl;
////}
//
//void test02()
//{
//	Person p;
//	//Person p(28);
//	//Person p2(p);
//	//cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//�������� - �����ǳ����

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person ��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person ���вι��캯������" << endl;
//	}
//	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
//	Person(const Person& p)
//	{
//		cout << "Person �������캯������" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;//������Ĭ��ʵ�ֵľ������д���
//		
//		//�������
//		m_Height = new int(*p.m_Height);
//	}
//	~Person()
//	{
//		//�������룬���������������ͷŵĲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person ��������������" << endl;
//	}
//	int m_Age;
//	int* m_Height;
//};
//
//void test01()
//{
//	Person p1(18, 160);
//	cout << "p1������Ϊ��" << p1.m_Age << "���Ϊ��" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//	return 0; 
//}


//�������� - ��ʼ���б�

//class person
//{
//public:
//	////��ͳ��ʼ��
//	//person(int a, int b, int c)
//	//{
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//��ʼ���б�ʽ��ʼ��
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


//�������� - �������Ϊ���Ա

//�ֻ���
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone�Ĺ��캯������" << endl;
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone�����������ĵ���" << endl;
//	}
//	//�ֻ�Ʒ������
//	string m_PName;
//};
//
////����
//class Person
//{
//public:
//	//Phone m_Phone = pName ��ʽת����
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person�����������ĵ���" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//
////�������������Ϊ�����Ա�������ʱ���ȹ���������ٹ�������,������˳���빹���෴
//
//void test01()
//{
//	Person p("С��", "iphone12");
//	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�������� - ��̬��Ա - ��̬��Ա����

//class Person
//{
//public:
//	//1.���ж��󶼹���ͬһ������
//	//2.����׶ξͷ����ڴ�
//	//3.���������������ʼ������
//	static int m_A;
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
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
//	//��̬��Ա����������ĳ�������ϣ����ж��󶼹���ͬһ�����ݣ���˾�̬��Ա�����ַ��ʷ�ʽ
//	//1.ͨ���������
//	Person p;
//	cout << p.m_A << endl;
//	//2.ͨ����������
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl;//������ʲ���˽�еľ�̬��Ա����
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//�������� - ��̬��Ա����

//1.���ж�����ͬһ������
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//class person
//{
//public:
//	static void func()
//	{
//		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
//		//m_B = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա���� - �޷����ֵ������ĸ������m_B����
//		cout << "static void func()����" << endl;
//	}
//
//	static int m_A;//��̬��Ա����
//	int m_B;//�Ǿ�̬��Ա����
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static void func2()
//	{
//		cout << "static void func2()����" << endl;
//	}
//};
//
//int person::m_A = 0;
//
//void test01()
//{
//	//1.ͨ���������
//	person p;
//	p.func();
//	//2.ͨ����������
//	person::func();
//	//person::func2();������ʲ���˽�о�̬��Ա����
//}
//
//int main()
//{
//	test01();
//	return 0;
//}