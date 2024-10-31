#include <iostream>
using namespace std;


//多态基本慨念和多态的原理剖析

//动物类
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
////猫类
//class Cat:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////狗类
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
////执行说话的函数
////地址早绑定 在编译阶段确定函数地址
////如果想执行猫说话，该函数地址就不能提前绑定，需要在运行阶段进行绑定，即地址晚绑定
//
////动态多态满足条件
////1.有继承关系
////2.子类重写父类的虚函数(重写：函数返回值类型 函数名 参数列表 完全一致为重写)
//
////动态多态使用
////父类的指针或引用指向子类的对象
//
//void doSpeak(Animal& animal)//Animal& animal = cat;
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "sizeof Animal = " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//} 


//多态案例一：计算器类

//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		//如果想扩展新功能，需要修改源码
//		//在真实开发中 提倡 开闭原则
//		//开闭原则：对扩展进行开放，对修改进行关闭
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//void test01()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}
//
////利用多态实现计算器
////多态好处：
////1.组织结构清晰
////2.可读性强
////3.对于前期和后期扩展以及维护性高
//
////实现计算器抽象类
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////加法计算器类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////减法计算器类
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////乘法计算器类
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02()
//{
//	//多态使用条件
//	//父类指针或者引用指向子对象
//	
//	//加法运算
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	//用完得销毁
//	delete abc;
//
//	//减法运算
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//乘法运算
//	abc = new MulCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//纯虚函数和抽象类

//class Base
//{
//public:
//	//纯虚函数
//	//只要有一个纯虚函数，这个类就称为抽象类
//	//抽象类特点：
//	//1.无法实例化对象
//	//2.抽象类的子类必须要重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//
//};
//
//class Son :public Base
//{
//public:
//	virtual void func() 
//	{
//		cout << "func()函数调用" << endl;
//	};
//};
//
//void test01()
//{
//	//Base b;//抽象类时无法实例化对象的
//	//new Base;//抽象类时无法实例化对象的
//
//	//Son s;//子类必须重写父类中的纯虚函数，否则无法实例化对象
//
//	Base* base = new Son;
//	base->func();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//多态案例二：制作饮品

//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomthing() = 0;
//	//制作饮品
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomthing();
//	}
//};
//
////制作咖啡
//class Coffee :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮开水" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//加入辅料
//	virtual void PutSomthing()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
////制作茶叶
//class Tea :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//加入辅料
//	virtual void PutSomthing()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
//
////制作函数
//void doWork(AbstractDrinking* abs)//AbstractDrinking* abs = new Coffee
//{
//	abs->makeDrink();
//	delete abs;//释放
//}
//
//void test01()
//{
//	//制作咖啡
//	doWork(new Coffee);
//
//	cout << "-----------------" << endl;
//	//制作茶叶
//	doWork(new Tea);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//虚析构和纯虚析构

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//	//利用虚析构可以解决父类指针释放子类对象时不干净的问题 
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数调用" << endl;
//	//}
//	//纯虚析构  需要声明，也需要实现
//	//有了纯虚析构，这个类也属于抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//	//纯虚函数
//	virtual void speak() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	void speak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//父类指针在析构时候不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//多态案例三：电脑组装

//抽象不同零件类
//抽象CPU类
//class CPU
//{
//public:
//	//抽象的计算函数
//	virtual void calculate() = 0;
//};
//
////抽象显卡类
//class VideoCard
//{
//public:
//	//抽象的显示函数
//	virtual void display() = 0;
//};
//
////抽象内存条类
//class Memory
//{
//public:
//	//抽象的存储函数
//	virtual void storage() = 0;
//};
//
////电脑类
//class Computer
//{
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//
//	//提供工作的函数
//	void work()
//	{
//		//让零件工作起来，调用接口
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//	//提供析构函数释放3个电脑零件
//	~Computer()
//	{
//		//释放CPU零件
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		//释放显卡零件
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		//释放内存条零件
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//
//private:
//	CPU* m_cpu;//CPU零件指针
//	VideoCard* m_vc;//显卡零件指针
//	Memory* m_mem;//内存条零件指针
//};
//
////具体厂商
////Intel厂商
//class IntelCPU:public CPU
//{
//public:
//	void calculate()
//	{
//		cout << "Intel的CPU开始计算了！" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	void display()
//	{
//		cout << "Intel的显卡开始显示了！" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	void storage()
//	{
//		cout << "Intel的内存条开始存储了！" << endl;
//	}
//};
//
////Lenovo厂商
//class LenovoCPU :public CPU
//{
//public:
//	void calculate()
//	{
//		cout << "Lenovo的CPU开始计算了！" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//public:
//	void display()
//	{
//		cout << "Lenovo的显卡开始显示了！" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	void storage()
//	{
//		cout << "Lenovo的内存条开始存储了！" << endl;
//	}
//};
//
//void test01()
//{
//	//第一台电脑的零件
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//
//	cout << "第一台电脑开始工作：" << endl;
//	//创建第一台电脑
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "---------------------------" << endl;
//	cout << "第二台电脑开始工作：" << endl;
//	//第二台电脑组装
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->work();
//	delete computer2;
//
//	cout << "---------------------------" << endl;
//	cout << "第三台电脑开始工作：" << endl;
//	//第三台电脑组装
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
//	computer3->work();
//	delete computer3;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}