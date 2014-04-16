#include <iostream>
#include <cmath>
#include "Complex.hpp"

Complex::Complex()
: real_(0), imaginary_(0)
{}

Complex::Complex(double real, double imaginary)
: real_(real), imaginary_(imaginary)
{}

Complex Complex::GetI() {
	return Complex(0, 1);
}

double Complex::Real() const {
	return real_;
}

double Complex::Imaginary() const {
	return imaginary_;
}

/*
Complex& Complex::Conjugate() const {
	//Complex* conjugate = new Complex(-real_, -imaginary_);
	Complex conjugate (-real_, -imaginary_);
	return conjugate;
}*/

bool Complex::IsReal() const {
	return imaginary_ == 0;
}

double Complex::Modulus() const {
	return sqrt(real_*real_ + imaginary_*imaginary_);
}

Complex operator+(const Complex& p, const Complex& q) {
	double real = p.Real() + q.Real();
	double imaginery = p.Imaginary() + q.Imaginary();

	return Complex(real, imaginery);
}

Complex operator-(const Complex& p, const Complex& q) {
	double real = p.Real() - q.Real();
	double imaginery = p.Imaginary() - q.Imaginary();

	return Complex(real, imaginery);
}

Complex operator*(const Complex& p, const Complex& q) {
	double a = p.Real();
	double b = p.Imaginary();

	double c = q.Real();
	double d = q.Imaginary();

	return Complex((a*c - b*d), (a*d + b*c));
}

bool operator==(const Complex& lhs, const Complex& rhs) {
	return (lhs.Real() == rhs.Real() && lhs.Imaginary() == rhs.Imaginary());
}

bool operator!=(const Complex& lhs, const Complex& rhs) {
	return (lhs.Real() != rhs.Real() || lhs.Imaginary() != rhs.Imaginary());
}

std::ostream& operator<<(std::ostream& stream, const Complex& number) {
	double real = number.Real();
	double imaginery = number.Imaginary();

	if (imaginery == 1) {
		stream << real << " + i";
	}
	else if (imaginery == 0) {
		stream << real;
	}
	else {
		stream << real << " + " << imaginery << "i";	
	}

	return stream;
}