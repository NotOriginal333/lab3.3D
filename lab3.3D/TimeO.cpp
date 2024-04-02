#include "TimeO.h"
#include <iostream>
#include <sstream>

using namespace std;

TimeO TimeO::operator=(TimeO t) {
    triad = t.triad;
    return *this;
}

TimeO::TimeO() {
    triad.setHour(0);
    triad.setMin(0);
    triad.setSec(0);
}

TimeO::TimeO(Triad t) {
    triad = t;
}

TimeO::TimeO(const TimeO& t) {
    this->triad = t.triad;
}

istream& operator >> (istream& in, TimeO& r) {
    in >> r.triad;
    return in;
}

TimeO::operator string () const {
    stringstream ss;
    ss << "h: " << triad.getHour() << "\nm: " << triad.getMin() << "\ns: " << triad.getSec() << endl;
    return ss.str();
}


ostream& operator << (ostream& out, const TimeO& r) {
    out << string(r);
    return out;
}

void TimeO::incremSec() {
    triad.incremSec();
}

TimeO operator+(TimeO r, int n) {
    TimeO res;
    res.triad.setMin(r.triad.getMin() + n);
    return res;
}

TimeO operator*(TimeO r, int n) {
    TimeO res;
    res.triad.setSec(r.triad.getSec() + n);
    return res;
}

TimeO& TimeO::operator ++() {
    ++triad;
    return *this;
}

TimeO& TimeO::operator --() {
    --triad;
    return *this;
}

TimeO TimeO::operator ++(int) {
    TimeO n(*this);
    triad++;
    return n;
}

TimeO TimeO::operator --(int) {
    TimeO n(*this);
    triad--;
    return n;
}