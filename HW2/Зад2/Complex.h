#pragma once
class Complex
{
private:
	double realPart;
	double imaginaryPart;
public:

	Complex();
	Complex(double _realPart, double _imaginaryPart);

	double getRealPart() const;
	double getImaginaryPart() const;

	void setRealPart(int _realPart);
	void setImaginaryPart(int _imaginaryPart);

	Complex operator+(const Complex& _Complex);
	Complex operator-(const Complex& _Complex);
	Complex operator* (const Complex& _Complex);
	Complex operator/ (const Complex& _Complex);

	bool operator==(const Complex& _Complex);
	bool operator!=(const Complex& _Complex);

	Complex operator= (const Complex& _Complex);

	Complex& operator += (const Complex& _Complex);
	Complex& operator -= (const Complex& _Complex);
	Complex& operator *= (const Complex& _Complex);
	Complex& operator /= (const Complex& _Complex);
	void print();
	
};