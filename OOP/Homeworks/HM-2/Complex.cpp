#include <iostream>
#include <cmath>
#include "Complex.hpp"

//http://www.librow.com/articles/article-10/appendix-b-1

Complex::Complex()
: real_(0), imaginary_(0)
{}

Complex::Complex(double real)
: real_(real), imaginary_(0.0)
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

Complex& Complex::Conjugate() const {
    Complex conj(real_, -imaginary_);

    return conj;
}

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

Complex operator/(const Complex& p, const Complex& q) {
	double denominator = (q.Real() * q.Real()) + (q.Imaginary() * q.Imaginary());

	double newReal = ((p.Real() * q.Real()) + (p.Imaginary() * q.Imaginary())) / denominator;
	double newImaginary = (p.Imaginary() * q.Real() - p.Real() * q.Imaginary()) / denominator;
	Complex result(newReal, newImaginary);
    
    return result;
}

bool operator==(const Complex& lhs, const Complex& rhs) {
	return (lhs.Real() == rhs.Real() && lhs.Imaginary() == rhs.Imaginary());
}

bool operator!=(const Complex& lhs, const Complex& rhs) {
	return (lhs.Real() != rhs.Real() || lhs.Imaginary() != rhs.Imaginary());
}

std::istream& operator>>(std::istream& stream, Complex& number) {
	double real, imaginary;
	char plus;

	stream >> real;
	stream >> plus;
	stream >> imaginary;
	stream >> plus;

	//number;
	//number.real_ = real;
	//number.imaginary_ = imaginary;

	return stream;
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