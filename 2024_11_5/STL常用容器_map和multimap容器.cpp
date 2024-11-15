#include <iostream>
using namespace std;
#include <map>


//map构造和赋值

//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//默认构造
//	map<int, int>m; 
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 20));
//	m.insert(pair<int, int>(2, 30));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//
//	//拷贝构造
//	map<int, int>m2(m);
//	printMap(m2);
//
//	//赋值
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//map大小和交换

//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为： " << m.size() << endl;
//	}
//}
//
////交换
//void test02()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(4, 100));
//	m2.insert(pair<int, int>(5, 200));
//	m2.insert(pair<int, int>(6, 300));
//
//	cout << "交换前" << endl;
//	printMap(m);
//	printMap(m2);
//
//	cout << "交换后" << endl;
//	m.swap(m2);
//	printMap(m);
//	printMap(m2);
//}
//
//int main() 
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}


//map插入和删除

//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//插入
//	map<int, int> m;
//	//第一种插入方式
//	m.insert(pair<int, int>(1, 10));
//	//第二种插入方式
//	m.insert(make_pair(2, 20));
//	//第三种插入方式
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种插入方式
//	m[4] = 40;
//	printMap(m);
//
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);
//	printMap(m);
//
//	//清空
//	m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//map查找和统计

//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(3, 40));
//
//	//查找
//	map<int, int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//	{
//		cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	//map不允许插入重复key元素，count统计而言 结果要么是0要么是1
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//map排序

//class MyCompare 
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	//默认从小到大排序
//	//利用仿函数实现从大到小排序
//	map<int, int, MyCompare> m;
//
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(5, 50));
//
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key:" << it->first << " value:" << it->second << endl;
//	}
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}