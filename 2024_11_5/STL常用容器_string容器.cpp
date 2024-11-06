#include <iostream>
using namespace std;

//string�Ĺ��캯��

/*
���캯��ԭ��:
- string();                    //����һ���յ��ַ��� ���磺string str
- string(const char* s);       //ʹ���ַ���s��ʼ��
- string(const string& str);   //ʹ��һ��string�����ʼ����һ��string����
- string(int n,char c);        //ʹ��n���ַ�c��ʼ��
*/

//void test01()
//{
//	string s1;//Ĭ�Ϲ���
//	const char* str = "hello world";
// 
//	string s2(str);
//	cout << "s2 = " << s2 << endl;
// 
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
// 
//	string s4(10, 'A');
//	cout << "s4 = " << s4 << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string��ֵ����

/*
��ֵ�ĺ���ԭ�ͣ�
string& operator=(const char* s);       //��char*�����ַ�����ֵ����ǰ�ַ���
string& operator=(const string &s);     //���ַ���s������ǰ���ַ���
string& operator=(char c);              //���ַ�������ǰ���ַ���
string& assign(const char* s);          //���ַ���s������ǰ���ַ���
string& assign(const char* s,int n);    //���ַ���s��ǰn���ַ�������ǰ���ַ���
string& assign(const string &s);        //���ַ���s������ǰ���ַ���
string& assign(int n,char c);           //��n���ַ�c������ǰ�ַ���
*/

//void test01()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1 = " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << "str3 = " << str3 << endl;
//
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4 = " << str4 << endl;
//
//	string str5;
//	str5.assign("hello C++", 5);
//	cout << "str5 = " << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//
//	string str7;
//	str7.assign(10, 'w');
//	cout << "str7 = " << str7 << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string�ַ���ƴ��

/*
����ԭ�ͣ�
string& operator+=(const char* str);           //����+=������
string& operator+=(const char c);              //����+=������
string& operator+=(const string& str);         //����+=������
string& append(const char *s);                 //���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char *s,int n);           //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s);               //ͬoperator+=(const string& str)
string& append(const string &s,int pos,int n); //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/

//void test01()
//{
//	string str1 = "��";
//	str1 += "������Ϸ";
//	cout << "str1 = " << str1 << endl;
//
//	str1 += ':';
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = " LOL QQspeed";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//
//	string str3 = "I";
//	str3.append("love ");
//	cout << "str3 = " << str3 << endl;
//
//	str3.append("game abcdef", 4);
//	//I love game
//	cout << "str3 = " << str3 << endl;
//
//	//str3.append(str2);
//	//I love ganme LOL
//	
//	//str3.append(str2, 0, 4);//ֻ��ȡ LOL
//	str3.append(str2, 5, 7);//ֻ��ȡQQspeed������2 ���ĸ�λ�ÿ�ʼ��ȡ������3 ��ȡ�ַ�����
//	cout << "str3 = " << str3 << endl;
//} 
//
//int main()
//{
//	test01();
//	return 0;
//}


//string���Һ��滻

//1.����
//void test01()
//{
//	//find
//	string str1 = "abcdefgde";
//	int pos = str1.find("de");
//	if (pos == -1)
//	{
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ַ�����pos = " << pos << endl;
//	}
//	//rfind
//	//����rfind����������(��������������)��find����������
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//}
//
////2.�滻
//void test02()
//{
//	string str1 = "abcdefg";
//	//��1��λ����3���ַ��滻Ϊ��1111��
//	str1.replace(1, 3, "1111");
//	cout << "str1 = " << str1 << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//string�ַ����Ƚ�

//void test01()
//{
//	string str1 = "hello";
//	string str2 = "xello";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 ���� str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1 ���� str2" << endl;
//	}
//	else
//	{
//		cout << "str1 С�� str2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string�ַ���ȡ

//void test01()
//{
//	string str = "hello";
//	cout << "str = " << str << endl;
//
//	//1.ͨ��[]���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++)//str.size()�����ַ�������
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	//2.ͨ��at��ʽ���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//�޸ĵ����ַ�
//	str[0] = 'x';
//	//xello
//	cout << "str = " << str << endl;
//
//	str.at(1) = 'x';
//	//xxllo
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string�����ɾ��

//void test01()
//{
//	string str = "hello";
//
//	//����
//	str.insert(1, "111");
//	//hlllello
//	cout << "str = " << str << endl;
//
//	//ɾ��
//	str.erase(1, 3);
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string�ִ���ȡ

//void test01()
//{
//	string str = "abcdef";
//	string subStr = str.substr(1, 3);
//	cout << "substr = " << subStr << endl;
//}
//
////ʹ�ò���
//void test02()
//{
//	string email = "zhangsan@sina.com";
//	//�������ַ�л�ȡ�û�����Ϣ
//	int pos = email.find("@");
//	cout << pos << endl;
//	string usrname = email.substr(0, pos);
//	cout << usrname << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}