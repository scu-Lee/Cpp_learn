#include <iostream>
using namespace std;
#include <set>


//set����͸�ֵ

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////����͸�ֵ
//void test01()
//{
//	set<int> s1;
//
//	//�������ݣ�ֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//
//	//��������
//	//set�����ص㣺����Ԫ�ز���ʱ���Զ�������
//	//set��������������ظ�ֵ
//	printSet(s1);
//
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//
//	//��ֵ
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}


//set��С�ͽ���

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////��С
//void test01()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ�� " << s1.size() << endl;
//	}
//
//}
//
////����
//void test02()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int> s2;
//
//	s2.insert(100);
//	s2.insert(300);
//	s2.insert(200);
//	s2.insert(400);
//
//	cout << "����ǰ��" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << endl;
//
//	cout << "������" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//
//int main() {
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//set�����ɾ��

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//�����ɾ��
//void test01()
//{
//	set<int> s1;
//	����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//
//	���
//	s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}
//
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}


//set���Һ�ͳ��

//void test01()
//{
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(30);
//
//	//����
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "�ҵ���Ԫ�� �� " << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	//ͳ��
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//set��multiset����

//void test01()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool>  ret = s.insert(10);
//	if (ret.second) 
//	{
//		cout << "��һ�β���ɹ�!" << endl;
//	}
//	else 
//	{
//		cout << "��һ�β���ʧ��!" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second) 
//	{
//		cout << "�ڶ��β���ɹ�!" << endl;
//	}
//	else 
//	{
//		cout << "�ڶ��β���ʧ��!" << endl;
//	}
//
//	multiset<int> ms;
//	//��������ظ�ֵ
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) 
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//pair���鴴��

//void test01()
//{
//	//��һ�ַ�ʽ
//	pair<string, int>p("Tom", 24);
//	cout << "������" << p.first << " ���䣺" << p.second << endl;
//
//	//�ڶ��ַ�ʽ
//	pair<string, int>p1 = make_pair("scuLee", 24);
//	cout << "������" << p1.first << " ���䣺" << p.second << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//set����

//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(50);
//
//	//Ĭ�ϴ�С����
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//ָ���������
//	set<int, MyCompare> s2;
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(30);
//	s2.insert(50);
//
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) 
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}