#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


//copy

//class myPrint
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
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) 
//	{
//		v1.push_back(i + 1);
//	}
//	vector<int> v2;
//	v2.resize(v1.size());
//	copy(v1.begin() + 2, v1.begin() + 5, v2.begin() + 6);
//
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//replace

//class myPrint
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
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	//�������е�20 �滻�� 2000
//	cout << "�滻��" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//replace_if

//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class ReplaceGreater30
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 30;
//	}
//
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	//�������д��ڵ��ڵ�30 �滻�� 3000
//	cout << "�滻��" << endl;
//	replace_if(v.begin(), v.end(), ReplaceGreater30(), 3000);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//swap

//class myPrint
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
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) 
//	{
//		v1.push_back(i);
//		v2.push_back(i + 100);
//	}
//
//	cout << "����ǰ�� " << endl;
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//
//	cout << "������ " << endl;
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}