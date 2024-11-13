#include <iostream>
using namespace std;
#include <list>
#include <algorithm>


//list构造函数

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
//	//创建list容器
//	list<int>L1;//默认构造
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//遍历容器
//	printList(L1);
//
//	//区间方式构造
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//拷贝构造
//	list<int>L3(L2);
//	printList(L3);
//
//	//n个elem
//	list<int>L4(10, 100);
//	printList(L4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list赋值和交换

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////赋值
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
//	L2 = L1;//operator== 赋值
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
////交换
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
//	cout << "交换前：" << endl;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "交换后：" << endl;
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


//list大小操作

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
//	//判断容器是否为空
//	if (L1.empty())
//	{
//		cout << "L1为空" << endl;
//	}
//	else
//	{
//		cout << "L1不为空" << endl;
//		cout << "L1元素个数为：" << L1.size() << endl;
//	}
//
//	//重新指定大小
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


//list插入和删除

/*
*push_back(elem);//在容器尾部加入一个元素
*pop_back();//删除容器中最后一个元素
*push_front(elem);//在容器开头插入一个元素
*pop_front();//从容器开头移除第一个元素
*insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
*insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
*insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
*clear();//移除容器的所有数据
*erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
*erase(pos);//删除pos位置的数据，返回下一个数据的位置。
*remove(elem);//删除容器中所有与elem值匹配的元素。
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
//	//尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	//300 200 100 10 20 30
//	printList(L);
//
//	//尾删
//	L.pop_back();
//	//300 200 100 10 20
//	printList(L);
//
//	//头删
//	L.pop_front();
//	//200 100 10 20
//	printList(L);
//
//	//insert插入
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	//200 1000 100 10 20
//	printList(L);
//
//	//删除
//	it = L.begin();
//	L.erase(++it);
//	//200 100 10 20
//	printList(L);
//
//	//移除
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//
//	L.remove(10000);
//	printList(L);
//
//	//清空
//	L.clear();
//	printList(L);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list数据存取

//void test01()
//{
//	list<int>L1;
//	
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	
//	//L1[0]    不可以用[]访问list容器中的元素
//	//L1.at(0) 不可以用at方式访问list容器中的元素
//	//原因是list本质是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问的
//
//	cout << "第一个元素为：" << L1.front() << endl;
//	cout << "最后一个元素为：" << L1.back() << endl;
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//	it++;//支持双向
//	it--;
//	//it = it + 1;//不支持随机访问
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list反转和排序

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
//	//反转
//	list<int>L1;
//
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "反转前：" << endl;
//	printList(L1);
//
//	//反转
//	L1.reverse();
//	cout << "反转后：" << endl;
//	printList(L1);
//}
//
//bool myCompare(int v1, int v2)
//{
//	//降序就让第一个数大于第二个数
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
//	//排序
//	cout << "排序前：" << endl;
//	printList(L1);
//
//	//所有不支持随机访问迭代器的容器，不可以用标准算法
//	//不支持随机访问迭代器的容器，内部会提供对应一些算法
//	//sort(L1.begin(),L1.end());
//
//	L1.sort();//默认排序规则 从小到大 升序
//	cout << "排序后：" << endl;
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


//list排序案例

//案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

//class Person 
//{
//public:
//	Person(string name, int age, int height) 
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//	string m_Name;  //姓名
//	int m_Age;      //年龄
//	int m_Height;   //身高
//};
//
////指定排序规则
//bool ComparePerson(Person& p1, Person& p2) 
//{
//	//按照年龄升序
//	if (p1.m_Age == p2.m_Age) 
//	{
//		//年龄相同 按照身高降序
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
//	//准备数据
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
//
//	//插入数据
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) 
//	{
//		cout << "姓名： " << (*it).m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
//	}
//
//	//排序
//	cout << "---------------------------------" << endl;
//	cout << "排序后：" << endl;
//
//	L.sort(ComparePerson);
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) 
//	{
//		cout << "姓名： " << (*it).m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
//	}
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}