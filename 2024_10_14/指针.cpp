#include <iostream>
using namespace std;

//指针定义和使用

//int main()
//{
//	//1.定义指针
//	int a = 10;
//	//指针语法：数据类型* 指针变量名
//	int* p;
//	p = &a;
//	cout << "a的地址为：" << &a << endl;
//	cout << "指针p为: " << p << endl;
//
//	//2.使用指针
//	//*指针 为解引用
//	*p = 1000;
//	cout << "a = " << a << endl;
//	cout << "*p = " << *p << endl;
//	return 0;
//}


//指针所占内存空间

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//指针在32位操作系统为4字节 ，64位为8字节
//	cout << "sizeof (int*) = " << sizeof(int*) << endl;
//	cout << "sizeof (float*) = " << sizeof(float*) << endl;
//	cout << "sizeof (double*) = " << sizeof(double*) << endl;
//	cout << "sizeof (char*) = " << sizeof(char*) << endl;
//	return 0;
//}


//空指针

//int main()
//{
//	//1.空指针用于初始化指针变量
//	int* p = NULL;
//
//	//2.空指针不可以访问
//	//内存编号为0~255为系统占用内存，不允许用户访问
//	*p = 100;//error
//	return 0;
//}


//野指针

//int main()
//{
//	int* p = (int*)0x1122;
//	cout << *p << endl;
//	return 0;
//}


//const修饰指针

//int main()
//{
//	//1.const修饰指针  常量指针
//	int a = 10;
//	int b = 20;
//	const int* p = &a;
//	//指针指向的值不可以修改，指针的指向可以改
//	//*p = 20;error
//	p = &b;//正确
//
//	//2.const修饰常量  指针常量
//	//指针的指向不可以改，指针指向的值可以改
//	int* const p2 = &a;
//	*p2 = 100;//正确
//	//p2 = &b;//error
//
//	//3.const修饰指针和常量
//	//指针的指向和指针的值都不可以改
//	const int* const p3 = &a;
//	//*p3 = 100;//error
//	//p3 = &b;//error
//	return 0;
//}


//指针和数组

//int main()
//{
//	//利用指针访问数组元素
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "第一个元素为：" << arr[0] << endl;
//	int* p = arr;
//	cout << "指针访问第一个元素：" << *p << endl;
//	p++;//让指针向后偏移4个字节
//	cout << "指针访问第二个元素：" << *p << endl;
//	cout << "利用指针遍历数组" << endl;
//	int* p2 = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		//cout << arr[i] << endl;
//		cout << *p2 << endl;
//		p2++;
//	}
//	return 0;
//}


//指针和函数

//实现两个数字交换
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
//	//1.值传递
//	int a = 10;
//	int b = 20;
//	swap01(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	//2.址传递
//	swap02(&a, &b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}


//指针、数组、函数

void bubble_sort(int* arr, int len)//int* arr也可以写为int arr[]
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