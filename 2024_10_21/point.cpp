#include "point.h"

//设置X
void Point::setX(int x)//Point:: - 作用域 表示这个是成员函数//shift + tab缩进
{
	m_X = x;
}
//获取X
int Point::getX()
{
	return m_X;
}
//设置Y
void Point::setY(int y)
{
	m_Y = y;
}
//获取Y
int Point::getY()
{
	return m_Y;
}
