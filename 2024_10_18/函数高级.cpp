#include <iostream>
using namespace std;


//����Ĭ�ϲ���
//�﷨������ֵ���� ���������β� = Ĭ��ֵ��{};
//���������ʹ�ô������������ʹ��Ĭ�ϲ���

//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}

//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����ұ�����Ĭ��ֵ
//int func2(int a, int b = 10, int c, int d)//error
//{
//	return a + b + c + d;
//}

//2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���
//int func2(int a, int b);
//int func2(int a = 10, int b = 20)
//{
//	return a + b;
//}
//
//int main()
//{
//	int x = func(10, 30);
//	cout << x << endl;
//	x = func2();
//	cout << x << endl;
//	return 0;
//}


//ռλ����
//�﷨������ֵ ���������������ͣ�{};
//ռλ����������Ĭ�ϲ��� - �磺void func(int a, int = 10){}

//void func(int a, int)
//{
//	cout << "this is a function." << endl;
//}
//
//int main()
//{
//	func(10��10);//ռλ���������
//	return 0;
//}


//��������
//�����ú�������ͬ����߸�����

//����������������
//1.ͬһ����������
//2.����������ͬ
//3.�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//void func()
//{
//	cout << "func �ĵ���" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a) �ĵ���" << endl;
//}
//
//void func(double a)
//{
//	cout << "func(double a) �ĵ���" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b) �ĵ���" << endl;
//}
//
//void func(double a, int b)
//{
//	cout << "func(double a, int b) �ĵ���" << endl;
//}
//
////ע������
////��������ֵ��������Ϊ�������ص�����
////int func(double a, int b)//error
////{
////	cout << "func(double a, int b) �ĵ���" << endl;
////}
//
//int main()
//{
//	func();
//	func(10);
//	func(3.14);
//	func(10, 3.14);
//	func(3.14, 10);
//	return 0;
//}


//��������ע������
//1.������Ϊ��������
//void func(int& a)//int& a = 10;���Ϸ�
//{
//	cout << "func(int& a) �ĵ���" << endl;
//}
//
//void func(const int& a)//const int& a = 10;�Ϸ�
//{
//	cout << "func(const int& a) �ĵ���" << endl;
//}
//
////2.������������Ĭ�ϲ���
//void func2(int a, int b = 10)
//{
//	cout << "func2(int a,int b) �ĵ���" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a) �ĵ���" << endl;
//}
//
//int main()
//{
//	//int a = 10;
//	//func(a);
//	func(10);
//	//func2(10);//��������������Ĭ�ϲ���ʱ�����ֶ����ԣ�error
//	func2(10, 20);//ok
//	return 0;
//}