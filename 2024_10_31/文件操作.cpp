#include <iostream>
using namespace std;
#include <fstream>
#include <string>


//�ı��ļ� - д�ļ�

//void test01()
//{
//	//1.����ͷ�ļ� fstream
//
//	//2.����������
//	ofstream ofs;
//
//	//3.ָ���򿪷�ʽ
//	ofs.open("text.txt", ios::out);
//
//	//4.д����
//	ofs << "������scuLee" << endl;
//	ofs << "�Ա�male" << endl;
//	ofs << "���䣺24" << endl;
//
//	//5.�ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�ı��ļ� - ���ļ�

//void test01()
//{
//	//1.����ͷ�ļ� fstream
//
//	//2.����������
//	ifstream ifs;
//
//	//3.���ļ� �����ж��Ƿ�򿪳ɹ�
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4.������
//	//��һ�֣�
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//	//�ڶ���
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//	//������
//	//string buf;
//	//while (getline(ifs, buf))//������Ҫ����<string>ͷ�ļ�
//	//{
//	//	cout << buf << endl;
//	//}
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)//EOF - end of file
//	{
//		cout << c;//��endl������
//	}
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�������ļ� - д�ļ�

//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	//1.����ͷ�ļ� fstream
//
//	//2.����������
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//3.���ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	//4.д�ļ�
//	Person p = { "scuLee",24 };
//	ofs.write((const char*)&p, sizeof(p));
//
//	//5.�ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�������ļ� - ���ļ�

//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	//1.����ͷ�ļ� fstream
//
//	//2.����������
//	ifstream ifs;
//
//	//3.���ļ� �ж��ļ��Ƿ�򿪳ɹ�
//	ifs.open("person.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4.���ļ�
//	Person p;
//	ifs.read((char*)&p, sizeof(p));
//	cout << "������" << p.m_Name << endl;
//	cout << "���䣺" << p.m_Age << endl;
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}