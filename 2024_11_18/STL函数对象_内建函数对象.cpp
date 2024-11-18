#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>


//算术仿函数

//negate 一元仿函数 取反仿函数
//void test01()
//{
//	negate<int>n;
//	cout << n(50) << endl;
//}
//
////plus 二元仿函数 加法
////minus           减法
////multiplies      乘法
////divides         除法  
////modulus         取模
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


//关系仿函数

//大于        greater<T>
//等于        equal_to<T>
//不等于      not_equal_to<T>
//大于等于    greater_equal<T>
//小于        less<T>
//小于等于    less_equal

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
//	//自己实现仿函数
//	//sort(v.begin(), v.end(), MyCompare());
//	//STL内建仿函数  大于仿函数
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


//逻辑仿函数

//* logical_and<T>`              //逻辑与
//* logical_or<T>`               //逻辑或
//* logical_not<T>`              //逻辑非

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
//	//逻辑非  将v容器搬运到v2中，并执行逻辑非运算
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