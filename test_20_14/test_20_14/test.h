#pragma once

#include<iostream>
#include<assert.h>
using namespace std;

class Stack
{
public:
	Stack(int n = 4)
	{
		_a = (int*)malloc(sizeof(int) * n);
		if (_a == nullptr)
		{
			perror("malloc error");
			exit(-1);
		}
		_size = 0;
		_capacity = 4;
		cout << "Stack" << endl;
	}

	~Stack()
	{
		free(_a);
		_a = nullptr;
		_size = _capacity = 0;
		cout << "~Stack" << endl;
	}

	void Push(int x)
	{
		if (_size == _capacity)
		{
			int* newp = (int*)realloc(_a, sizeof(int) * _capacity * 2);
			if (newp == nullptr)
			{
				perror("malloc error");
				exit(-1);
			}
			_a = newp;
			_capacity *= 2;
		}
		_a[_size++] = x;
	}

	int Pop()
	{
		assert(!Empty());

		return _a[--_size];
	}

	bool Empty()
	{
		return _size == 0;
	}

	void Print()
	{
		for (int i = 0; i < _size; i++)
		{
			cout << _a[i] << " ";
		}
		cout << endl;
	}

private:
	int* _a;
	int _size;
	int _capacity;
};

class Queue
{
public:

	void Push(int x)
	{
		A.Push(x);
	}

	int Pop()
	{
		assert(!Empty());

		if (B.Empty())
		{
			while (!A.Empty())
			{
				B.Push(A.Pop());
			}
		}
		return B.Pop();
	}

	void Print()
	{
		while (!Empty())
		{
			cout << Pop() << " ";
		}
		cout << endl;
	}

	bool Empty()
	{
		return A.Empty() && B.Empty();
	}

private:
	Stack A;
	Stack B;
};


class Date
{
public:
	/*Date()
	{
		_day = 0;
		_month = 0;
		_year = 0;
	}*/
	
	Date(int year = 2023, int month = 10, int day = 14)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date(const Date& x)
	{
		_year = x._year;
		_month = x._month;
		_day = x._day;
	}

	int MonthDay(int year, int month)
	{
		assert(0 < month < 13);

		int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (year % 4 == 0 && year % 400 == 0 && year % 100 != 0)
		{
			day[2]++;
		}
		return day[month];
	}

	Date DaysAfter1(int x)
	{
		/*Date date;
		date._year = _year;
		date._month = _month;
		date._day = _day;*/

		Date date = *this;

		int monthday = 0;
		date._day += x;
		while (date._day > (monthday = MonthDay(date._year, date._month)))
		{
			date._day -= monthday;
			date._month++;
			if (date._month == 13)
			{
				date._year++;
				date._month = 1;
			}
		}

		return date;
	}

	Date& DaysAfter(int x)
	{
		int monthday = 0;
		_day += x;
		while (_day > (monthday = MonthDay(_year, _month)))
		{
			_day -= monthday;
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}

		return *this;
	}

	void Printf()
	{
		cout << _year << "��" << _month << "��" << _day << "��" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

