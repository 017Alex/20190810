#include<iostream>
#pragma warning(disable:4996)
using namespace std;

class Test
{
public:
	//���캯��
	//Test t;
	Test(int data = 0)
	{
		cout << "Create Test Object:" << this << endl;
		m_data = data;
	}
	////�������캯��
	////�﷨Ҫ�� ����Ҫ��
	Test(Test& t)
	{
		cout << "Copy Create Test Object:" << this << endl;
		m_data = t.m_data;
	}
	//��ֵ���
	
	Test& operator=(const Test &t)
	{
		cout<<"Assign,"<<this<< "="<<&t<<endl;
		if(this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	}
	
	//Test& operator=(const Test t)
	//{
	//	cout << "Assign," << this << "=" << &t << endl;
	//	if (this != &t)
	//	{
	//		m_data = t.m_data;
	//	}
	//}
	//�������� 
	//~t
	//~Test()
	//{
	//	cout << "Free Test Object:" << this << endl;
	//}
public:
	int GetData()const  //������
	{
		return m_data;
	}
	/*
	int GetData()
	{
		return m_data
	}
	*/
private:
	int m_data;
};

void main()
{
	Test t1;
	Test t2;
	Test t3;
	t2 = t1 = t3;
}








/*
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
		//����ں����в���ı��������Ͳ�����ֵ���Ӳ���const��Ч����һ���ġ�
		//���Ҳ���const��������Ҳ���ᱨ������Ϊ����������İ�ȫ�����Ǽ���const����ֹ���������Ͳ���ֵ�������޸ġ�
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	Date d2(d1);
	return 0;
}
*/











//class Date
//{
//public:
//	void Display()
//	{
//		cout << "Display ()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//	void Display() const
//	{
//		cout << "Display () const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//private:
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
//};
//
//void main()
//{
//	Date d1;
//	d1.Display();
//	const Date d2;
//	d2.Display();
//}
//	1. const������Ե��÷�const��Ա������
//	2. ��const������Ե���const��Ա������
//             const�Ǻ������͵�һ����ɲ��֣�����ں���ʵ�ֲ���ҲҪ����const�ؼ��֡� 


//	3. const��Ա�����ڿ��Ե��������ķ�const��Ա������
//	4. ��const��Ա�����ڿ��Ե���������const��Ա������
//      ����Ա���������¶�������ݳ�Ա��Ҳ���ܵ��ø�����û����const���εĳ�Ա������ 


//ȡ��ַ��constȡ��ַ����������?
//��������ó���Ա������һ��������һ���Ա������








//class Date
//{
//public:
//	Date* operator&()
//	{
//		return this;
//	}
//	const Date* operator&()const
//	{
//		return this;
//	}
//private:
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
//};
//
//void main()
//{
//	Date test1;
//	test1.operator&();
//}






//class CGoods
//{
//public:
//	void RegisterGoods(char* name, int count, float price)
//	{
//		strcpy(this->name, name);
//		this->count = count;
//		this->price = price;
//	}
//	void SetName(char* name)
//	{
//		strcpy(this->name, name);
//	}
//	void SetCount(int count)
//	{
//		this->count = count;
//	}
//	void SetPrice(float price)
//	{
//		this->price = price;
//	}
//public:
//	char* GetName()
//	{
//		return name;
//	}
//	int GetCount()
//	{
//		return count;
//	}
//	float GetPrice()
//	{
//		return price;
//	}
//	float GetTotalPrice()
//	{
//		return price * count;
//	}
//private:
//	char name[10];
//	int count;
//	float price;
//	float total_price;
//};
//
//void main()
//{
//	CGoods c1;
//	c1.RegisterGoods("C++", 10, 35);
//	cout << c1.GetName() << endl;
//}





//class Student
//{
//public:
//	void ResgisterStu(char* n, char* s, int a, int h, int w)
//	{
//		strcpy(name, n);
//		strcpy(sex, s);
//		age = a;
//		height = h;
//		weight = w;
//	}
//private:
//	char name[10];
//	char sex[3];
//	int age;
//	int height;
//	int weight;
//};
//
//void main()
//{
//	Student s;
//	s.ResgisterStu("����","��", 20, 170, 50);
//}






//void main()
//{
//	int ar[] = { 1,2,3,4,5,6,7,8 };
//	for (auto ele : ar)
//		cout << ele << " ";
//	cout << endl;
//}
//




//namespace myspace
//{
//	void fun()
//	{
//		cout << "fun1" << endl;
//	}
//}
//
//namespace youspace
//{
//	void fun()
//	{
//		cout << "fun" << endl;
//	}
//}
//
//void main()
//{
//	//cout << "Hello World!" << endl;
//	//int a = 10;
//	//char c = 'ABC';
//	//float b = 3.1415926;
//	//cout << a << endl;
//	//cout << b << endl;
//	//cout << c << endl;
//	//��������ʷ�
//	youspace::fun();
//}