#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>


//for_each

//��ͨ����
//void print01(int val)
//{
//	cout << val << " ";
//}
//
////��������
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
////for_each�㷨�����÷�
//void test01() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�����㷨
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//transform

//class TransForm
//{
//public:
//	int operator()(int val)
//	{
//		return val + 100;
//	}
//
//};
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>vTarget; //Ŀ������
//
//	vTarget.resize(v.size()); // Ŀ��������Ҫ��ǰ���ٿռ�
//
//	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}