// An immutable struct for working with complex numbers.
// See example usage below.
struct Complex {

private:
    double real_;
    double imaginary_;

public:
    // Returns the number i (0 + i)
    static Complex GetI();

    // Constructs a default Complex number (0 + 0i)
    Complex();

    // Constructs a Complex number with no imaginary part (real + 0i)
    Complex(double real);

    // Constructs a Complex number with predefined values (real + imaginary * i)
    Complex(double real, double imaginary);

    // Returns the real part of the complex number
    double Real() const;

    // Returns the imaginary part of the complex number
    double Imaginary() const;

    // Computes the conjugate (ñïðåãíàòî) of the complex number
    Complex& Conjugate() const;

    // Computes the modulus (distance to the center of the coordinate system) of the complex number
    double Modulus() const;

    // Computes the n-th power of the complex number. Use de Moivre's formulae
    //Complex Power(double n) const;

    // Computes the k-th, n-th root of the complex number (remember that a complex number has multiple n-th roots, you should only return the root with index k, indices start from 0)
    //Complex Root(double n, double k) const;

    // Computes the argument of the complex number (the angle between its radius-vector and Ox). Should be in the range [0; 2pi]
    //double Argument() const;    

    // Returns true if the number is real (i.e. b = 0)
    bool IsReal() const;
};

// Adds two numbers
Complex operator+(const Complex& p, const Complex& q);
// Substracts two numbers
Complex operator-(const Complex& p, const Complex& q);
// Multiplies two numbers
Complex operator*(const Complex& p, const Complex& q);
// Divides two numbers. Complex division MUST be defined using ONLY multiplication, conjugate and modulus
Complex operator/(const Complex& p, const Complex& q);

// Computes the nth power of the Complex number. MUST be defined using only the Power method (aliases are cool)
//Complex operator^(const Complex& number, double n);

// Returns true if the numbers are equal (lhs = left hand side, rhs = right hand side)
bool operator==(const Complex& lhs, const Complex& rhs);

// Returns true if the numbers are not equal 
bool operator!=(const Complex& lhs, const Complex& rhs);

// Reads a complex number from the stream. The input will be in the form a + bi
std::istream& operator>>(std::istream& stream, Complex& number);

// Writes a complex number to the stream. The output should be in the form 'a + bi'. If b = 1, the output should be 'a + i' and if b = 0, the output should be only 'a'.
std::ostream& operator<<(std::ostream& stream, const Complex& number);