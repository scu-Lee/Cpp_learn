#include <iostream>
using namespace std;


//一维数组

//int main()
//{
//	//定义方式1
//	//数据类型 数组名[元素个数];
//	int score[10];
//
//	//利用下标赋值
//	score[0] = 100;
//	score[1] = 99;
//	score[2] = 85;
//
//	//利用下标输出
//	cout << score[0] << endl;
//	cout << score[1] << endl;
//	cout << score[2] << endl;
//
//	//定义方式2
//	//数据类型 数组名[元素个数] = {值1，值2，值3 ...};
//	//如果元素不足，用0补全
//	int score2[10] = { 10,20,30 };
//
//	//循环输出
//	for (int i = 0; i < 10; i++)
//	{
//		cout << score2[i] << endl;
//	}
//
//	//定义方式3
//	//数据类型 数组名[] = {值1，值2，值3 ...};
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
//	//数组名用途
//	//1.可以获取整个数组占用内存空间的大小
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	cout << "整个数组所占内存空间为：" << sizeof(arr) << endl;
//	cout << "每个元素所占内存空间为：" << sizeof(arr[0]) << endl;
//	cout << "数组元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	//2.可以通过数组名获取到数组首地址
//	cout << "数组首地址为：" << (int)arr << endl;
//	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
//	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;
//
//	//arr = 100; 错误，数组名是常量，不可以赋值
//	return 0;
//}


//5只小猪称体重

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
//	cout << "最重的小猪体重为：" << max << endl;
//	return 0;
//}


//数组元素逆置

//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	cout << "逆置前元素顺序为：" << endl;
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
//	cout << "逆置后元素顺序为：" << endl;
//	for (int j = 0; j < 5; j++)
//	{
//		cout << arr[j] << " ";
//	}
//	return 0;
//}


//冒泡排序

//int main()
//{
//	//升序排列
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


//二维数组

//int main()
//{
//	//方式1
//	//数组类型 数组名[行数][列数];
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
//	//方式2
//	//数据类型 数组名[行数][列数] = {{数据1，数据2},{数据3，数据4}};
//	int arr2[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//
//	//方式3
//	//数据类型 数组名[][列数] = {数据1，数据2,数据3，数据4};
//	int arr3[2][3] = { 1,2,3,4,5,6 };
//
//	//方式4
//	//数据类型 数组名[][列数] = {数据1，数据2,数据3，数据4};
//	int arr4[][3] = { 1,2,3,4,5,6 };
//	return 0;
//}


//int main()
//{
//	//1.可以查看占用内存空间的大小
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
//	cout << "二维数组第一行占用内存为：" << sizeof(arr[0]) << endl;
//	cout << "二维数组第一个元素占用内存为：" << sizeof(arr[0][0]) << endl;
//
//	cout << "二维数组行数为：" << sizeof(arr)/sizeof(arr[0]) << endl;
//	cout << "二维数组列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//	//2.可以查看二维数组的首地址
//	cout << "二维数组首地址为：" << (int)arr << endl;
//	cout << "二维数组第一行首地址为：" << (int)arr[0] << endl;
//	cout << "二维数组第二行首地址为：" << (int)arr[1] << endl;
//
//	cout << "二维数组第一个元素首地址为：" << (int)&arr[0][0] << endl;
//	cout << "二维数组第二个元素首地址为：" << (int)&arr[0][1] << endl;
//	return 0;
//}


//成绩统计

//#include <string>
//int main()
//{
//	int scores[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
//	string names[3] = { "张三","李四","王五" };
//	for (int i = 0; i < 3; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			sum += scores[i][j];
//			//cout << scores[i][j] << " ";
//		}
//		cout << names[i] << "的总分为：" << sum << endl;
//	}
//	return 0;
//}