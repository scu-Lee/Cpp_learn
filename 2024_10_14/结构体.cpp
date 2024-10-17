#include <iostream>
using namespace std;


//结构体定义

//语法：struct 类型名称{名称列表};
//struct student
//{
//	string name;
//	int age;
//	int score;
//}s3;
//
//int main()
//{
//	//struct关键字可以省略
//	struct student s1;
//	s1.name = "张三";
//	s1.age = 15;
//	s1.score = 95;
//	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
//
//	struct student s2 = { "李四",18,97 };
//	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
//
//	s3.name = "王五";
//	s3.age = 24;
//	s3.score = 98;
//	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
//	return 0;
//}


//结构体数组

//1.创建结构体
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main()
//{
//	//2.创建结构体数组
//	struct student stuarray[3] = {
//		{"张三",15,85},
//		{"李四",18,90},
//		{"王五",24,98}
//	};
//
//	//3.给结构体数组中的元素赋值
//	stuarray[2].name = "赵六";
//	stuarray[2].age = 80;
//	stuarray[2].score = 60;
//
//	//4.遍历结构体数组
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "姓名：" << stuarray[i].name
//			<< "年龄：" << stuarray[i].age
//			<< "分数：" << stuarray[i].score << endl;
//	}
//	return 0;
//}


//结构体指针

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main()
//{
//	//1.创建结构体变量
//	struct student s = { "张三",18,100 };
//	//2.创建结构体指针
//	struct student* p = &s;
//	//3.通过结构体指针访问结构体变量
//	cout << "姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score;
//	return 0;
//}


//结构体嵌套结构体

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct student stu;
//};
//
//int main()
//{
//	teacher t;
//	t.id = 20230901;
//	t.name = "sculee";
//	t.age = 24;
//	t.stu.name = "小李";
//	t.stu.age = 18;
//	t.stu.score = 98;
//	cout << "老师姓名：" << t.name << "老师编号：" << t.id << "老师年龄：" << t.age 
//		 << "学生姓名：" << t.stu.name << "学生年龄：" << t.stu.age << "学生分数：" << t.stu.score 
//		 << endl;
//
//	return 0;
//}


//结构体做函数参数

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////1.值传递
//void printstudent1(struct student s)
//{
//	s.age = 100;
//	cout << "子函数中打印 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;
//}
//
////2.地址传递
//void printstudent2(struct student* p)
//{
//	p->age = 128;
//	cout << "子函数中打印 姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score << endl;
//}
//
//int main()
//{
//	struct student s;
//	s.name = "sculee";
//	s.age = 24;
//	s.score = 97;
//
//	//printstudent1(s);
//	printstudent2(&s);
//	cout << "main函数中打印 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;
//	return 0;
//}


//结构体中的const

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////将函数中的形参修改为指针，可以减少内存空间的使用，而且不会复制新的副本
//void printstudent(const student* s)
//{
//	//s->age = 120;//加const后，一旦有修改的误操作就会报错
//	cout << "姓名：" << s->name << "年龄：" << s->age << "分数：" << s->score << endl;
//}
//
//int main()
//{
//	struct student s = { "sculee",18,95 };
//	printstudent(&s);
//	cout << "main函数中sculee的年龄为：" << s.age << endl;
//	return 0;
//}


//案例1：创建结构体数组存放以下信息，一共3个老师，每个老师带5个学生

//#include <ctime>
//struct student
//{
//	string s_name;
//	int score;
//};
//
//struct teacher
//{
//	string t_name;
//	struct student s_array[5];
//};
//
//void allocate_space(teacher t_array[], int  len)
//{
//	string name_seed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		t_array[i].t_name = "Teacher_";
//		t_array[i].t_name += name_seed[i];//字符串拼接
//		for (int j = 0; j < 5; j++)
//		{
//			t_array[i].s_array[j].s_name = "Student_";
//			t_array[i].s_array[j].s_name += name_seed[j];
//
//			int random = rand() % 61 + 40;
//			t_array[i].s_array[j].score = random;
//		}
//	}
//}
//
//void print_info(teacher t_array[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师名字：" << t_array[i].t_name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生名字：" << t_array[i].s_array[j].s_name
//				 << " 考试分数：" << t_array[i].s_array[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	struct teacher t_array[3];
//	int len = sizeof(t_array) / sizeof(t_array[0]);
//	allocate_space(t_array, len);
//	print_info(t_array, len);
//	return 0;
//}


//案例2：创建结构体数组存放5个人的信息，并通过冒泡排序算法按年龄排序

//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//
////按年龄排序
//void bubble_sort(hero heroarray[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (heroarray[j].age > heroarray[j + 1].age)
//			{
//				struct hero tmp = heroarray[j];
//				heroarray[j] = heroarray[j + 1];
//				heroarray[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void printhero(hero heroarray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名：" << heroarray[i].name
//			 << "年龄: " << heroarray[i].age
//			 << "性别：" << heroarray[i].sex << endl;
//	}
//}
//
//int main()
//{
//	struct hero heroarray[5] = {
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"}
//	};
//	int len = sizeof(heroarray) / sizeof(heroarray[0]);
//	cout << "排序前打印：" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名：" << heroarray[i].name 
//			 << "年龄: " << heroarray[i].age 
//			 << "性别：" << heroarray[i].sex << endl;
//	}
//	bubble_sort(heroarray, len);
//	cout << "排序后打印：" << endl;
//	printhero(heroarray, len);
//	return 0;
//}