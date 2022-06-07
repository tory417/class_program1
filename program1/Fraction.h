#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
	int wholePart;
	int num;
	int denom;
public:
	Fraction(int num, int denom) {
		this->num = num;
		this->denom = denom;
	}
	Fraction(int num, int denom, int wholePart) :
		Fraction(num, denom) {
		this->wholePart = wholePart;
	}
	Fraction summ(Fraction& f1) {
		int num2 = num * f1.denom + denom * f1.num;
		int denom2 = f1.denom * denom;
		Fraction f3(num2, denom2);
		return f3;
	}
	Fraction subtr(Fraction& f1) {
		int num2 = num * f1.denom - denom * f1.num;
		int denom2 = f1.denom * denom;
		Fraction f3(num2, denom2);
		return f3;
	}
	Fraction mult(Fraction& f1) {
		int num2 = num * f1.num;
		int denom2 = denom * f1.denom;
		Fraction f3(num2, denom2);
		return f3;
	}
	Fraction div(Fraction& f1) {
		int num2 = num * f1.denom;
		int denom2 = denom * f1.num;
		Fraction f3(num2, denom2);
		return f3;
	}
	int selectEntirepart(int num, int denom) {
		int wholePart = num / denom;
		return wholePart;
	}
	void printWithoutwholePart() {
		cout << num << "/" << denom << endl;
	}
	void printWithwholePart() {
		cout << wholePart << " " << num << "/" << denom << endl;
	}
};

