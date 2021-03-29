// Date.cpp
#include "Date.h"

int Date::Triad::count = 0;

int Date::Triad::GetCounter() {
	return Date::Triad::count;
}

void Date::Triad::SetFirst(double value) { first = value; }
void Date::Triad::SetSecond(double value) { second = value; }
void Date::Triad::SetThird(double value) { third = value; }

double Date::Triad::GetFirst() const { return first; }
double Date::Triad::GetSecond() const { return second; }
double Date::Triad::GetThird() const { return third; }

Date::Triad::Triad() { first = 0, second = 0, third = 0;  Date::Triad::count++; }

Date::Triad::Triad(double first = 0, double second = 0, double third = 0) {
	this->first = first;
	this->second = second;
	this->third = third;
	Date::Triad::count++;
}

Date::Triad::Triad(const Triad& A) {
	first = A.GetFirst();
	second = A.GetSecond();
	third = A.GetThird();
	Date::Triad::count++;
}

Date::Triad& Date::Triad::operator = (const Triad& A) {
	first = A.first;
	second = A.second;
	third = A.third;
	return *this;
}

ostream& operator << (ostream& out, const Date::Triad& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, Date::Triad& A) {
	cout << "first = "; in >> A.first;
	cout << "second = "; in >> A.second;
	cout << "third = "; in >> A.third;
	cout << " " << A.first << "." << A.second << "." << A.third << endl;
	return in;
}

Date::Triad::operator string() const {
	stringstream ss;
	ss << "first: " << first << endl;
	ss << "second: " << second << endl;
	ss << "third: " << third << endl;
	return ss.str();
}

Date::Triad& Date::Triad::operator ++ () {
	first++;
	second++;
	third++;
	return *this;
}

Date::Triad& Date::Triad::operator -- () {
	first--;
	second--;
	third--;
	return *this;
}

Date::Triad Date::Triad::operator ++ (int) {
	Triad t(*this);
	first++;
	second++;
	third++;
	return t;
}

Date::Triad Date::Triad::operator -- (int) {
	Triad t(*this);
	first--;
	second--;
	third--;
	return t;
}

int Date::count = 0;

int Date::GetCounter() {
	return Date::count;
}

void Date::SetP(double first, double second, double third) { Triad(first, second, third); }

Date::Date(double first = 0, double second = 0, double third = 0)
	: t(first, second, third) {
	count++;
}

bool operator > (const Date::Triad t1, const Date::Triad t2) {
	if (t1.GetFirst() > t2.GetFirst() || (t1.GetFirst() == t2.GetFirst()) &&
		(t1.GetSecond() > t2.GetSecond()) || (t1.GetSecond() == t2.GetSecond()) &&
		(t1.GetThird() > t2.GetThird()))
		return 1;
	else
		return 0;
}

bool operator < (const Date::Triad t1, const Date::Triad t2) {
	if (t1.GetFirst() < t2.GetFirst() || (t1.GetFirst() == t2.GetFirst()) &&
		(t1.GetSecond() < t2.GetSecond()) || (t1.GetSecond() == t2.GetSecond()) &&
		(t1.GetThird() < t2.GetThird()))
		return 1;
	else
		return 0;
}

bool operator == (const Date::Triad t1, const Date::Triad t2) {
	if ((t1.GetFirst() == t2.GetFirst()) &&
		(t1.GetSecond() == t2.GetSecond()) &&
		(t1.GetThird() == t2.GetThird()))
		return 1;
	else
		return 0;
}

int Date::Comparison(const Date::Triad t1, const Date::Triad t2) const {
	if (t1 > t2)
		return 1;
	if (t1 < t2)
		return 2;
	if (t1 == t2)
		return 3;
}

void Date::TriadResult(int result) {
	switch (result) {
	case 1:
		cout << "t1 > t2" << endl;
		break;
	case 2:
		cout << "t1 < t2" << endl;
		break;
	case 3:
		cout << "t1 = t2" << endl;
		break;
	}
}

void Date::date_1(int result) {
	switch (result) {
	case 1:
		cout << "d1 > d2" << endl;
		break;
	case 2:
		cout << "d1 < d2" << endl;
		break;
	case 3:
		cout << "d1 = d2" << endl;
		break;
	}
}