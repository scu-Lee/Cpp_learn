#include <iostream>
using namespace std;

//string的构造函数

/*
构造函数原型:
- string();                    //创建一个空的字符串 例如：string str
- string(const char* s);       //使用字符串s初始化
- string(const string& str);   //使用一个string对象初始化另一个string对象
- string(int n,char c);        //使用n个字符c初始化
*/

//void test01()
//{
//	string s1;//默认构造
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


//string赋值操作

/*
赋值的函数原型：
string& operator=(const char* s);       //把char*类型字符串赋值给当前字符串
string& operator=(const string &s);     //把字符串s赋给当前的字符串
string& operator=(char c);              //把字符赋给当前的字符串
string& assign(const char* s);          //把字符串s赋给当前的字符串
string& assign(const char* s,int n);    //把字符串s的前n个字符赋给当前的字符串
string& assign(const string &s);        //把字符串s赋给当前的字符串
string& assign(int n,char c);           //用n个字符c赋给当前字符串
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


//string字符串拼接

/*
函数原型：
string& operator+=(const char* str);           //重载+=操作符
string& operator+=(const char c);              //重载+=操作符
string& operator+=(const string& str);         //重载+=操作符
string& append(const char *s);                 //把字符串s连接到当前字符串结尾
string& append(const char *s,int n);           //把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);               //同operator+=(const string& str)
string& append(const string &s,int pos,int n); //字符串s中从pos开始的n个字符连接到字符串结尾
*/

//void test01()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏";
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
//	//str3.append(str2, 0, 4);//只截取 LOL
//	str3.append(str2, 5, 7);//只截取QQspeed，参数2 从哪个位置开始截取，参数3 截取字符个数
//	cout << "str3 = " << str3 << endl;
//} 
//
//int main()
//{
//	test01();
//	return 0;
//}


//string查找和替换

//1.查找
//void test01()
//{
//	//find
//	string str1 = "abcdefgde";
//	int pos = str1.find("de");
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到字符串，pos = " << pos << endl;
//	}
//	//rfind
//	//区别：rfind从右往左找(逆向查找正向输出)，find从左往右找
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//}
//
////2.替换
//void test02()
//{
//	string str1 = "abcdefg";
//	//从1号位置起3个字符替换为“1111”
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


//string字符串比较

//void test01()
//{
//	string str1 = "hello";
//	string str2 = "xello";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 等于 str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1 大于 str2" << endl;
//	}
//	else
//	{
//		cout << "str1 小于 str2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string字符存取

//void test01()
//{
//	string str = "hello";
//	cout << "str = " << str << endl;
//
//	//1.通过[]访问单个字符
//	for (int i = 0; i < str.size(); i++)//str.size()返回字符串长度
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	//2.通过at方式访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//修改单个字符
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


//string插入和删除

//void test01()
//{
//	string str = "hello";
//
//	//插入
//	str.insert(1, "111");
//	//hlllello
//	cout << "str = " << str << endl;
//
//	//删除
//	str.erase(1, 3);
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string字串获取

//void test01()
//{
//	string str = "abcdef";
//	string subStr = str.substr(1, 3);
//	cout << "substr = " << subStr << endl;
//}
//
////使用操作
//void test02()
//{
//	string email = "zhangsan@sina.com";
//	//从邮箱地址中获取用户名信息
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