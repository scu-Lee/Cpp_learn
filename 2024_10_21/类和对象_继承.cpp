#include <iostream>
using namespace std;


//�̳еĻ����﷨

//��ͨʵ��

//javaҳ��
//class java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "java��python��C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "javaѧ����Ƶ" << endl;
//	}
//};
//
////pythonҳ��
//class python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "java��python��C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "java��python��C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	//javaҳ��
//	cout << "java������Ƶҳ�����£�" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "---------------------------" << endl;
//
//	//pythonҳ��
//	cout << "python������Ƶҳ�����£�" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "---------------------------" << endl;
//
//	//C++ҳ��
//	cout << "C++������Ƶҳ�����£�" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//�̳�ʵ��

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "java��python��C++...(���������б�)" << endl;
//	}
//};
//
////�̳еĺô������ٴ����ظ���
////�﷨��class ���� ���̳з�ʽ ����
////���� Ҳ��Ϊ ������
////���� Ҳ��Ϊ ����
//
////javaҳ��
//class java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "javaѧ����Ƶ" << endl;
//	}
//};
//
////pythonҳ��
//class python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	//javaҳ��
//	cout << "java������Ƶҳ�����£�" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "---------------------------" << endl;
//
//	//pythonҳ��
//	cout << "python������Ƶҳ�����£�" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "---------------------------" << endl;
//
//	//C++ҳ��
//	cout << "C++������Ƶҳ�����£�" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�̳з�ʽ

//�����̳�
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����й���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
//		m_B = 10;//�����й���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
//		//m_C = 10;//�����е�˽�г�Ա   ������ʲ���
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//Son1�У�m_B�Ǳ���Ȩ�ޣ�������ʲ���
//}
//
////�����̳�
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100;//�����й���Ȩ�޳�Ա �������б�Ϊ����Ȩ��
//		m_B = 100;//�����б���Ȩ�޳�Ա �������б�Ϊ����Ȩ��
//		//m_C = 100;//�����е�˽�г�Ա   ������ʲ���
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 1000;//��Son2�У�m_A��Ϊ����Ȩ�ޣ�������ʲ���
//	//s2.m_B = 1000;//��Son2�У�m_BΪ����Ȩ�ޣ������Է���
//}
//
////˽�м̳�
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100;//�����й���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ��
//		m_B = 100;//�����б���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ��
//		//m_C = 100;//�����е�˽�г�Ա   ������ʲ���
//	}
//};
//
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000;//����Son3�У�m_A��Ϊ˽�У������ܷ���
//		//m_B = 1000;//����Son3�У�m_B��Ϊ˽�У������ܷ���
//    }
//};
//
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 1000;//��Son3�У�m_A��Ϊ˽��Ȩ�ޣ�������ʲ���
//	//s3.m_B = 1000;//��Son3�У�m_A��Ϊ˽��Ȩ�ޣ�������ʲ���
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	return 0;
//}


//�̳��еĶ���ģ��

//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
////���ÿ�����Ա������ʾ�����߲鿴����ģ��
////��ת�̷� D:
////��ת�ļ�·�� cd ����·����
////�鿴����
////cl /d1 reportSingleClassLayout���� �ļ���
//
//void test01()
//{
//	Son s1;
//	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	//������˽�г�Ա�����Ǳ������������ˣ���˷��ʲ���������Ȼ�Ǽ̳���
//	cout << "size of Son = " << sizeof(Son) << endl;//16
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�̳��й��������˳��

//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base�Ĺ��캯��!" << endl;
//	}
//	~Base()
//	{
//		cout << "Base����������!" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son�Ĺ��캯��!" << endl;
//	}
//	~Son()
//	{
//		cout << "Son����������!" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;
//
//	//�̳��еĹ��������˳�����£�
//	//�ȹ��츸�࣬�ٹ������࣬������˳���빹��˳���෴
//	Son s;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�̳�ͬ����Ա����ʽ

//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base - func()����" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)����" << endl;
//	}
//
//	int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son - func()����" << endl;
//	}
//
//	int m_A;
//};
//
////ͬ����Ա���Դ���ʽ
//void test01()
//{
//	Son s;
//	cout << "Son  �� m_A = " << s.m_A << endl;
//	//���ͨ�����������ʵ������е�ͬ����Ա����Ҫ��������
//	cout << "Base �� m_A = " << s.Base::m_A << endl;
//}
//
////ͬ����Ա��������
//void test02()
//{
//	Son s;
//	s.func();//ֱ�ӵ��ã����õ��������е�ͬ����Ա
//
//	//��ε��ø�����ͬ����Ա������
//	s.Base::func();
//
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص����������е�ͬ����Ա����
//	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
//	s.Base::func(100);
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//�̳�ͬ����̬��Ա����ʽ

//class Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//};
//
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//};
//
//int Son::m_A = 200;
//
////ͬ����̬��Ա����
//void test01()
//{
//	//1.ͨ���������
//	cout << "ͨ��������ʣ�" << endl;
//	Son s;
//	cout << "Son �� m_A = " << s.m_A << endl;
//	cout << "Base�� m_A = " << s.Base::m_A << endl;
//
//	//2.ͨ����������
//	cout << "ͨ���������ʣ�" << endl;
//	cout << "Son �� m_A = " << Son::m_A << endl;
//	//��һ��::��ʾͨ���������� �ڶ���::��ʾ�����������·���
//	cout << "Base�� m_A = " << Son::Base::m_A << endl;
//}
//
////ͬ����̬��Ա����
//void test02()
//{
//	//1.ͨ���������
//	cout << "ͨ��������ʣ�" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	//2.ͨ����������
//	cout << "ͨ���������ʣ�" << endl;
//	Son::func();
//	Son::Base::func();
//
//	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����
//	//�������ʸ����б�����ͬ����Ա����Ҫ��������
//	Son::Base::func(100);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//��̳��﷨

//class Base1
//{
//public:
//
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//};
//
//class Base2
//{
//public:
//
//	Base2()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//};
//
////���� ��Ҫ�̳�Base1��Base2
////�﷨��class ���� ���̳з�ʽ ����1���̳з�ʽ ����2 ...
//class Son :public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s;
//	cout << "sizeof Son = " << sizeof(s) << endl;
//
//	//�������г���ͬ����Աʱ���������������
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//���μ̳�

//������
//class Animal
//{
//public:
//	int m_Age;
//};
//
////������̳н�����μ̳�����
////�̳�֮ǰ���Ϲؼ��� virtual ��Ϊ ��̳�
////Animal���Ϊ �����
//
////����
//class Sheep :virtual public Animal {};
//
////����
//class Tuo :virtual public Animal {};
//
////������
//class SheepTuo :public Sheep, public Tuo {};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//	//�����μ̳У���������ӵ����ͬ�����ݣ���Ҫ��������������
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//
//	//���������һ�ݾ��У����μ̳е������������ݣ���Դ�˷�
//}
//
//int main()
//{
//	test01();
//	return 0;
//}