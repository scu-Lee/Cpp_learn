#include <iostream>
using namespace std;


//ѡ��ṹ

//����if���

//int main()
//{
//	int score = 0;
//	cout << "�����룺" << endl;
//	cin >> score;
//	cout << "����Ϊ��" << score << endl;
//	if (score > 600)
//	{
//		cout << "congratulations" << endl;
//	}
//	return 0;
//}


//����if���

//int main()
//{
//	int score = 0;
//	cout << "�����룺" << endl;
//	cin >> score;
//	cout << "����Ϊ��" << score << endl;
//	if (score > 600)
//	{
//		cout << "congratulations!" << endl;
//	}
//	else
//	{
//		cout << "that's a pity!" << endl;
//	}
//	return 0;
//}


//������if���

//int main()
//{
//	int score = 0;
//	cout << "�����룺" << endl;
//	cin >> score;
//  cout << "����Ϊ��" << score << endl;
//	if (score > 600)
//	{
//		cout << "congratulations!" << endl;
//	}
//	else if (score > 500)
//	{
//		cout << "great!" << endl;
//	}
//	else if (score > 400)
//	{
//		cout << "good!" << endl;
//	}
//	else
//	{
//		cout << "you need to work hard!" << endl;
//	}
//	return 0;
//}


//Ƕ��if���

//int main()
//{
//	int score = 0;
//	cout << "�����룺" << endl;
//	cin >> score;
//	cout << "����Ϊ��" << score << endl;
//	if (score > 600)
//	{
//		cout << "congratulations!" << endl;
//		if (score > 700)
//		{
//			cout << "Peking University,congratulations!" << endl;
//		}
//		else if (score > 650)
//		{
//			cout << "Tsinghua University,congratulations!" << endl;
//		}
//		else
//		{
//			cout << "Sichuan University,congratulations!" << endl;
//		}
//	}
//	else if (score > 500)
//	{
//		cout << "great!" << endl;
//	}
//	else if (score > 400)
//	{
//		cout << "good!" << endl;
//	}
//	else
//	{
//		cout << "you need to work hard!" << endl;
//	}
//	return 0;
//}


//��ֻС�������

//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	cout << "����С��A�����أ�" << endl;
//	cin >> A;
//	cout << "����С��B�����أ�" << endl;
//	cin >> B;
//	cout << "����С��C�����أ�" << endl;
//	cin >> C;
//	cout << "A������Ϊ��" << A << endl;
//	cout << "B������Ϊ��" << B << endl;
//	cout << "C������Ϊ��" << C << endl;
//	if (A > B)
//	{
//		if (A > C)
//		{
//			cout << "С��A����" << endl;
//		}
//		else
//		{
//			cout << "С��C����" << endl;
//		}
//	}
//	else if (A < B)
//	{
//		if (B > C)
//		{
//			cout << "С��B����" << endl;
//		}
//		else
//		{
//			cout << "С��C����" << endl;
//		}
//	}
//	return 0;
//}


//��Ŀ�����

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = (a > b ? a : b);//����a>b������a�����򷵻�b
//	cout << "c = " << c << endl;
//	//��C++�У���Ŀ��������ص��Ǳ��������Լ�����ֵ
//	//��C�У����ܶ���Ŀ�������ֵ����
//	(a > b ? a : b) = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


// switch���

//int main()
//{
//	int score = 0;
//	cout << "���������֣�"  << endl;
//	cin >> score;
//	cout << "�������Ϊ��" << score << endl;
//	switch (score)
//	{
//	case 10:
//		cout << "wonderful!" << endl;
//		break;
//	case 9:
//		cout << "great!" << endl;
//		break;
//	case 8:
//		cout << "nice!" << endl;
//		break;
//	case 7:
//	case 6:
//		cout << "good!" << endl;
//		break;
//	default:
//		cout << "it's to bad!" << endl;
//		break;
//	}
//
//	// if �� switch����
//	//switch ȱ�㣬�ж�ʱֻ�������ͻ����ַ��ͣ���������һ������
//	//switch �ŵ㣬�ṹ������ִ��Ч�ʸߣ���if���죩
//	return 0;
//}


//ѭ���ṹ

// while���

//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		cout << a << endl;
//		a++;
//	}
//	return 0;
//}


// ������

//#include <ctime>//timeϵͳʱ��ͷ�ļ�
//int main()
//{
//	//�����������ӣ���Ϊ���õ�ǰʱ�����ɵ����������ֹÿ���������һ��
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	//cout << num << endl;
//	int val = 0;
//	while (1)
//	{
//		cin >> val;
//		if (val > num)
//		{
//			cout << "�´���" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "��С��" << endl;
//		}
//		else
//		{
//			cout << "�¶���" << endl;
//			break;
//		}
//    }
//	return 0;
//}


// do while���

//int main()
//{
//	int num = 0;
//	do
//	{
//		cout << num << endl;
//		num++;
//	} while (num < 10);
//	//do while �� while ����������do while ����ִ��һ��ѭ�����
//	return 0;
//}


// ˮ�ɻ���

//int main()
//{
//	int num = 100;
//	do
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10;//��ȡnum�ĸ�λ
//		b = num / 10 % 10;//��ȡnum��ʮλ
//		c = num / 100;//��ȡnum�İ�λ
//		if (a* a* a + b * b * b + c * c * c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	return 0;
//}


// forѭ��

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}


// �����ӣ��ܱ�7���������֣���λ��7�����֣�ʮλ��7�����֣�

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
//		{
//			cout << "������" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}


// Ƕ��ѭ��

//int main()
//{
//	for (int i = 0; i < 10; i++)//�����ڲ㣬���ѭ�������ò�ͬ�ı�������
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "* ";//cout<<i<<endl; �����i��ӡ�ͽ�ԭ��Ϊ�ڲ�ѭ����i��
//		}
//		cout << endl;
//	}
//	return 0;
//}


// �˷��ھ���

//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "x" << i << "=" << j * i << "\t";
//		}
//		cout << endl;
//	}
//	return 0;
//}


// break���

//int main()
//{
//	//1.������switch�����
//	//cout << "��ѡ�񸱱��Ѷ�" << endl;
//	//cout << "1.��ͨ" << endl;
//	//cout << "2.�е�" << endl;
//	//cout << "3.����" << endl;
//	//int select = 0;
//	//cin >> select;
//	//switch (select)
//	//{
//	//case 1:
//	//	cout << "��ѡ����ͨ�Ѷ�" << endl;
//	//	break;
//	//case 2:
//	//	cout << "��ѡ���е��Ѷ�" << endl;
//	//	break;
//	//case 3:
//	//	cout << "��ѡ�������Ѷ�" << endl;
//	//	break;
//	//default:
//	//	break;
//	//}
//
//	//2.������ѭ�������
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	if (i == 5)
//	//	{
//	//		break;
//	//	}
//	//	cout << i << " ";
//	//}
//
//	//3.������ѭ��Ƕ�������
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	for (int j = 0; j < 10; j++)
//	//	{
//	//		if (j == 5)
//	//		{
//	//			break;
//	//		}
//	//		cout << "* ";
//	//	}
//	//	cout << endl;
//	//}
//	return 0;
//}


// continue���

//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		//���������ż�������
//		if (i % 2 == 0)
//		{
//			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
//		}
//		cout << i << endl;
//	}
//	return 0;
//}


// go to���

//int main()
//{
//	cout << "1.xxxxx" << endl;
//	cout << "2.xxxxx" << endl;
//	goto FLAG;
//	cout << "3.xxxxx" << endl;
//	cout << "4.xxxxx" << endl;
//	FLAG:
//	cout << "5.xxxxx" << endl;
//	return 0;
//}