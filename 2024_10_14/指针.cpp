#include <iostream>
using namespace std;

//ָ�붨���ʹ��

//int main()
//{
//	//1.����ָ��
//	int a = 10;
//	//ָ���﷨����������* ָ�������
//	int* p;
//	p = &a;
//	cout << "a�ĵ�ַΪ��" << &a << endl;
//	cout << "ָ��pΪ: " << p << endl;
//
//	//2.ʹ��ָ��
//	//*ָ�� Ϊ������
//	*p = 1000;
//	cout << "a = " << a << endl;
//	cout << "*p = " << *p << endl;
//	return 0;
//}


//ָ����ռ�ڴ�ռ�

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//ָ����32λ����ϵͳΪ4�ֽ� ��64λΪ8�ֽ�
//	cout << "sizeof (int*) = " << sizeof(int*) << endl;
//	cout << "sizeof (float*) = " << sizeof(float*) << endl;
//	cout << "sizeof (double*) = " << sizeof(double*) << endl;
//	cout << "sizeof (char*) = " << sizeof(char*) << endl;
//	return 0;
//}


//��ָ��

//int main()
//{
//	//1.��ָ�����ڳ�ʼ��ָ�����
//	int* p = NULL;
//
//	//2.��ָ�벻���Է���
//	//�ڴ���Ϊ0~255Ϊϵͳռ���ڴ棬�������û�����
//	*p = 100;//error
//	return 0;
//}


//Ұָ��

//int main()
//{
//	int* p = (int*)0x1122;
//	cout << *p << endl;
//	return 0;
//}


//const����ָ��

//int main()
//{
//	//1.const����ָ��  ����ָ��
//	int a = 10;
//	int b = 20;
//	const int* p = &a;
//	//ָ��ָ���ֵ�������޸ģ�ָ���ָ����Ը�
//	//*p = 20;error
//	p = &b;//��ȷ
//
//	//2.const���γ���  ָ�볣��
//	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
//	int* const p2 = &a;
//	*p2 = 100;//��ȷ
//	//p2 = &b;//error
//
//	//3.const����ָ��ͳ���
//	//ָ���ָ���ָ���ֵ�������Ը�
//	const int* const p3 = &a;
//	//*p3 = 100;//error
//	//p3 = &b;//error
//	return 0;
//}


//ָ�������

//int main()
//{
//	//����ָ���������Ԫ��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
//	int* p = arr;
//	cout << "ָ����ʵ�һ��Ԫ�أ�" << *p << endl;
//	p++;//��ָ�����ƫ��4���ֽ�
//	cout << "ָ����ʵڶ���Ԫ�أ�" << *p << endl;
//	cout << "����ָ���������" << endl;
//	int* p2 = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		//cout << arr[i] << endl;
//		cout << *p2 << endl;
//		p2++;
//	}
//	return 0;
//}


//ָ��ͺ���

//ʵ���������ֽ���
//void swap01(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//	cout << "swap01 a = " << a << endl;
//	cout << "swap01 b = " << b << endl;
//}
//
//void swap02(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	//1.ֵ����
//	int a = 10;
//	int b = 20;
//	swap01(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	//2.ַ����
//	swap02(&a, &b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


//ָ�롢���顢����

void bubble_sort(int* arr, int len)//int* arrҲ����дΪint arr[]
{
	int tmp = 0;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

//if (*p > *(p+1))
//{
//	tmp = *p;
//	*p = *(p + 1);
//	*(p + 1) = tmp;
//}error

void print(int* p, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << *(p + i) << " ";
	}
}

int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, len);
	print(arr, len);
	return 0;
}