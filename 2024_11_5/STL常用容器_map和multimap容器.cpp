#include <iostream>
using namespace std;
#include <map>


//map����͸�ֵ

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
//	//Ĭ�Ϲ���
//	map<int, int>m; 
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 20));
//	m.insert(pair<int, int>(2, 30));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//
//	//��������
//	map<int, int>m2(m);
//	printMap(m2);
//
//	//��ֵ
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


//map��С�ͽ���

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
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ��" << endl;
//		cout << "m�Ĵ�СΪ�� " << m.size() << endl;
//	}
//}
//
////����
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
//	cout << "����ǰ" << endl;
//	printMap(m);
//	printMap(m2);
//
//	cout << "������" << endl;
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


//map�����ɾ��

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
//	//����
//	map<int, int> m;
//	//��һ�ֲ��뷽ʽ
//	m.insert(pair<int, int>(1, 10));
//	//�ڶ��ֲ��뷽ʽ
//	m.insert(make_pair(2, 20));
//	//�����ֲ��뷽ʽ
//	m.insert(map<int, int>::value_type(3, 30));
//	//�����ֲ��뷽ʽ
//	m[4] = 40;
//	printMap(m);
//
//	//ɾ��
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);
//	printMap(m);
//
//	//���
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


//map���Һ�ͳ��

//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(3, 40));
//
//	//����
//	map<int, int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//	{
//		cout << "�ҵ���Ԫ�� key = " << (*pos).first << " value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	//ͳ��
//	//map����������ظ�keyԪ�أ�countͳ�ƶ��� ���Ҫô��0Ҫô��1
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


//map����

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
//	//Ĭ�ϴ�С��������
//	//���÷º���ʵ�ִӴ�С����
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