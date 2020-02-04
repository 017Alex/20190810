#include<iostream>
using namespace std;

class Date
{
	//friend ostream& operator<<(ostream& out, const Date& t);
	friend int  GetMonthDay(int year, int month);
public:
	Date(int year = 1900, int month = 1, int day = 1);
	Date(const Date& d);
	Date& operator=(const Date& d);
	Date operator+(int days);
	Date operator-(int days);
	int operator-(const Date& d);
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	bool operator>(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator==(const Date& d)const;
	bool operator!=(const Date& d)const;
private:
	int _year;
	int _month;
	int _day;
};

Date::Date(int year, int month, int day)
{
	if (year < 1900)
	{
		cout << "year error!!" << endl;
		return;
	}
	if (month < 1 && month > 12)
	{
		cout << "month error!!" << endl;
		return;
	}
	if (day<1 || day>GetMonthDay(year, month))
	{
		cout << "day error" << endl;
		return;
	}
	_year = year;
	_month = month;
	_day = day;
}

int GeyMonthDay(int year, int month)
{
	int MonthDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ((year % 400 == 0 || year % 4 == 0 && year % 100 != 0) && month == 2)
	{
		return MonthDay[month - 1] + 1;
	}
	else
		return  MonthDay[month - 1];
}

Date (const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

Date& operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}

Date operator+(int days)
{
	Date tmp(*this);
	if (days < 0)
	{
		return tmp - (-day);//��һ��������ڼ�һ������
	}
	tmp._day += day;
	while (tmp._day > GetMonthDay(tmp._year, tmp._month))//ע��Ӧ��tmp�����tmp._day�Ƚ�
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		if (tmp._month == 12)
		{
			++tmp._year;
			tmp._month = 1;
		}
		else
		{
			++tmp._month;
		}
	}
	return tmp;
}

void main()
{
	Date d;
}






/*
#pragma once
#include<iostream>
using namespace std;
class Date
{
private:
 int _year;
 int _month;
 int _day;
public:
 //Ĭ�ϳ�Ա����
 Date(int year = 1900, int month = 1, int day = 1);//ȱʡ���캯��
 Date(const Date& c);//�������캯��
 Date& operator=(const Date& c);//��ֵ����������
 ~Date();//��������
 void display();
 friend int  GetMonthDay(int year, int month);//��õ�������
 friend ostream& operator<<(ostream& out,Date& d);//����<<
 friend istream& operator>>(istream& in,Date& d);//����>>
 Date operator+(int day);//���ڶ������һ������
 Date operator-(int day);//���ڶ������һ������
 int  operator-(Date  d);//�������ڶ������������
 Date& operator++();//����ǰ��++
 Date operator++(int);//���ں���++
 Date AddOne(const Date& d);//���ڼ�һ��
 Date& operator+=(int day);//���ڶ���ӵ�
 Date& operator-=(int day);//���ڶ������

 bool operator<(const Date& d);//�Ƚ�*this�����Ƿ��d���ڶ���С
 bool operator>(const Date& d);//�Ƚ�*this�����Ƿ��d���ڶ����
 bool operator==(const Date& d);//�Ƚ�*this������d���ڶ����Ƿ����
 bool operator<=(const Date& d);//�Ƚ�*this�����Ƿ��d���ڶ���С�ڵ���
 bool operator>=(const Date& d);//�Ƚ�*this�����Ƿ��d���ڶ�����ڵ���
};
#include"Date.h"
Date::Date(int year, int month, int day)
{
 if (year<1900)
 {
  cout << "year error" << endl;
  return;
 }
 if (month <1 && month > 12)
 {
  cout << "month error" << endl;
  return;
 }
 if (day<1 || day>GetMonthDay(year, month))
 {
  cout << "day error" << endl;
  return;
 }
 //��ȷ��������Ч
 _year = year;
 _month = month;
 _day = day;
 //cout << "���캯��" << endl;
}
Date::Date(const Date& c)
{
 _year = c._year;
 _month = c._month;
 _day = c._day;
 //cout << "��������" << endl;
}
Date& Date::operator=(const Date& c)//&������
{
 if (this != &c)//&��ȡ��ַ
 {
  _year = c._year;
  _month = c._month;
  _day = c._day;
 }
 //cout << "��ֵ" << endl;
 return *this;
}
Date:: ~Date()
{
 //cout << "��������" << endl;
}
void Date::display()
{
 cout << _year << "-" << _month << "-" << _day << endl;
}
ostream& operator<<(ostream& out,Date& d)
{
 d.display();
 return out;
}
istream& operator>>(istream& in, Date& d)
{
 cin >> d._year >> d._month >> d._day;
 return in;
}
int  GetMonthDay(int year, int month)
{
 int monthDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
 if ((year % 400 == 0 || year % 4 == 0 && year % 100 != 0) && month == 2)//��������2��
 {
  return monthDay[month - 1] + 1;
 }
 else
  return  monthDay[month - 1];
}
Date Date::operator+(int day)//������::
{
 Date tmp(*this);
 if (day < 0)
 {
  return tmp - (-day);//��һ��������ڼ�һ������
 }
 tmp._day += day;
 while (tmp._day>GetMonthDay(tmp._year, tmp._month))//ע��Ӧ��tmp�����tmp._day�Ƚ�
 {
  tmp._day -= GetMonthDay(tmp._year, tmp._month);
  if (tmp._month == 12)
  {
   ++tmp._year;
   tmp._month = 1;
  }
  else
  {
   ++tmp._month;
  }
 }
 return tmp;
}
Date Date:: operator-(int day)
{
 Date tmp(*this);
 if (day < 0)
 {
  return tmp + (-day);//��һ��������ڼ�һ������
 }
 tmp._day -= day;
 while (tmp._day<1)//ע��߽�������һ������С����Ϊ1
 {
  if (tmp._month == 1)
  {
   --tmp._year;
   tmp._month = 12;
  }
  else
  {
   --tmp._month;
  }
  tmp._day += GetMonthDay(tmp._year, tmp._month);
 }
 return tmp;
}
int Date:: operator-(Date  d)
{
 int count = 0;
 int flag = -1;
 Date *pMax = &d;
 Date *pMin = this;
 Date tmp (*this);
 if (*this > d)
 {
  flag = 1;
  swap(pMax, pMin);
 }
 while (*pMin < *pMax)
 {
  ++(*pMin);
  ++count;
 }
 if (flag == -1)
  *this = tmp;//��Ϊ���޸�this����Ļ�ȥ
 return flag*count;
}
Date& Date::operator++()
{
 *this = *this + 1;
 return *this;
}
Date Date:: operator++(int)
{
 Date tmp(*this);
 *this = *this + 1;
 return tmp;
}
Date AddOne(const Date& d)
{
 Date tmp(d);
 tmp = tmp + 1;
 return tmp;
}
Date& Date::operator+=(int day)
{
 *this = *this + day;
 return *this;
}
Date& Date::operator-=(int day)
{
 *this = *this - day;
 return *this;
}

bool Date::operator<(const Date& d)
{
 if (_year<d._year)
 {
  return true;
 }
 else if (_year == d._year)
 {
  if (_month<d._month)
  {
   return true;
  }
  else if (_month == d._month)
  {
   if (_day<d._day)
   {
    return true;
   }
  }
 }
 return false;
}
bool Date:: operator>(const Date& d)
{
 return !(*this < d);
}
bool Date::operator==(const Date& d)
{
 return _year == d._year&&_month == d._month&&_day == d._day;
}
bool Date::operator<=(const Date& d)
{
 return (*this < d) || (*this == d);
}
bool Date::operator>=(const Date& d)
{
 return !(*this < d);
}
#include"Date.h"
void Test1()
{
 /*Date d1(2005, 1, 1);
 Date ret = d1 + 90;
 ret.display();*/
 /*Date d1(2005, 1, 1);
 Date ret = d1 -1;
 ret.display();*/
 /*Date d1(2015, 11, 26);
 Date d2(2015, 11, 25);
 int ret = d1 - d2;
 cout << ret << endl;*/
 
 /*Date d1(2015, 4, 5);
 Date d2;
 cout<<(d1 > d2)<<endl;*/
 /*cout<<(d1++);
 cout << d1;*/
 /*cout << "������ѡ��1.��ݼ�����2.����������.3.�˳�" << endl;
 int input = 1;
 while (1)
 {
  cout << "�����룺" << endl;
  cin >> input;
  switch (input)
  {
  case 1:
  {
      Date d;
   int day = 0;
   cout << "���������ڣ�" << endl;
   cin >> (cin, d);
   cout << "���������ڲ�" << endl;
   cin >> day;
   cout << (cout, (d + day));//����cout<<(d+day);
   break;
  }
  case 2:
  {
   Date d1, d2;
   cout << "�������һ�����ڣ�" << endl;
   cin >> (cin, d1);
   cout << "������ڶ������ڣ�" << endl;
   cin >> (cin, d2);
   cout << (d1 - d2);
   break;
  }
  case 0:
   return;
  default:
   cout << "error" << endl;
   return;
  }
  cout << "�����ѡ��" << endl;
 }
}
int main()
{
	Test1();
	system("pause");
	return 0;
}
*/

bool Date::operator<=(const Date& d) const
{
	return false;
}
