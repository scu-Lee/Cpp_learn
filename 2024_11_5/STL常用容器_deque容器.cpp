#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>//��׼�㷨ͷ�ļ�

//deque���캯��

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//	    //*it = 100;//�����е����ݲ������޸���
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque��ֵ����

//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//operator=��ֵ
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	//assign��ֵ
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque��С����

//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	if (d1.empty())
//	{
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
//		//deque����û����������
//	}
//
//	//����ָ����С
//	//d1.resize(15);
//	d1.resize(15, 1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque�����ɾ��

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//
//	//β��
//	d1.push_back(10);
//	d1.push_back(20);
//	//ͷ��
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20
//	printDeque(d1);
//
//	//βɾ
//	d1.pop_back();
//	//200 100 10
//	printDeque(d1);
//	//ͷɾ
//	d1.pop_front();
//	//100 10
//	printDeque(d1);
//}
//
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20
//	printDeque(d1);
//
//	//insert����
//	d1.insert(d1.begin(), 1000);
//	//1000 200 100 10 20
//	printDeque(d1);
//	d1.insert(d1.begin(), 2, 10000);
//	//10000 10000 1000 200 100 10 20
//	printDeque(d1);
//
//	//�����������
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	//1 2 3 10000 10000 1000 200 100 10 20
//	printDeque(d1);
//}
//
//void test03()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	
//	//ɾ��
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	//200 10 20
//	printDeque(d1);
//
//	//��������ɾ��
//	//d1.erase(d1.begin(), d1.end());
//	//���
//	d1.clear();
//	printDeque(d1);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}


//deque���ݴ�ȡ

//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	//ͨ��[]��ʽ����Ԫ��
//	//300 200 100 10 20 30
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	//ͨ��at��ʽ����Ԫ��
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "��һ��Ԫ��Ϊ��" << d.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << d.back() << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque����

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	//300 200 100 10 20 30
//	printDeque(d);
//
//	//����  Ĭ��������� ��С���� ����
//	//����֧��������ʵĵ���������������������sort�㷨ֱ�Ӷ����������
//	//vector����Ҳ��������sort��������
//	sort(d.begin(), d.end());
//	cout << "�����" << endl;
//	printDeque(d);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}