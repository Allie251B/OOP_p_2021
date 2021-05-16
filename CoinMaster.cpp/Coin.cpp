#include "Coin.h"

const char* Coin::mapenumtostring(int _side)
{
	switch (_side)
	{
	case HEADS:
		return "Heads";
	case TAILS:
		return "Tail";
	}
	return 0;
}


void Coin::erase()
{
	delete[] nationality;
}

void Coin::copy(const Coin& _coin)
{
	nationality = _coin.nationality;
	size_nationality = _coin.size_nationality;
	capacity_nationality = _coin.capacity_nationality;
}


coinSide Coin::mapnumbertoenum(int num)
{
	switch (num)
	{
	case 0:
		return HEADS;
	case 1:
		return TAILS;
	}
	return HEADS;
}

void Coin::setNationality(const char* other_nationality)
{
	delete[] nationality;
	nationality = new char[strlen(other_nationality) + 1];
	strcpy_s(nationality, strlen(other_nationality) + 1, other_nationality);
}

void Coin::setValue(double _Value)
{
	if (_Value < 0)
	{
		value = 0;
	}
	else
	{
		value = _Value;
	}
}

void Coin::printCoin()
{
	std::cout << "Coin nationality: " << nationality << std::endl;
	std::cout << "Coin value: " << value << std::endl;
	std::cout << "Coin face is: " << mapenumtostring(side) << std::endl;

}

Coin::Coin()
{
	setNationality("default");
	side = HEADS;
	value = 0;
}

Coin::Coin(const Coin& _coin)
{
	copy(_coin);
}

Coin::Coin(const char* _nationality, double _value, coinSide _side):
			value(_value), side(_side)
{
	setNationality(_nationality);
}


Coin& Coin::operator=(const Coin& _coin)
{
	if (this != &_coin)
	{
		erase();
		copy(_coin);
	}
	return *this;
}

Coin::~Coin()
{
	erase();
}
