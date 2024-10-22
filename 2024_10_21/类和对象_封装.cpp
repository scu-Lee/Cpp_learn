#include <iostream>
using namespace std;


//封装 - 属性和行为作为整体

//圆周率
//const double pi = 3.14;
//
////设计一个圆类，求圆的周长:2pi*半径
//
////class代表一个类，类后面紧跟着的就是类名称
//class circle
//{
//	//访问权限
//	//公共权限
//public:
//
//	//属性
//	//半径
//	int m_r;
//
//	//行为
//	//获取圆的周长
//	double calculateZC()
//	{
//		return 2 * pi * m_r;
//	}
//};
//
//int main()
//{
//	//通过圆类 创建具体的圆（对象）
//  //实例化（通过一个类创建一个对象的过程）
//	circle c1;
//	//给圆对象的属性进行赋值
//	c1.m_r = 10;
//	cout << "圆的周长为：" << c1.calculateZC() << endl;
//	return 0;
//}


//实例：设计一个学生类，属性有姓名和学号，可以给其赋值和显示

//class student
//{
//public://公共权限
//
//	//类中的属性和行为 统一称为 - 成员
//	//属性 - 成员属性 / 成员变量
//	//行为 - 成员函数 / 成员方法
//
//	string name;
//	string id;
//
//	void showinfo()
//	{
//		cout << "姓名：" << name << endl;
//		cout << "学号：" << id << endl;
//	}
//
//	//给姓名赋值
//	void setname(string Name)
//	{
//		name = Name;
//	}
//
//	//给学号赋值
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
//	s.setname("张三");
//	//s.id = "2023222055185";
//	s.setid("20230901");
//	s.showinfo();
//
//	student s2;
//	s2.name = "龙龙";
//	s2.id = "2000folish";
//	s2.showinfo();
//	return 0;
//}


//封装 - 访问权限

//公共权限 public     成员 类内可以访问 类外也可以访问
//保护权限 protected  成员 类内可以访问 类外不可以访问 A可以访问B的保护内容
//私有权限 private    成员 类内可以访问 类外不可以访问 A不可以访问B的私有内容

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
//	p1.m_name = "小李";
//	//p1.m_car = "BMW";//保护权限内容，类外访问不到
//	//p1.m_password = 777;//私有权限内容，类外访问不到
//	//func();//私有权限内容，类外访问不到
//	return 0;
//}


//封装 - struct和class的区别

//struct默认权限是 公有 public
//class默认权限是  私有 private
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
//	//c.m_a = 100;//error,访问权限私有
//	c2 C;
//	C.m_a = 100;//ok，访问权限公有
//	C.show();
//	return 0;
//}


//封装- 成员属性设为私有

//1.可以自己控制读写权限
//2.对于写可以检测数据有效性

//class Person
//{
//public:
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//	//获取年龄
//	int getAge()
//	{
//		return m_Age;
//	}
//	//设置年龄（0-150）
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "年龄输入有误" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//设置偶像
//	void setIdol(string idol)
//	{
//		m_Idol = idol;
//	}
//
//private:
//	string m_Name;//可写可读
//	int m_Age = 18;//只读 也可以写（年龄需在0-150之间）
//	string m_Idol;//只写
//};
//
//int main()
//{
//	Person p;
//	//姓名设置
//	p.setName("张三");
//	//获取姓名
//	cout << "姓名：" << p.getName() << endl;
//
//	//年龄设置
//	p.setAge(160);
//	//p.m_Age = 20;
//	//获取年龄
//	cout << "年龄：" << p.getAge() << endl;
//
//	//偶像设置
//	p.setIdol("小明");//只写
//	//cout << "偶像：" << p.getIdol() << endl;//只写状态，外界访问不到
//	return 0;
//}


//封装 - 设计案例1 - 立方体类

//1.创建立方体类
//2.设计属性
//3.设计行为，获取立方体体积和面积
//4.分别利用全局函数和成员函数，判断两个立方体是否相等

//class cube
//{
//public:
//	//设置长
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//获取长
//	int getL()
//	{
//		return m_L;
//	}
//	//设置宽
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//获取宽
//	int getW()
//	{
//		return m_W;
//	}
//	//设置高
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//获取高
//	int getH()
//	{
//		return m_H;
//	}
//	//获取立方体面积
//	int calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_H * m_L;
//	}
//	//获取立方体体积
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//	//利用成员函数判断两个立方体是否相等
//	bool issamebyclass(cube& c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//};
//
////利用全局函数判断两个立方体是否相等
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
//	//创建立方体对象
//	cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "c1的面积为：" << c1.calculateS() << endl;
//	cout << "c1的体积为：" << c1.calculateV() << endl;
//
//	cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	//利用全局函数判断
//	bool ret = issame(c1, c2);
//	if (ret)
//	{
//		cout << "全局函数判断：c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "全局函数判断：c1和c2是不相等的" << endl;
//	}
//
//	//利用成员函数判断
//	ret = c1.issamebyclass(c2);
//	if (ret)
//	{
//		cout << "成员函数判断：c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "成员函数判断：c1和c2是不相等的" << endl;
//	}
//	return 0;
//}


//封装 - 设计案例2 - 点和圆的关系

//点类
//class Point
//{
//public:
//	//设置X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取X
//	int getX()
//	{
//		return m_X;
//	}
//	//设置Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取Y
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

//圆类
//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//半径
//
//	//在类中可以让另一个类	作为本类中的成员
//	Point m_Center;//圆心
//};

#include "circle.h"
#include "point.h"

//判断点和圆的关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点之间距离平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径平方
	int rDistance = c.getR() * c.getR();
	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setX(10);
	p.setY(10);

	//判断关系
	isInCircle(c, p);
	return 0;
}