#include <iostream>
using namespace std;
#include <list>
#include <algorithm>


//list���캯��

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//�������
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//��������
//	printList(L1);
//
//	//���䷽ʽ����
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//��������
//	list<int>L3(L2);
//	printList(L3);
//
//	//n��elem
//	list<int>L4(10, 100);
//	printList(L4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list��ֵ�ͽ���

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////��ֵ
//void test01()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;//operator== ��ֵ
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//}
//
////����
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	cout << "����ǰ��" << endl;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "������" << endl;
//	printList(L1);
//	printList(L2);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//list��С����

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//�ж������Ƿ�Ϊ��
//	if (L1.empty())
//	{
//		cout << "L1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "L1��Ϊ��" << endl;
//		cout << "L1Ԫ�ظ���Ϊ��" << L1.size() << endl;
//	}
//
//	//����ָ����С
//	L1.resize(10, 10000);
//	printList(L1);
//
//	L1.resize(2);
//	printList(L1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list�����ɾ��

/*
*push_back(elem);//������β������һ��Ԫ��
*pop_back();//ɾ�����������һ��Ԫ��
*push_front(elem);//��������ͷ����һ��Ԫ��
*pop_front();//��������ͷ�Ƴ���һ��Ԫ��
*insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
*insert(pos, n, elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
*insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
*clear();//�Ƴ���������������
*erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
*erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
*remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
*/

//void printList(const list<int>& L)
//{
//	for(list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L;
//
//	//β��
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//ͷ��
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	//300 200 100 10 20 30
//	printList(L);
//
//	//βɾ
//	L.pop_back();
//	//300 200 100 10 20
//	printList(L);
//
//	//ͷɾ
//	L.pop_front();
//	//200 100 10 20
//	printList(L);
//
//	//insert����
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	//200 1000 100 10 20
//	printList(L);
//
//	//ɾ��
//	it = L.begin();
//	L.erase(++it);
//	//200 100 10 20
//	printList(L);
//
//	//�Ƴ�
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//
//	L.remove(10000);
//	printList(L);
//
//	//���
//	L.clear();
//	printList(L);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list���ݴ�ȡ

//void test01()
//{
//	list<int>L1;
//	
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	
//	//L1[0]    ��������[]����list�����е�Ԫ��
//	//L1.at(0) ��������at��ʽ����list�����е�Ԫ��
//	//ԭ����list�����������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
//
//	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;
//
//	//��֤�������ǲ�֧��������ʵ�
//	list<int>::iterator it = L1.begin();
//	it++;//֧��˫��
//	it--;
//	//it = it + 1;//��֧���������
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list��ת������

//void printList(const list<int>& L)
//{
//	for(list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//��ת
//	list<int>L1;
//
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "��תǰ��" << endl;
//	printList(L1);
//
//	//��ת
//	L1.reverse();
//	cout << "��ת��" << endl;
//	printList(L1);
//}
//
//bool myCompare(int v1, int v2)
//{
//	//������õ�һ�������ڵڶ�����
//	return v1 > v2;
//}
//
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	//����
//	cout << "����ǰ��" << endl;
//	printList(L1);
//
//	//���в�֧��������ʵ��������������������ñ�׼�㷨
//	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
//	//sort(L1.begin(),L1.end());
//
//	L1.sort();//Ĭ��������� ��С���� ����
//	cout << "�����" << endl;
//	printList(L1);
//
//	L1.sort(myCompare);
//	printList(L1);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//list������

//������������Person�Զ����������ͽ�������Person�����������������䡢���
//������򣺰�����������������������ͬ������߽��н���

//class Person 
//{
//public:
//	Person(string name, int age, int height) 
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//	string m_Name;  //����
//	int m_Age;      //����
//	int m_Height;   //���
//};
//
////ָ���������
//bool ComparePerson(Person& p1, Person& p2) 
//{
//	//������������
//	if (p1.m_Age == p2.m_Age) 
//	{
//		//������ͬ ������߽���
//		return p1.m_Height > p2.m_Height;
//	}
//	else
//	{
//		return  p1.m_Age < p2.m_Age;
//	}
//
//}
//
//void test01() 
//{
//	list<Person> L;
//
//	//׼������
//	Person p1("����", 35, 175);
//	Person p2("�ܲ�", 45, 180);
//	Person p3("��Ȩ", 40, 170);
//	Person p4("����", 25, 190);
//	Person p5("�ŷ�", 35, 160);
//	Person p6("����", 35, 200);
//
//	//��������
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) 
//	{
//		cout << "������ " << (*it).m_Name << " ���䣺 " << it->m_Age << " ��ߣ� " << it->m_Height << endl;
//	}
//
//	//����
//	cout << "---------------------------------" << endl;
//	cout << "�����" << endl;
//
//	L.sort(ComparePerson);
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) 
//	{
//		cout << "������ " << (*it).m_Name << " ���䣺 " << it->m_Age << " ��ߣ� " << it->m_Height << endl;
//	}
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}