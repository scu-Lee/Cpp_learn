#include <iostream>
using namespace std;


//����ģ������﷨

//�����������ͺ���
//void swapInt(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////�������������ͺ���
//void swapDouble(double& a, double& b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//
////����ģ��
//template<typename T> //����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
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
//	//���ú���ģ�彻��
//	//���ַ�ʽʹ�ú���ģ��
//
//	//1.�Զ����Ƶ�
//	/*mySwap(a, b);*/
//
//	//2.��ʾָ������
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


//����ģ��ע������

//template<class T>//typename�����滻��class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	mySwap(a, b);//��ȷ��
//	//mySwap(a, c);//�����Ƶ�����һ�µ�T����
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void func()
//{
//	cout << "func()��������" << endl;
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


//����ģ�尸�� - ��ͨ����������

//���� �Ӵ�С
//�㷨 ѡ��
//���� char���顢int����

//template<class T>//typename�����滻��class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////�����㷨
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//�϶����ֵ�±�
//		for (int j = i + 1; j < len; j++)
//		{
//			//�϶������ֵ �� ����������ֵ ҪС��˵��j�±��Ԫ�ز������������ֵ
//			if (arr[max] < arr[j])
//			{
//				max = j;//�������ֵ�±�
//			}
//		}
//		if (max != i)
//		{
//			//����max��iԪ��
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////��ӡ����ģ��
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
//	//����char����
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//����int����
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


//��ͨ�����뺯��ģ�������

//1.��ͨ�������ÿ��Է�����ʽ����ת��
//2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3.����ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��

//��ͨ����
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
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
//	//�Զ������Ƶ�
//	//cout << myAdd02(a, c) << endl;
//
//	//��ʾָ������
//	cout << myAdd02<int>(a, c) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��ͨ�����뺯��ģ��ĵ��ù���

//1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3.����ģ��Ҳ���Է�������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

//void myPrint(int a, int b)
//{
//	cout << "���õ���ͨ����" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "���õ�ģ��" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "���õ�����ģ��" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//myPrint(a, b);
//
//	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 100);
//
//	//�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
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


//ģ��ľ�����

//ģ�岻�����ܵģ���Щ�ض����������ͣ���Ҫ�þ��廯��ʽ������ʵ��

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
////�Ա������Ƿ���Ⱥ���
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
////���þ��廯Person�汾ʵ�ִ��룬���廯���ȵ���
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