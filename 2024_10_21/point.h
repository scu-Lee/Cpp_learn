#pragma once//��ֹͷ�ļ��ظ�����
#include <iostream>
using namespace std;//��׼�����ռ�


//����
class Point
{
public:
	//����X
	void setX(int x);
	//��ȡX
	int getX();
	//����Y
	void setY(int y);
	//��ȡY
	int getY();

private:
	int m_X;
	int m_Y;
};