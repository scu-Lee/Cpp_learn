#include <iostream>
using namespace std;
#include <algorithm>
#include <numeric>
#include <vector>


//accumulate

//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i <= 100; i++) 
//	{
//		v.push_back(i);
//	}
//
//	//参数3 起始累加值
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total = " << total << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


//fill

//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//
//	vector<int> v;
//	v.resize(10);
//	//填充
//	fill(v.begin(), v.end(), 100);
//
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}