#include <iostream>
using namespace std;


//һά����

//int main()
//{
//	//���巽ʽ1
//	//�������� ������[Ԫ�ظ���];
//	int score[10];
//
//	//�����±긳ֵ
//	score[0] = 100;
//	score[1] = 99;
//	score[2] = 85;
//
//	//�����±����
//	cout << score[0] << endl;
//	cout << score[1] << endl;
//	cout << score[2] << endl;
//
//	//���巽ʽ2
//	//�������� ������[Ԫ�ظ���] = {ֵ1��ֵ2��ֵ3 ...};
//	//���Ԫ�ز��㣬��0��ȫ
//	int score2[10] = { 10,20,30 };
//
//	//ѭ�����
//	for (int i = 0; i < 10; i++)
//	{
//		cout << score2[i] << endl;
//	}
//
//	//���巽ʽ3
//	//�������� ������[] = {ֵ1��ֵ2��ֵ3 ...};
//
//	int score3[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << score3[i] << endl;
//	}
//	return 0;
//}


//int main()
//{
//	//��������;
//	//1.���Ի�ȡ��������ռ���ڴ�ռ�Ĵ�С
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	cout << "����������ռ�ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
//	cout << "ÿ��Ԫ����ռ�ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
//	cout << "����Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	//2.����ͨ����������ȡ�������׵�ַ
//	cout << "�����׵�ַΪ��" << (int)arr << endl;
//	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
//	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;
//
//	//arr = 100; �����������ǳ����������Ը�ֵ
//	return 0;
//}


//5ֻС�������

//int main()
//{
//	int arr[5] = { 300,350,200,400,250 };
//	int max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	cout << "���ص�С������Ϊ��" << max << endl;
//	return 0;
//}


//����Ԫ������

//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	cout << "����ǰԪ��˳��Ϊ��" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	int tmp = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	cout << "���ú�Ԫ��˳��Ϊ��" << endl;
//	for (int j = 0; j < 5; j++)
//	{
//		cout << arr[j] << " ";
//	}
//	return 0;
//}


//ð������

//int main()
//{
//	//��������
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int z = 0; z < sz; z++)
//	{
//		cout << arr[z] << " ";
//	}
//	return 0;
//}


//��ά����

//int main()
//{
//	//��ʽ1
//	//�������� ������[����][����];
//	int arr[2][3];
//	arr[0][0] = 1;
//	arr[0][1] = 2;
//	arr[0][2] = 3;
//	arr[1][0] = 4;
//	arr[1][1] = 5;
//	arr[1][2] = 6;
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	//��ʽ2
//	//�������� ������[����][����] = {{����1������2},{����3������4}};
//	int arr2[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//
//	//��ʽ3
//	//�������� ������[][����] = {����1������2,����3������4};
//	int arr3[2][3] = { 1,2,3,4,5,6 };
//
//	//��ʽ4
//	//�������� ������[][����] = {����1������2,����3������4};
//	int arr4[][3] = { 1,2,3,4,5,6 };
//	return 0;
//}


//int main()
//{
//	//1.���Բ鿴ռ���ڴ�ռ�Ĵ�С
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
//	cout << "��ά�����һ��ռ���ڴ�Ϊ��" << sizeof(arr[0]) << endl;
//	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ��" << sizeof(arr[0][0]) << endl;
//
//	cout << "��ά��������Ϊ��" << sizeof(arr)/sizeof(arr[0]) << endl;
//	cout << "��ά��������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//	//2.���Բ鿴��ά������׵�ַ
//	cout << "��ά�����׵�ַΪ��" << (int)arr << endl;
//	cout << "��ά�����һ���׵�ַΪ��" << (int)arr[0] << endl;
//	cout << "��ά����ڶ����׵�ַΪ��" << (int)arr[1] << endl;
//
//	cout << "��ά�����һ��Ԫ���׵�ַΪ��" << (int)&arr[0][0] << endl;
//	cout << "��ά����ڶ���Ԫ���׵�ַΪ��" << (int)&arr[0][1] << endl;
//	return 0;
//}


//�ɼ�ͳ��

//#include <string>
//int main()
//{
//	int scores[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
//	string names[3] = { "����","����","����" };
//	for (int i = 0; i < 3; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			sum += scores[i][j];
//			//cout << scores[i][j] << " ";
//		}
//		cout << names[i] << "���ܷ�Ϊ��" << sum << endl;
//	}
//	return 0;
//}