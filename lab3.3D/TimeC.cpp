#include "TimeC.h"
#include <iostream>
#include <sstream>

using namespace std;

TimeC TimeC::operator=(TimeC t) {
    triad = t.triad;
    return *this;
}

TimeC::TimeC() {
    triad.setHour(0);
    triad.setMin(0);
    triad.setSec(0);
}

TimeC::TimeC(Triad t) {
    triad = t;
}

TimeC::TimeC(const TimeC& t) {
    this->triad = t.triad;
}

istream& operator >> (istream& in, TimeC& r) {
    in >> r.triad;
    return in;
}

TimeC::operator string () const {
    stringstream ss;
    ss << "h: " << triad.getHour() << "\nm: " << triad.getMin() << "\ns: " << triad.getSec() << endl;
    return ss.str();
}


ostream& operator << (ostream& out, const TimeC& r) {
    out << string(r);
    return out;
}

void TimeC::incremSec() {
    triad.incremSec();
}

TimeC operator+(TimeC r, int n) {
    TimeC res;
    res.triad.setMin(r.triad.getMin() + n);
    return res;
}

TimeC operator*(TimeC r, int n) {
    TimeC res;
    res.triad.setSec(r.triad.getSec() + n);
    return res;
}

TimeC& TimeC::operator ++() {
    ++triad;
    return *this;
}

TimeC& TimeC::operator --() {
    --triad;
    return *this;
}

TimeC TimeC::operator ++(int) {
    TimeC n(*this);
    triad++;
    return n;
}

TimeC TimeC::operator --(int) {
    TimeC n(*this);
    triad--;
    return n;
}