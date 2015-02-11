/****************************
** complex.h
** Unnecessarily Complex
** Patrick Xie, 4/8/11,
****************************/

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex{
public:
	Complex();
	friend istream& operator>> (istream& in, Complex& right);
	friend ostream& operator<< (ostream& out, const Complex& right);
	Complex operator+ (const Complex& right);
	Complex operator- (const Complex& right);
	Complex operator* (const Complex& right);
	Complex operator/ (const Complex& right);
	Complex operator^ (int n);
private:
	double a;
	double b;
	char i;
	char oper;
};

#endif