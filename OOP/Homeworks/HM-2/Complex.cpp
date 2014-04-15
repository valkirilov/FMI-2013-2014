#include <iostream>
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

Complex operator+(const Complex& p, const Complex& q) {
	double real = p.Real() + q.Real();
	double imaginery = p.Imaginary() + q.Imaginary();

	return Complex(real, imaginery);
}

// Writes a complex number to the stream. The output should be in the form 
//'a + bi'. If b = 1, the output should be 'a + i' and if b = 0, the output should be only 'a'.
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