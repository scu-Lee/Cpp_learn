#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


//ν�ʣ��º�������ֵ������bool��������
 
//һԪν��

//* ���operator()����һ����������ô����һԪν��
//* ���operator()����������������ô������Ԫν��

//class GreaterFive 
//{
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end()) 
//	{
//		cout << "û�ҵ���" << endl;
//	}
//	else 
//	{
//		cout << "�ҵ�����5������Ϊ��" << *it << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��Ԫν��

//class MyCompare
//{
//public:
//	bool operator()(int num1, int num2)
//	{
//		return num1 > num2;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//
//	//Ĭ�ϴ�С����
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << "----------------------------" << endl;
//
//	//ʹ�ú�������ı��㷨���ԣ�����Ӵ�С
//	sort(v.begin(), v.end(), MyCompare());
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