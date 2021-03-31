#include "Complex.h"
#include <iostream>

Complex::Complex()
{
	double realPart = 0;
	double imaginaryPart = 0;
}

Complex::Complex(double _realPart, double _imaginaryPart)
{
	realPart = _realPart;
	imaginaryPart = _imaginaryPart;
}

double Complex::getRealPart() const
{
	return realPart;
}

double Complex::getImaginaryPart() const
{
	return imaginaryPart;
}

void Complex::setRealPart(int _realPart)
{
	realPart = _realPart;
}

void Complex::setImaginaryPart(int _imaginaryPart)
{
	imaginaryPart = _imaginaryPart;
}

Complex Complex::operator+(const Complex& _Complex)
{
	Complex newComplex;
	newComplex = *this;
	newComplex.setRealPart(realPart + _Complex.realPart);
	newComplex.setImaginaryPart(imaginaryPart + _Complex.imaginaryPart);
	return newComplex;
}

Complex Complex::operator-(const Complex& _Complex)
{
	Complex newComplex;
	newComplex = *this;
	newComplex.setRealPart(realPart - _Complex.realPart);
	newComplex.setImaginaryPart(imaginaryPart - _Complex.imaginaryPart);
	return newComplex;
}

Complex Complex::operator*(const Complex& _Complex)
{
	Complex newComplex;
	newComplex = *this;
	newComplex.setRealPart((realPart * (_Complex.realPart)) - (imaginaryPart * (_Complex.imaginaryPart)));
	newComplex.setImaginaryPart((imaginaryPart * (_Complex.realPart)) + (realPart * _Complex.imaginaryPart));
	return newComplex;
}

Complex Complex::operator/(const Complex& _Complex)
{
	Complex newComplex;
	newComplex = *this;
	newComplex.setRealPart(((realPart * (_Complex.realPart)) + (imaginaryPart * (_Complex.imaginaryPart))) / ((_Complex.realPart) * (_Complex.realPart) + (_Complex.imaginaryPart) * (_Complex.imaginaryPart)));
	newComplex.setImaginaryPart (((imaginaryPart * (_Complex.realPart)) + (realPart * (_Complex.imaginaryPart))) / ((_Complex.realPart) * (_Complex.realPart) + (_Complex.imaginaryPart) * (_Complex.imaginaryPart)));
	return newComplex;
}

bool Complex::operator==(const Complex& _Complex)
{
	if ((_Complex.realPart == realPart) && (imaginaryPart == _Complex.imaginaryPart))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Complex::operator!=(const Complex& _Complex)
{
	if ((_Complex.realPart != realPart) || (imaginaryPart != _Complex.imaginaryPart))
	{
		return true;
	}
	else
	{
		return false;
	}
}

Complex Complex::operator=(const Complex& _Complex)
{
	realPart = _Complex.realPart;
	imaginaryPart = _Complex.imaginaryPart;
	return *this;
}

Complex& Complex::operator+=(const Complex& _Complex)
{
	*this = *this + _Complex;
	return *this;
}

Complex& Complex::operator-=(const Complex& _Complex)
{
	*this = *this - _Complex;
	return *this;
}

Complex& Complex::operator*=(const Complex& _Complex)
{
	*this = *this * _Complex;
	return *this;
}

Complex& Complex::operator/=(const Complex& _Complex)
{
	*this = *this / _Complex; 
	return *this;
}

void Complex::print()
{
	if (imaginaryPart < 0)
	{
		std::cout << realPart << imaginaryPart << "i";
	}
	else
	{
		std::cout << realPart << "+" << imaginaryPart << "i";
	}
}