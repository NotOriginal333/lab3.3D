#pragma once
#include "Triad.h"
#include <string>
#include <sstream>

class TimeC :
	private Triad
{
	Triad triad;
public:
	TimeC();
	TimeC(Triad);
	TimeC(const TimeC&);
	~TimeC() { };

	Triad getTriad() { return triad; };

	void setTriad(Triad t) { triad = t; };

	TimeC& operator ++();
	TimeC& operator --();
	TimeC operator ++(int);
	TimeC operator --(int);

	friend TimeC operator+(TimeC r, int n);
	friend TimeC operator*(TimeC r, int n);
	void incremSec();

	TimeC operator=(TimeC t);

	friend ostream& operator << (ostream& out, const TimeC& r);
	friend istream& operator >> (istream& in, TimeC& r);

	operator std::string() const;
};

