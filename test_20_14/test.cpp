#include"test.h"



//int main()
//{
//	Stack st(5);
//
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//	cout << st.Pop() << endl;
//	st.Print();
//
//	return 0;
//}



//int main()
//{
//	Queue Q;
//
//	Q.Push(1);
//	Q.Push(2);
//	Q.Push(3);
//	Q.Push(4);
//	cout << Q.Pop() << endl;
//	Q.Push(1);
//	Q.Push(2);
//	Q.Print();
//	return 0;
//}




//int main()
//{
//	Date a;
//	a.Printf();
//	return 0;
//}

//int main()
//{
//	Date a;
//	Date b = a.DaysAfter1(100);
//	b.Printf();
//	a.Printf();
//
//	return 0;
//}


//int main()
//{
//	Date a;
//
//	a.Printf();
//	return 0;
//}

//class Time
//{
//public:
//    Time()
//    {
//        cout << "Time()" << endl;
//        _hour = 0;
//        _minute = 0;
//        _second = 0;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//private:
//    // ��������(��������)
//    int _year;
//    int _month;
//    int _day;
//    // �Զ�������
//    Time _t;
//};
//int main()
//{
//    Date d;
//    return 0;
//}

//class Date
//{
//public:
//	Date(int year = 2023, int month = 10, int day = 14)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(Date x)
//	{
//		_year = x._year;
//		_month = x._month;
//		_day = x._day;
//	}
//
//	//void Printf()
//	//{
//	//	cout << _year << "��" << _month << "��" << _day << "��" << endl;
//	//}
//private:
//	int _year = 2023;
//	int _month = 10;
//	int _day = 15;
//};
//
//int main()
//{
//	Date a;
//	Date b(a);
//	return 0;
//}


//int main()
//{
//	Date a;
//	Date b(2023, 1, 1);
//	a.Printf();
//	b.Printf();
//	cout << (b <a) << endl;
//
//	return 0;
//}

//int main()
//{
//	Queue Q ;
//
//	Q.Push(1);
//	Q.Push(2);
//	Q.Push(3);
//	Q.Push(4);
//	cout << Q.Pop() << endl;
//	Q.Push(1);
//	Q.Push(2);
//	Queue a = Q;
//	Q.Print();
//	a.Print();
//
//	return 0;
//}


//int main()
//{
//	Date a;
//	Date b = a;
//	a == b;
//	operator==(a, b);
//	a < b;
//	a.operator<(b);
//	return 0;
//}


//int main()
//{
//	Date a;
//	Date b = a;//����
//	Date c;
//	c = a;//��ֵ
//	c.operator=(a);//��ֵ
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//// ǰ��++������+1֮��Ľ��
//// ע�⣺thisָ��Ķ����������󲻻����٣��������÷�ʽ�������Ч��
//	Date& operator++()
//	{
//		_day += 1;
//		return *this;
//	}
//// ����++��
//// ǰ��++�ͺ���++����һԪ�������Ϊ����ǰ��++�����++�γ�����ȷ����
//// C++�涨������++����ʱ������һ��int���͵Ĳ����������ú���ʱ�ò������ô��ݣ��������Զ�����
//// ע�⣺����++����ʹ�ú�+1�������Ҫ����+1֮ǰ�ľ�ֵ��������ʵ��ʱ��Ҫ�Ƚ�this����һ�ݣ�Ȼ���this + 1
//// ��temp����ʱ�������ֻ����ֵ�ķ�ʽ���أ����ܷ�������
//	Date operator++(int)
//	{
//		Date temp(*this);
//		_day += 1;
//		return temp;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//int main()
//{
//	Date d;
//	Date d1(2023, 10, 16);
//	d = d1++;    // d: 2023,10,17   d1:2023,10,16
//	d = ++d1;    // d: 2023,10,17   d1:2023,10,17
//	return 0;
//}

//int main()
//{
//	Date a;
//	a.Printf();
//	a.DaysAfter(5000);
//	a.Printf();
//	return 0;
//}


int main()
{
	Queue a;
	a.Push(1);
	a.Push(1);
	a.Push(1);
	a.Print();
	return 0;
}