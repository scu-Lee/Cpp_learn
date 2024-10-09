#include <iostream>
using namespace std;


//选择结构

//单行if语句

//int main()
//{
//	int score = 0;
//	cout << "请输入：" << endl;
//	cin >> score;
//	cout << "输入为：" << score << endl;
//	if (score > 600)
//	{
//		cout << "congratulations" << endl;
//	}
//	return 0;
//}


//多行if语句

//int main()
//{
//	int score = 0;
//	cout << "请输入：" << endl;
//	cin >> score;
//	cout << "输入为：" << score << endl;
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


//多条件if语句

//int main()
//{
//	int score = 0;
//	cout << "请输入：" << endl;
//	cin >> score;
//  cout << "输入为：" << score << endl;
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


//嵌套if语句

//int main()
//{
//	int score = 0;
//	cout << "请输入：" << endl;
//	cin >> score;
//	cout << "输入为：" << score << endl;
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


//三只小猪称体重

//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	cout << "输入小猪A的体重：" << endl;
//	cin >> A;
//	cout << "输入小猪B的体重：" << endl;
//	cin >> B;
//	cout << "输入小猪C的体重：" << endl;
//	cin >> C;
//	cout << "A的体重为：" << A << endl;
//	cout << "B的体重为：" << B << endl;
//	cout << "C的体重为：" << C << endl;
//	if (A > B)
//	{
//		if (A > C)
//		{
//			cout << "小猪A最重" << endl;
//		}
//		else
//		{
//			cout << "小猪C最重" << endl;
//		}
//	}
//	else if (A < B)
//	{
//		if (B > C)
//		{
//			cout << "小猪B最重" << endl;
//		}
//		else
//		{
//			cout << "小猪C最重" << endl;
//		}
//	}
//	return 0;
//}


//三目运算符

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = (a > b ? a : b);//满足a>b，返回a，否则返回b
//	cout << "c = " << c << endl;
//	//在C++中，三目运算符返回的是变量，可以继续赋值
//	//在C中，不能对三目运算符赋值操作
//	(a > b ? a : b) = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


// switch语句

//int main()
//{
//	int score = 0;
//	cout << "请输入评分："  << endl;
//	cin >> score;
//	cout << "输入分数为：" << score << endl;
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
//	// if 和 switch区别？
//	//switch 缺点，判断时只能是整型或者字符型，不可以是一个区间
//	//switch 优点，结构清晰，执行效率高（比if语句快）
//	return 0;
//}


//循环结构

// while语句

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


// 猜数字

//#include <ctime>//time系统时间头文件
//int main()
//{
//	//添加随机数种子，作为利用当前时间生成的随机数，防止每次随机数都一样
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	//cout << num << endl;
//	int val = 0;
//	while (1)
//	{
//		cin >> val;
//		if (val > num)
//		{
//			cout << "猜大了" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "猜小了" << endl;
//		}
//		else
//		{
//			cout << "猜对了" << endl;
//			break;
//		}
//    }
//	return 0;
//}


// do while语句

//int main()
//{
//	int num = 0;
//	do
//	{
//		cout << num << endl;
//		num++;
//	} while (num < 10);
//	//do while 和 while 的区别在于do while 会先执行一次循环语句
//	return 0;
//}


// 水仙花数

//int main()
//{
//	int num = 100;
//	do
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10;//获取num的个位
//		b = num / 10 % 10;//获取num的十位
//		c = num / 100;//获取num的百位
//		if (a* a* a + b * b * b + c * c * c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	return 0;
//}


// for循环

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}


// 敲桌子（能被7整除的数字，个位有7的数字，十位有7的数字）

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
//		{
//			cout << "敲桌子" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}


// 嵌套循环

//int main()
//{
//	for (int i = 0; i < 10; i++)//建议内层，外层循环变量用不同的变量定义
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "* ";//cout<<i<<endl; 这里的i打印就近原则，为内层循环的i。
//		}
//		cout << endl;
//	}
//	return 0;
//}


// 乘法口诀表

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


// break语句

//int main()
//{
//	//1.出现在switch语句中
//	//cout << "请选择副本难度" << endl;
//	//cout << "1.普通" << endl;
//	//cout << "2.中等" << endl;
//	//cout << "3.困难" << endl;
//	//int select = 0;
//	//cin >> select;
//	//switch (select)
//	//{
//	//case 1:
//	//	cout << "已选择普通难度" << endl;
//	//	break;
//	//case 2:
//	//	cout << "已选择中等难度" << endl;
//	//	break;
//	//case 3:
//	//	cout << "已选择困难难度" << endl;
//	//	break;
//	//default:
//	//	break;
//	//}
//
//	//2.出现在循环语句中
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	if (i == 5)
//	//	{
//	//		break;
//	//	}
//	//	cout << i << " ";
//	//}
//
//	//3.出现在循环嵌套语句中
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


// continue语句

//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		//奇数输出，偶数不输出
//		if (i % 2 == 0)
//		{
//			continue;//可以筛选条件，执行到此就不再向下执行，执行下一次循环
//		}
//		cout << i << endl;
//	}
//	return 0;
//}


// go to语句

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