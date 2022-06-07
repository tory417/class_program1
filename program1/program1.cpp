#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main()
{
    Fraction num1(1, 3);
    Fraction num2(3, 7);
	cout << "num1=";
	num1.printWithoutwholePart();
	cout << "num2=";
	num2.printWithoutwholePart();
	Fraction num3=num1.summ(num2);
	cout << "num1+num2=";
	num3.printWithoutwholePart();
	Fraction num4 = num1.subtr(num2);
	cout << "num1-num2=";
	num4.printWithoutwholePart();
	Fraction num5 = num1.mult(num2);
	cout << "num1*num2=";
	num5.printWithoutwholePart();
	Fraction num6 = num1.div(num2);
	cout << "num1:num2=";
	num6.printWithoutwholePart();

	cout << "Enter the incorrect fraction:" << endl;
	int num0, denom0;
	cout << "numerator=";
	cin >> num0;
	cout << "denominator=";
	cin >> denom0;
	Fraction wrongFr(num0, denom0);
	wrongFr.printWithoutwholePart();
	Fraction properFr(num0 % denom0, denom0, wrongFr.selectEntirepart(num0, denom0));
	properFr.printWithwholePart();
	
}

