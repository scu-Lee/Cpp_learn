#include <iostream>
using namespace std;

//��������
//�﷨������ֵ���� �������������б� ����������� return���ʽ��

//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}


//��������

//num1��num2Ϊ��ʽ����
//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���������﷨���������ƣ�������
//	//a ,bΪʵ�ʲ���
//	int c = add(a, b);
//	cout << "c = " << c << endl;
//
//	int d = 100;
//	int e = 200;
//	int f = add(d, e);
//	cout << "f = " << f << endl;
//	return 0;
//}


//ֵ����

//void swap(int num1, int num2)
//{
//	cout << "����ǰ��" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//
//	int tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//
//	cout << "������" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	//return������ֵ����Ҫ��ʱ�򣬿��Բ�дreturn
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	//ֵ���ݣ��������βη����ı䣬����Ӱ��ʵ��
//	swap(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


//����������ʽ

//1.�޲��޷�
//void test1()
//{
//	cout << "this is test1" << endl;
//}
//
////2.�в��޷�
//void test2(int a)
//{
//	cout << "this is test2 a = " << a << endl;
//}
//
////3.�޲��з�
//int test3()
//{
//	cout << "this is test3" << endl;
//	return 1000;
//}
//
////4.�в��з�
//int test4(int a)
//{
//	cout << "this is test4 a = " << a << endl;
//	return a;
//}
//int main()
//{
//	//�޲��޷���������
//	test1();
//	//�в��޷���������
//	test2(100);
//	//�޲��з���������
//	int num1 = test3();
//	cout << "num1 = " << num1 << endl;
//	//�в��з���������
//	int num2 = test4(10000);
//	cout << "num2 = " << num2 << endl;
//	return 0;
//}


//��������

////�������Զ�Σ�����ֻ��һ��
////����
//int max(int a, int b);
//int max(int a, int b);
////����
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << max(a, b) << endl;
//	return 0;
//}


//�������ļ���д

//1.����.h��׺����ͷ�ļ�
//2.����.cpp��׺����Դ�ļ�
//3.��ͷ�ļ���д����������
//4.��Դ�ļ���д�����Ķ���

//#include "swap.h"
//
//int main()
//{
//	int a = 10;
//	int b = 30;
//	swap(a, b);
//	return 0;
//}