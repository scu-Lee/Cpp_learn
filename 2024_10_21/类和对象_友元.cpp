#include <iostream>
using namespace std;

//全局函数做友元

//class Building
//{
//	//goodguy全局函数是Building的好朋友，可以访问Building中的私有成员
//	friend void goodguy(Building* building);
//public:
//	Building()
//	{
//		m_sittingroom = "客厅";
//		m_bedroom = "卧室";
//	}
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//
////全局函数
//void goodguy(Building* building)
//{
//	cout << "好基友正在访问：" << building->m_sittingroom << endl;
//	cout << "好基友正在访问：" << building->m_bedroom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodguy(&building);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//类做友元

//class Building;
//class goodGuy
//{
//public:
//	goodGuy();
//	void visit();//参观函数 访问Building中的属性
//
//	Building* building;
//};
//
//class Building
//{
//	//告诉编译器goodGuy类是Building类的好朋友，可以访问Building类中的私有成员
//	friend class goodGuy;
//public:
//	Building();
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//
////类外写成员函数
//Building::Building()
//{
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
//
//goodGuy::goodGuy()
//{
//	building = new Building;
//}
//
//void goodGuy::visit()
//{
//	cout << "好基友正在访问：" << building->m_sittingroom << endl;
//	cout << "好基友正在访问：" << building->m_bedroom << endl;
//}
//
//void test01()
//{
//	goodGuy gg;
//	gg.visit();
//}
//
//int main()
//{
//	test01();
//	return 0; 
//}


//成员函数做友元

//class Building;
//class goodGuy
//{
//public:
//	goodGuy();
//
//	void visit();//让visit函数可以访问Building中的私有成员
//	void visit2();//让visit2函数不可以访问Building中的私有成员
//
//	Building* building;
//};
//
//class Building
//{
//	//告诉编译器 goodGuy类下的visit成员函数作为本类的好朋友，可以访问私有成员
//	friend void goodGuy::visit();
//public:
//	Building();
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//
////类外实现成员函数
//Building::Building()
//{
//	m_sittingroom = "客厅";
//    m_bedroom = "卧室";
//}
//
//goodGuy::goodGuy()
//{
//	building = new Building;
//}
//
//void goodGuy::visit()
//{
//	cout << "visit 函数正在访问：" << building->m_sittingroom << endl;
//	cout << "visit 函数正在访问：" << building->m_bedroom << endl;
//}
//
//void goodGuy::visit2()
//{
//	cout << "visit2 函数正在访问：" << building->m_sittingroom << endl;
//	//cout << "visit2 函数正在访问：" << building->m_bedroom << endl;
//}
//
//void test01()
//{
//	goodGuy gg;
//	gg.visit();
//	gg.visit2();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}