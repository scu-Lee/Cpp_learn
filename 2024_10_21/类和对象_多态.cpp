#include <iostream>
using namespace std;


//��̬��������Ͷ�̬��ԭ������

//������
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
////è��
//class Cat:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
////����
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
////ִ��˵���ĺ���
////��ַ��� �ڱ���׶�ȷ��������ַ
////�����ִ��è˵�����ú�����ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣�����ַ���
//
////��̬��̬��������
////1.�м̳й�ϵ
////2.������д������麯��(��д����������ֵ���� ������ �����б� ��ȫһ��Ϊ��д)
//
////��̬��̬ʹ��
////�����ָ�������ָ������Ķ���
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


//��̬����һ����������

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
//		//�������չ�¹��ܣ���Ҫ�޸�Դ��
//		//����ʵ������ �ᳫ ����ԭ��
//		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
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
////���ö�̬ʵ�ּ�����
////��̬�ô���
////1.��֯�ṹ����
////2.�ɶ���ǿ
////3.����ǰ�ںͺ�����չ�Լ�ά���Ը�
//
////ʵ�ּ�����������
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
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷���������
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
//	//��̬ʹ������
//	//����ָ���������ָ���Ӷ���
//	
//	//�ӷ�����
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	//���������
//	delete abc;
//
//	//��������
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//�˷�����
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


//���麯���ͳ�����

//class Base
//{
//public:
//	//���麯��
//	//ֻҪ��һ�����麯���������ͳ�Ϊ������
//	//�������ص㣺
//	//1.�޷�ʵ��������
//	//2.��������������Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//
//};
//
//class Son :public Base
//{
//public:
//	virtual void func() 
//	{
//		cout << "func()��������" << endl;
//	};
//};
//
//void test01()
//{
//	//Base b;//������ʱ�޷�ʵ���������
//	//new Base;//������ʱ�޷�ʵ���������
//
//	//Son s;//���������д�����еĴ��麯���������޷�ʵ��������
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


//��̬��������������Ʒ

//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//���븨��
//	virtual void PutSomthing() = 0;
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomthing();
//	}
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void PutSomthing()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////������Ҷ
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void PutSomthing()
//	{
//		cout << "�������" << endl;
//	}
//};
//
////��������
//void doWork(AbstractDrinking* abs)//AbstractDrinking* abs = new Coffee
//{
//	abs->makeDrink();
//	delete abs;//�ͷ�
//}
//
//void test01()
//{
//	//��������
//	doWork(new Coffee);
//
//	cout << "-----------------" << endl;
//	//������Ҷ
//	doWork(new Tea);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�������ʹ�������

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//	//�������������Խ������ָ���ͷ��������ʱ���ɾ������� 
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal��������������" << endl;
//	//}
//	//��������  ��Ҫ������Ҳ��Ҫʵ��
//	//���˴��������������Ҳ���ڳ����࣬�޷�ʵ��������
//	virtual ~Animal() = 0;
//	//���麯��
//	virtual void speak() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal����������������" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_Name = new string(name);
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat������������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	void speak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//����ָ��������ʱ�򲻻��������������������������������ж������ԣ������ڴ�й©
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��̬��������������װ

//����ͬ�����
//����CPU��
//class CPU
//{
//public:
//	//����ļ��㺯��
//	virtual void calculate() = 0;
//};
//
////�����Կ���
//class VideoCard
//{
//public:
//	//�������ʾ����
//	virtual void display() = 0;
//};
//
////�����ڴ�����
//class Memory
//{
//public:
//	//����Ĵ洢����
//	virtual void storage() = 0;
//};
//
////������
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
//	//�ṩ�����ĺ���
//	void work()
//	{
//		//������������������ýӿ�
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//	//�ṩ���������ͷ�3���������
//	~Computer()
//	{
//		//�ͷ�CPU���
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		//�ͷ��Կ����
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		//�ͷ��ڴ������
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//
//private:
//	CPU* m_cpu;//CPU���ָ��
//	VideoCard* m_vc;//�Կ����ָ��
//	Memory* m_mem;//�ڴ������ָ��
//};
//
////���峧��
////Intel����
//class IntelCPU:public CPU
//{
//public:
//	void calculate()
//	{
//		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	void display()
//	{
//		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	void storage()
//	{
//		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//
////Lenovo����
//class LenovoCPU :public CPU
//{
//public:
//	void calculate()
//	{
//		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//public:
//	void display()
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	void storage()
//	{
//		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//
//void test01()
//{
//	//��һ̨���Ե����
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//
//	cout << "��һ̨���Կ�ʼ������" << endl;
//	//������һ̨����
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "---------------------------" << endl;
//	cout << "�ڶ�̨���Կ�ʼ������" << endl;
//	//�ڶ�̨������װ
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->work();
//	delete computer2;
//
//	cout << "---------------------------" << endl;
//	cout << "����̨���Կ�ʼ������" << endl;
//	//����̨������װ
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