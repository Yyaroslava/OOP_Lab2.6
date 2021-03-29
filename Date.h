// Date.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Date {
public:
	class Triad {
		double first, second, third;
		static int count;
	public:
		void SetFirst(double value);
		void SetSecond(double value);
		void SetThird(double value);
		double GetFirst() const;
		double GetSecond() const;
		double GetThird() const;
		Triad();
		Triad(double, double, double);
		Triad(const Triad&);
		Triad& operator = (const Triad&);
		friend ostream& operator << (ostream&, const Triad&);
		friend istream& operator >> (istream&, Triad&);
		operator string() const;
		Triad& operator ++ ();
		Triad& operator -- ();
		Triad operator ++ (int);
		Triad operator -- (int);
		static int GetCounter();
	};

	Date(double, double, double);
	void SetP(double first, double second, double third);
	int Comparison(const Date::Triad t1, const Date::Triad t2) const;
	void TriadResult(int result);
	void date_1(int result);
	friend bool operator > (const Triad t1, const Triad t2);
	friend bool operator < (const Triad t1, const Triad t2);
	friend bool operator == (const Triad t1, const Triad t2);
	static int GetCounter();
	private:
	Triad t;
	static int count;
};
