#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>


//�����º���

//negate һԪ�º��� ȡ���º���
//void test01()
//{
//	negate<int>n;
//	cout << n(50) << endl;
//}
//
////plus ��Ԫ�º��� �ӷ�
////minus           ����
////multiplies      �˷�
////divides         ����  
////modulus         ȡģ
//
//void test02()
//{
//	plus<int>p;
//	cout << p(10, 20) << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//��ϵ�º���

//����        greater<T>
//����        equal_to<T>
//������      not_equal_to<T>
//���ڵ���    greater_equal<T>
//С��        less<T>
//С�ڵ���    less_equal

//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//�Լ�ʵ�ַº���
//	//sort(v.begin(), v.end(), MyCompare());
//	//STL�ڽ��º���  ���ڷº���
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
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


//�߼��º���

//* logical_and<T>`              //�߼���
//* logical_or<T>`               //�߼���
//* logical_not<T>`              //�߼���

//void test01()
//{
//	vector<bool> v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//�߼���  ��v�������˵�v2�У���ִ���߼�������
//	vector<bool> v2;
//	v2.resize(v.size());
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
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