#include <iostream>
using namespace std;


//��װ - ���Ժ���Ϊ��Ϊ����

//Բ����
//const double pi = 3.14;
//
////���һ��Բ�࣬��Բ���ܳ�:2pi*�뾶
//
////class����һ���࣬���������ŵľ���������
//class circle
//{
//	//����Ȩ��
//	//����Ȩ��
//public:
//
//	//����
//	//�뾶
//	int m_r;
//
//	//��Ϊ
//	//��ȡԲ���ܳ�
//	double calculateZC()
//	{
//		return 2 * pi * m_r;
//	}
//};
//
//int main()
//{
//	//ͨ��Բ�� ���������Բ������
//  //ʵ������ͨ��һ���ഴ��һ������Ĺ��̣�
//	circle c1;
//	//��Բ��������Խ��и�ֵ
//	c1.m_r = 10;
//	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
//	return 0;
//}


//ʵ�������һ��ѧ���࣬������������ѧ�ţ����Ը��丳ֵ����ʾ

//class student
//{
//public://����Ȩ��
//
//	//���е����Ժ���Ϊ ͳһ��Ϊ - ��Ա
//	//���� - ��Ա���� / ��Ա����
//	//��Ϊ - ��Ա���� / ��Ա����
//
//	string name;
//	string id;
//
//	void showinfo()
//	{
//		cout << "������" << name << endl;
//		cout << "ѧ�ţ�" << id << endl;
//	}
//
//	//��������ֵ
//	void setname(string Name)
//	{
//		name = Name;
//	}
//
//	//��ѧ�Ÿ�ֵ
//	void setid(string Id)
//	{
//		id = Id;
//	}
//};
//
//int main()
//{
//	student s;
//	//s.name = "sculee";
//	s.setname("����");
//	//s.id = "2023222055185";
//	s.setid("20230901");
//	s.showinfo();
//
//	student s2;
//	s2.name = "����";
//	s2.id = "2000folish";
//	s2.showinfo();
//	return 0;
//}


//��װ - ����Ȩ��

//����Ȩ�� public     ��Ա ���ڿ��Է��� ����Ҳ���Է���
//����Ȩ�� protected  ��Ա ���ڿ��Է��� ���ⲻ���Է��� A���Է���B�ı�������
//˽��Ȩ�� private    ��Ա ���ڿ��Է��� ���ⲻ���Է��� A�����Է���B��˽������

//class person
//{
//public:
//	string m_name;
//protected:
//	string m_car;
//private:
//	int m_password;
//	void func()
//	{
//		m_name = "sculee";
//		m_car = "benz";
//		m_password = 666;
//	}
//};
//
//int main()
//{
//	person p1;
//	p1.m_name = "С��";
//	//p1.m_car = "BMW";//����Ȩ�����ݣ�������ʲ���
//	//p1.m_password = 777;//˽��Ȩ�����ݣ�������ʲ���
//	//func();//˽��Ȩ�����ݣ�������ʲ���
//	return 0;
//}


//��װ - struct��class������

//structĬ��Ȩ���� ���� public
//classĬ��Ȩ����  ˽�� private
//class c1
//{
//	int m_a;
//};
//
//struct c2
//{
//	int m_a;
//	void show()
//	{
//		cout << "this is scu" << endl;
//	}
//};
//
//int main()
//{
//	c1 c;
//	//c.m_a = 100;//error,����Ȩ��˽��
//	c2 C;
//	C.m_a = 100;//ok������Ȩ�޹���
//	C.show();
//	return 0;
//}


//��װ- ��Ա������Ϊ˽��

//1.�����Լ����ƶ�дȨ��
//2.����д���Լ��������Ч��

//class Person
//{
//public:
//	//��������
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//	//��ȡ����
//	int getAge()
//	{
//		return m_Age;
//	}
//	//�������䣨0-150��
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "������������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//����ż��
//	void setIdol(string idol)
//	{
//		m_Idol = idol;
//	}
//
//private:
//	string m_Name;//��д�ɶ�
//	int m_Age = 18;//ֻ�� Ҳ����д����������0-150֮�䣩
//	string m_Idol;//ֻд
//};
//
//int main()
//{
//	Person p;
//	//��������
//	p.setName("����");
//	//��ȡ����
//	cout << "������" << p.getName() << endl;
//
//	//��������
//	p.setAge(160);
//	//p.m_Age = 20;
//	//��ȡ����
//	cout << "���䣺" << p.getAge() << endl;
//
//	//ż������
//	p.setIdol("С��");//ֻд
//	//cout << "ż��" << p.getIdol() << endl;//ֻд״̬�������ʲ���
//	return 0;
//}


//��װ - ��ư���1 - ��������

//1.������������
//2.�������
//3.�����Ϊ����ȡ��������������
//4.�ֱ�����ȫ�ֺ����ͳ�Ա�������ж������������Ƿ����

//class cube
//{
//public:
//	//���ó�
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//	//���ÿ�
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//��ȡ��
//	int getW()
//	{
//		return m_W;
//	}
//	//���ø�
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//��ȡ��
//	int getH()
//	{
//		return m_H;
//	}
//	//��ȡ���������
//	int calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_H * m_L;
//	}
//	//��ȡ���������
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//	//���ó�Ա�����ж������������Ƿ����
//	bool issamebyclass(cube& c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
//};
//
////����ȫ�ֺ����ж������������Ƿ����
//bool issame(cube& c1, cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false; 
//}
//
//int main()
//{
//	//�������������
//	cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
//	cout << "c1�����Ϊ��" << c1.calculateV() << endl;
//
//	cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	//����ȫ�ֺ����ж�
//	bool ret = issame(c1, c2);
//	if (ret)
//	{
//		cout << "ȫ�ֺ����жϣ�c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "ȫ�ֺ����жϣ�c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	//���ó�Ա�����ж�
//	ret = c1.issamebyclass(c2);
//	if (ret)
//	{
//		cout << "��Ա�����жϣ�c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "��Ա�����жϣ�c1��c2�ǲ���ȵ�" << endl;
//	}
//	return 0;
//}


//��װ - ��ư���2 - ���Բ�Ĺ�ϵ

//����
//class Point
//{
//public:
//	//����X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡX
//	int getX()
//	{
//		return m_X;
//	}
//	//����Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡY
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

//Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//�뾶
//
//	//�����п�������һ����	��Ϊ�����еĳ�Ա
//	Point m_Center;//Բ��
//};

#include "circle.h"
#include "point.h"

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//��������֮�����ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶ƽ��
	int rDistance = c.getR() * c.getR();
	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);

	//�жϹ�ϵ
	isInCircle(c, p);
	return 0;
}