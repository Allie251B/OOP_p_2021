#include <iostream>
#include "Complex.h"


int main()
{

	Complex number;
	number.setRealPart(3);
	number.setImaginaryPart(-15);
	Complex number2;
	number2.setRealPart(-1);
	number2.setImaginaryPart(2);
	std::cout << "First complex number:" << std::endl;
	number.print();
	std::cout << std::endl;
	std::cout << "Second complex number:" << std::endl;
	number2.print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Your added complex numbers:" << std::endl;
	(number + number2).print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Your subtracted complex numbers:" << std::endl;
	(number - number2).print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Your multiplied complex numbers:" << std::endl;
	(number * number2).print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Your divised complex numbers:" << std::endl;
	(number / number2).print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Are your complex numbers equeal:" << std::endl;
	if (number == number2)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Are your complex numbers different:" << std::endl;
	if (number != number2)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}


}