#include <iostream>
using namespace std;
#include <set>


//set构造和赋值

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////构造和赋值
//void test01()
//{
//	set<int> s1;
//
//	//插入数据，只有insert方式
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//
//	//遍历容器
//	//set容器特点：所有元素插入时候自动被排序
//	//set容器不允许插入重复值
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
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


//set大小和交换

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小
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
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为： " << s1.size() << endl;
//	}
//
//}
//
////交换
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
//	cout << "交换前：" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << endl;
//
//	cout << "交换后：" << endl;
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


//set插入和删除

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//插入和删除
//void test01()
//{
//	set<int> s1;
//	插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	删除
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//
//	清空
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


//set查找和统计

//void test01()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(30);
//
//	//查找
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "找到了元素 ： " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
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


//set和multiset区别

//void test01()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool>  ret = s.insert(10);
//	if (ret.second) 
//	{
//		cout << "第一次插入成功!" << endl;
//	}
//	else 
//	{
//		cout << "第一次插入失败!" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second) 
//	{
//		cout << "第二次插入成功!" << endl;
//	}
//	else 
//	{
//		cout << "第二次插入失败!" << endl;
//	}
//
//	multiset<int> ms;
//	//允许插入重复值
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


//pair对组创建

//void test01()
//{
//	//第一种方式
//	pair<string, int>p("Tom", 24);
//	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
//
//	//第二种方式
//	pair<string, int>p1 = make_pair("scuLee", 24);
//	cout << "姓名：" << p1.first << " 年龄：" << p.second << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//set排序

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
//	//默认从小到大
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//指定排序规则
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