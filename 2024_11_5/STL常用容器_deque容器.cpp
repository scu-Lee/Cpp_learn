#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>//标准算法头文件

//deque构造函数

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//	    //*it = 100;//容器中的数据不可以修改了
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


//deque赋值操作

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
//	//operator=赋值
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	//assign赋值
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


//deque大小操作

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
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "d1不为空" << endl;
//		cout << "d1的大小为：" << d1.size() << endl;
//		//deque容器没有容量概念
//	}
//
//	//重新指定大小
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


//deque插入和删除

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
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20
//	printDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	//200 100 10
//	printDeque(d1);
//	//头删
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
//	//insert插入
//	d1.insert(d1.begin(), 1000);
//	//1000 200 100 10 20
//	printDeque(d1);
//	d1.insert(d1.begin(), 2, 10000);
//	//10000 10000 1000 200 100 10 20
//	printDeque(d1);
//
//	//按照区间插入
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
//	//删除
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	//200 10 20
//	printDeque(d1);
//
//	//按照区间删除
//	//d1.erase(d1.begin(), d1.end());
//	//清空
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


//deque数据存取

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
//	//通过[]方式访问元素
//	//300 200 100 10 20 30
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	//通过at方式访问元素
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素为：" << d.front() << endl;
//	cout << "最后一个元素为：" << d.back() << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque排序

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
//	//排序  默认排序规则 从小到大 升序
//	//对于支持随机访问的迭代器容器，都可以利用sort算法直接对其进行排序
//	//vector容器也可以利用sort进行排序
//	sort(d.begin(), d.end());
//	cout << "排序后：" << endl;
//	printDeque(d);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}