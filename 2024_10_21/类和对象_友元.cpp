#include <iostream>
using namespace std;

//ȫ�ֺ�������Ԫ

//class Building
//{
//	//goodguyȫ�ֺ�����Building�ĺ����ѣ����Է���Building�е�˽�г�Ա
//	friend void goodguy(Building* building);
//public:
//	Building()
//	{
//		m_sittingroom = "����";
//		m_bedroom = "����";
//	}
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//
////ȫ�ֺ���
//void goodguy(Building* building)
//{
//	cout << "�û������ڷ��ʣ�" << building->m_sittingroom << endl;
//	cout << "�û������ڷ��ʣ�" << building->m_bedroom << endl;
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


//������Ԫ

//class Building;
//class goodGuy
//{
//public:
//	goodGuy();
//	void visit();//�ιۺ��� ����Building�е�����
//
//	Building* building;
//};
//
//class Building
//{
//	//���߱�����goodGuy����Building��ĺ����ѣ����Է���Building���е�˽�г�Ա
//	friend class goodGuy;
//public:
//	Building();
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//
////����д��Ա����
//Building::Building()
//{
//	m_sittingroom = "����";
//	m_bedroom = "����";
//}
//
//goodGuy::goodGuy()
//{
//	building = new Building;
//}
//
//void goodGuy::visit()
//{
//	cout << "�û������ڷ��ʣ�" << building->m_sittingroom << endl;
//	cout << "�û������ڷ��ʣ�" << building->m_bedroom << endl;
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


//��Ա��������Ԫ

//class Building;
//class goodGuy
//{
//public:
//	goodGuy();
//
//	void visit();//��visit�������Է���Building�е�˽�г�Ա
//	void visit2();//��visit2���������Է���Building�е�˽�г�Ա
//
//	Building* building;
//};
//
//class Building
//{
//	//���߱����� goodGuy���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
//	friend void goodGuy::visit();
//public:
//	Building();
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//
////����ʵ�ֳ�Ա����
//Building::Building()
//{
//	m_sittingroom = "����";
//    m_bedroom = "����";
//}
//
//goodGuy::goodGuy()
//{
//	building = new Building;
//}
//
//void goodGuy::visit()
//{
//	cout << "visit �������ڷ��ʣ�" << building->m_sittingroom << endl;
//	cout << "visit �������ڷ��ʣ�" << building->m_bedroom << endl;
//}
//
//void goodGuy::visit2()
//{
//	cout << "visit2 �������ڷ��ʣ�" << building->m_sittingroom << endl;
//	//cout << "visit2 �������ڷ��ʣ�" << building->m_bedroom << endl;
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