#pragma once
#include "Triad.h"
#include <string>
#include <sstream>

class TimeO :
	public Triad
{
	Triad triad;
public:
	TimeO();
	TimeO(Triad);
	TimeO(const TimeO&);
	~TimeO() { };

	Triad getTriad() { return triad; };

	void setTriad(Triad t) { triad = t; };

	TimeO& operator ++();
	TimeO& operator --();
	TimeO operator ++(int);
	TimeO operator --(int);

	friend TimeO operator+(TimeO r, int n);
	friend TimeO operator*(TimeO r, int n);
	void incremSec();

	TimeO operator=(TimeO t);

	friend ostream& operator << (ostream& out, const TimeO& r);
	friend istream& operator >> (istream& in, TimeO& r);

	operator std::string() const;
};

