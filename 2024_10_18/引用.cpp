#include <iostream>
using namespace std;

//����
//�﷨���������� &���� = ԭ��

//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	b = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


//����ע������

//int main()
//{
//	int a = 10;
//	//1.���ñ����ʼ��
//	//int& b;//error
//	int& b = a;
//
//	//2.�����ڳ�ʼ���󣬲����Ըı�
//	int c = 20;
//	b = c;//��ֵ������������
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	return 0;
//}


//��������������

//1.ֵ����
//void myswap01(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//	cout << "swap01 a = " << a << endl;
//	cout << "swap01 b = " << b << endl;
//}
//
////2.��ַ����
//void myswap02(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
////3.���ô���
//int myswap03(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	myswap01(a, b);//ֵ���ݣ��ββ�������ʵ��
//	myswap02(&a, &b);//��ַ���ݣ��βλ�����ʵ��
//	myswap03(a, b);//���ô��ݣ��βλ�����ʵ��
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


//�����������ķ���ֵ

//1.��Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10;//�ֲ����� - ջ��
//	return a;
//}
//
////2.�����ĵ��ÿ�����Ϊ��ֵ
//int& test02()
//{
//	static int a = 10;//��̬���������ȫ������ȫ���������ڳ����������ϵͳ�ͷ�
//	return a;
//}
//
//int main()
//{
//	int& ref = test01();
//	cout << "ref = " << ref << endl;//��һ�α���������
//	cout << "ref = " << ref << endl;//�ڶ����ڴ����ͷ�
//
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	test02() = 1000;//�����ķ���ֵΪ���ã��������ÿ���Ϊ��ֵ
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//	return 0;
//}


//���õı���

//����Ϊ����ת��Ϊint* const ref = &a;
//void func(int& ref)
//{
//	ref = 100;//refΪ����,ת��Ϊ*ref = 100;
//}
//
//int main()
//{
//	int a = 20;
//
//	//�Զ�ת��Ϊint* const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò����Ը�
//	int& ref = a;
//	ref = 20;//�ڲ�����Ϊ����ת��Ϊ��*ref = 20��
//
//	cout << "a =  " << a << endl;
//	cout << "ref = " << ref << endl;
//	func(a);
//	return 0;
//}


//��������
//�����βΣ���ֹ�����

//void showvalue(const int& val)
//{
//	//val = 1000;
//	cout << "val = " << val << endl;
//}
//
//int main()
//{
//	//int a = 10;
//	//��const�󣬱������������Ϊ -- int ��������� = 10��const int& ref = ���������;
//	const int& ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�
//	//ref = 20;//const ֻ���������޸�
//	int a = 100;
//	showvalue(a);
//	cout << "a = " << a << endl;
//	return 0;
//}