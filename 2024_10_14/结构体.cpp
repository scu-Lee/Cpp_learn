#include <iostream>
using namespace std;


//�ṹ�嶨��

//�﷨��struct ��������{�����б�};
//struct student
//{
//	string name;
//	int age;
//	int score;
//}s3;
//
//int main()
//{
//	//struct�ؼ��ֿ���ʡ��
//	struct student s1;
//	s1.name = "����";
//	s1.age = 15;
//	s1.score = 95;
//	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
//
//	struct student s2 = { "����",18,97 };
//	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;
//
//	s3.name = "����";
//	s3.age = 24;
//	s3.score = 98;
//	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;
//	return 0;
//}


//�ṹ������

//1.�����ṹ��
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main()
//{
//	//2.�����ṹ������
//	struct student stuarray[3] = {
//		{"����",15,85},
//		{"����",18,90},
//		{"����",24,98}
//	};
//
//	//3.���ṹ�������е�Ԫ�ظ�ֵ
//	stuarray[2].name = "����";
//	stuarray[2].age = 80;
//	stuarray[2].score = 60;
//
//	//4.�����ṹ������
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "������" << stuarray[i].name
//			<< "���䣺" << stuarray[i].age
//			<< "������" << stuarray[i].score << endl;
//	}
//	return 0;
//}


//�ṹ��ָ��

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main()
//{
//	//1.�����ṹ�����
//	struct student s = { "����",18,100 };
//	//2.�����ṹ��ָ��
//	struct student* p = &s;
//	//3.ͨ���ṹ��ָ����ʽṹ�����
//	cout << "������" << p->name << "���䣺" << p->age << "������" << p->score;
//	return 0;
//}


//�ṹ��Ƕ�׽ṹ��

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
//	t.stu.name = "С��";
//	t.stu.age = 18;
//	t.stu.score = 98;
//	cout << "��ʦ������" << t.name << "��ʦ��ţ�" << t.id << "��ʦ���䣺" << t.age 
//		 << "ѧ��������" << t.stu.name << "ѧ�����䣺" << t.stu.age << "ѧ��������" << t.stu.score 
//		 << endl;
//
//	return 0;
//}


//�ṹ������������

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////1.ֵ����
//void printstudent1(struct student s)
//{
//	s.age = 100;
//	cout << "�Ӻ����д�ӡ ������" << s.name << "���䣺" << s.age << "������" << s.score << endl;
//}
//
////2.��ַ����
//void printstudent2(struct student* p)
//{
//	p->age = 128;
//	cout << "�Ӻ����д�ӡ ������" << p->name << "���䣺" << p->age << "������" << p->score << endl;
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
//	cout << "main�����д�ӡ ������" << s.name << "���䣺" << s.age << "������" << s.score << endl;
//	return 0;
//}


//�ṹ���е�const

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////�������е��β��޸�Ϊָ�룬���Լ����ڴ�ռ��ʹ�ã����Ҳ��Ḵ���µĸ���
//void printstudent(const student* s)
//{
//	//s->age = 120;//��const��һ�����޸ĵ�������ͻᱨ��
//	cout << "������" << s->name << "���䣺" << s->age << "������" << s->score << endl;
//}
//
//int main()
//{
//	struct student s = { "sculee",18,95 };
//	printstudent(&s);
//	cout << "main������sculee������Ϊ��" << s.age << endl;
//	return 0;
//}


//����1�������ṹ��������������Ϣ��һ��3����ʦ��ÿ����ʦ��5��ѧ��

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
//		t_array[i].t_name += name_seed[i];//�ַ���ƴ��
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
//		cout << "��ʦ���֣�" << t_array[i].t_name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ�����֣�" << t_array[i].s_array[j].s_name
//				 << " ���Է�����" << t_array[i].s_array[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//	struct teacher t_array[3];
//	int len = sizeof(t_array) / sizeof(t_array[0]);
//	allocate_space(t_array, len);
//	print_info(t_array, len);
//	return 0;
//}


//����2�������ṹ��������5���˵���Ϣ����ͨ��ð�������㷨����������

//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//
////����������
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
//		cout << "������" << heroarray[i].name
//			 << "����: " << heroarray[i].age
//			 << "�Ա�" << heroarray[i].sex << endl;
//	}
//}
//
//int main()
//{
//	struct hero heroarray[5] = {
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"}
//	};
//	int len = sizeof(heroarray) / sizeof(heroarray[0]);
//	cout << "����ǰ��ӡ��" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "������" << heroarray[i].name 
//			 << "����: " << heroarray[i].age 
//			 << "�Ա�" << heroarray[i].sex << endl;
//	}
//	bubble_sort(heroarray, len);
//	cout << "������ӡ��" << endl;
//	printhero(heroarray, len);
//	return 0;
//}