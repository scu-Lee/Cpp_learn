#include <iostream>
using namespace std;

//ȫ����
//ȫ�ֱ�������̬����������

////ȫ�ֱ���
//int g_a = 10;
//int g_b = 20;
//
////const���ε�ȫ�ֱ���
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main()
//{
//	//�ֲ�����
//	int a = 10;
//	int b = 20;
//	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
//	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;
//
//	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (int)&g_a << endl;
//	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (int)&g_b << endl;
//
//	//��̬����
//	static int s_a = 10;
//	static int s_b = 20;
//	cout << "��̬����s_a�ĵ�ַΪ��" << (int)&s_a << endl;
//	cout << "��̬����s_b�ĵ�ַΪ��" << (int)&s_b << endl;
//
//	//����
//	//�ַ�������
//	cout << "�ַ��������ĵ�ַΪ��" << (int)&"hello world" << endl;
//
//
//	//const���εı���
//	//const���ε�ȫ�ֱ�����const���εľֲ�����
//	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ��" << (int)&c_g_a << endl;
//	cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ��" << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;//c-const l-local g-global
//	const int c_l_b = 10;
//	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
//	cout << "�ֲ�����c_l_b�ĵ�ַΪ��" << (int)&c_l_b << endl;
//	return 0;
//}


//ջ��
//ע�������Ҫ���ؾֲ������ĵ�ַ��ջ���������ɱ����������ٺ��ͷ�

//int* func(int b)//�β�Ҳ�����ջ��
//{
//	b = 100;
//	int a = 10;//�����ջ���������ں���ִ������Զ��ͷ�
//	return &a;
//}
//
//int main()
//{
//	int* p = func(1);
//	cout << *p << endl;//��һ����ȷ��ӡ�����������˱���
//	cout << *p << endl;//�ڶ���������ݾͲ��ٱ�����
//	return 0;
//}


//����

//int* func()
//{
//	//����new�ؼ��ֿ��Խ����ݿ��ٵ�����
//	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣������ݻ����ڶ���
//	int* p = new int(10);
//	return p;
//}
//
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}


//new������

//1.new�Ļ����﷨
//int* func()
//{
//	//�ڶ���������������
//	//new�����Ǹ��������͵�ָ��
//	int* p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//�����������ɳ���Ա�����٣�����Ա�����ͷ�
//	//������ͷŶ��������ݣ����ùؼ���delete
//	delete p;
//	//cout << *p << endl;//�ڴ��ѱ��ͷţ��ٴη���Ϊ�Ƿ����ʣ�error
//}
//
////2.�ڶ�������new��������
//void test02()
//{
//	//����10�������ݵ����飬�ڶ���
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		cout << arr[j] << endl;
//	}
//	//�ͷŶ�������
//	//�ͷ������ʱ��Ҫ��[]
//	delete[] arr;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}