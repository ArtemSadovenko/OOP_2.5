#include "Bus.h"

int Bus::count_bus = 0;

ostream& operator<<(ostream& out, Bus& a)
{
	out << a.car << "amount of pass. : " << a.am_pas << endl;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, Bus& a)
{
	in >> a.car;
	cout << "Amount of pass: "; in >> a.am_pas;
	return in;
	// TODO: вставьте здесь оператор return
}

Bus::Bus()
{
	am_pas = 0;
	increase();
}

Bus::Bus(Car c, int a)
{
	car = c;
	am_pas = a;
	increase();
}

Bus::Bus(Bus& a)
{
	car = a.car;
	am_pas = a.am_pas;
	increase();
}

Bus::~Bus()
{
	count_bus--;
}

Bus& Bus::operator=(Bus& a)
{
	car = a.car;
	am_pas = a.am_pas;
	return *this;
	// TODO: вставьте здесь оператор return
}

Bus& Bus::operator++()
{
	am_pas++;
	return *this;
	// TODO: вставьте здесь оператор return
}

Bus& Bus::operator--()
{
	am_pas--;
	return *this;
	// TODO: вставьте здесь оператор return
}

Bus Bus::operator++(int)
{
	Bus a(*this);
	am_pas++;
	return a;
}

Bus Bus::operator--(int)
{
	Bus a(*this);
	am_pas--;
	return a;
}
