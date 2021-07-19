#ifndef SALES_DATA_H_
#define SALES_DATA_H_

#include <string>

struct Sales_data;
//��Ԫ����ⲿ����
std::istream& read(std::istream& is, Sales_data& item);					//param����������sales_data��Ķ���
std::ostream& print(std::ostream& os, const Sales_data& item);			//param: �������const �� sales_data��Ķ���
Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

struct Sales_data
{
	friend std::istream& read(std::istream& is, Sales_data& item);		//��Ԫ��
	friend std::ostream& print(std::ostream& os, const Sales_data& item);
	friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
public://��дΪ���µ�ί�й��캯��
	Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p* n) { std::cout << "Sales_data(const std::string &s, unsigned n, double p)" << std::endl; }
	//���������ĳ�ʼֵ�б�Ϊ����Ĺ��캯��
	Sales_data() : Sales_data("", 0, 0) { std::cout << "Sales_data() : Sales_data(\"\", 0, 0)" << std::endl; }
	Sales_data(const std::string& s) : Sales_data(s, 0, 0) { std::cout << "Sales_data(const std::string &s) : Sales_data" << std::endl; }
	Sales_data(std::istream& is) : Sales_data() { read(is, *this); std::cout << "Sales_data(std::istream &is) : Sales_data()" << std::endl; }
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
private:
	inline double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;

	return *this;
}

inline double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

std::istream& read(std::istream& is, Sales_data& item)
{
	double price = 0;

	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;

	return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();

	return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);

	return sum;
}

#endif
