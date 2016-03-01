#include<iostream>
using namespace std;

class Fraction {
public:
	Fraction(int = 0, int = 0);
	void add(Fraction, Fraction);
	void subtract(Fraction, Fraction);
	void divide(Fraction, Fraction);
	void multiply(Fraction, Fraction);
	void print();
	int getNumDen();
	void setNumDen(Fraction&, Fraction&);

private:
	int numarator;
	int denominator;

};


Fraction::Fraction(int a, int b) {
	numarator = a;
	denominator = b;
};

void Fraction::add(Fraction x, Fraction y) {
	denominator = x.denominator* y.denominator;
	numarator = (x.numarator*y.denominator) + (x.denominator*y.numarator);
};

void Fraction::subtract(Fraction x, Fraction y) {
	denominator = x.denominator* y.denominator;
	numarator = (x.numarator*y.denominator) - (x.denominator*y.numarator);
};

void Fraction::multiply(Fraction x, Fraction y) {
	numarator = (x.numarator*y.numarator);
	denominator = (x.denominator*y.denominator);
};

void Fraction::divide(Fraction x, Fraction y) {
	numarator = (x.numarator*y.denominator);
	denominator = (x.denominator*y.numarator);
};

int Fraction::getNumDen() {
	return numarator, denominator;
};
/*
void Fraction::getNumDen()
{
cout << "Enter Numerator" << endl;
cin >> numarator;
cout << "Enter Denominator" << endl;
cin >> denominator;
};
*/


void Fraction::setNumDen(Fraction& num, Fraction& den) {
	//if (num.denominator != 0 && den.denominator != 0) {
		num = numarator;
		den = denominator;
	

};

void Fraction::print() {

	cout << numarator << "/" << denominator << endl;
};
