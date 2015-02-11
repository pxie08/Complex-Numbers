/****************************
** complex.cpp
** Unnecessarily Complex
** Patrick Xie, 4/8/11,
****************************/

#include "complex.h"

/*Complex object with a,b = 0
.i will always be i, same with +*/
Complex::Complex() {
	a = 0;
	b = 0;
	i = 'i';
	oper = '+';
}
//Overload input for Complex objects
istream& operator>> (istream& in, Complex& right) {
	in >> right.a
	   >> right.oper
	   >> right.b
	   >> right.i;
	return in;
}
//Overload output for Complex objects
ostream& operator<< (ostream& out, const Complex& right){
	out << right.a << " "
		<< right.oper << " "
		<< right.b << " "
		<< right.i;
	return out;
}
//Overload '+' operation for complex numbers
Complex Complex::operator+ (const Complex& right){
	Complex sum;
	sum.a = (a + right.a);
	sum.b = (b + right.b);
	return sum;
}
//Overload '-' operation for complex numbers
Complex Complex::operator- (const Complex& right){
	Complex sub;
	sub.a = a-right.a;
	sub.b = b-right.b;
	return sub;
}
//Overload '*' operation for complex numbers
Complex Complex:: operator* (const Complex& right){
	Complex mult;
	mult.a = (a*right.a) - (b*right.b);
	mult.b = (a*right.b) + (b*right.a);
	return mult;
}
//Overload '/' operation for complex numbers
Complex Complex:: operator/ (const Complex& right){
	Complex div;
	div.a = ((a*right.a)+(b*right.b))/((right.a*right.a)+(right.b*right.b));
	div.b = ((b*right.a)-(a*right.b))/((right.a*right.a)+(right.b*right.b));
	return div;
}
//Overload '^' operation for complex numbers
Complex Complex:: operator^ (int n){
	Complex pow;
	Complex pow1;
	pow.a = a;
	pow.b = b;
	pow1.a = a;
	pow1.b = b;
	for(int i = 1; i < n; i ++){
		pow= pow*pow1;
	}
	return pow;
}