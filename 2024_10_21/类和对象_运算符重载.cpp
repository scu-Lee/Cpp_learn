#include <iostream>
using namespace std;


//�Ӻ����������

//class Person
//{
//public:
//	//1.��Ա��������+��
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
////2.ȫ�ֺ�������+��
////Person operator+(Person& p1, Person& p2)
////{
////	Person tmp;
////	tmp.m_A = p1.m_A + p2.m_A;
////	tmp.m_B = p1.m_B + p2.m_B;
////	return tmp;
////}
//
////�������ذ汾
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
//	//��Ա�������ر��ʵ���
//	//Person p3 = p1.operator+(p2);
//	//ȫ�ֺ������ر��ʵ���
//	//Person p3 = operator+(p1, p2);
//
//	Person p3 = p1 + p2;
//
//	//���������Ҳ���Է�����������
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


//�������������

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
//	//���ó�Ա����������������� p.operator<<(cout) �򻯰汾 p<<cout
//	//�������ó�Ա��������<<����� ��Ϊ�޷�ʵ��cout�����
//	//void operator<<(cout)
//	//{
//
//	//}
//
//	int m_A;
//	int m_B;
//};
//
////ֻ������ȫ�ֺ����������������
//ostream& operator<<(ostream& cout, Person& p)//���� operator<<(cout, p)  ��cout << p
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


//�������������

//�Զ�������
//class MyInteger
//{
//public:
//	friend ostream& operator<<(ostream& out, MyInteger myint);
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//����ǰ��++����� ����������Ϊ��һֱ��һ�����ݽ��е�������
//	//����ǰ��++
//	MyInteger& operator++()
//	{
//		//��++
//		m_Num++;
//		//�ٽ�������
//		return *this;
//	}
//	//���غ���++
//	//int����ռλ������������������ǰ�úͺ��õ���
//	MyInteger& operator++(int)
//	{
//		//�ȼ�¼��ʱ���
//		MyInteger tmp = *this;
//		//�����
//		m_Num++;
//		//��󽫼�¼�������
//		return tmp;
//	}
//private:
//	int m_Num;
//};
//
////����<<�����
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


//��ֵ���������

//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);//����
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//���ظ�ֵ�����
//	Person& operator=(Person& p)
//	{
//		//���������ṩǳ����
//		//m_Age = p.m_Age;
//		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//���
//		m_Age = new int(*p.m_Age);
//		//���ض�����
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
//	p3 = p2 = p1;//��ֵ����
//	cout << "p1������λ��" << *p1.m_Age << endl;
//	cout << "p2������λ��" << *p2.m_Age << endl;
//	cout << "p3������λ��" << *p3.m_Age << endl;
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


//��ϵ���������

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	//����==��
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
//		cout << "p1��p2����ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�����������������

//class MyPrint
//{
//public:
//	//���غ������������
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
//	myprint("hello world");//����ʹ�����������ں������ã���˳�Ϊ�º���
//
//	MyPrint02("hello world");
//}
//
////�º����ǳ���û�й̶���д��
////�ӷ�
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
//	//������������
//	cout << MyAdd()(100, 100) << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}