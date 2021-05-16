#include "AmericanCoin.h"

AmericanCoin::AmericanCoin() :Coin("am", 3, TAILS)
{}

AmericanCoin::AmericanCoin(size_t _value) : Coin()
{
	value = _value;
}

void AmericanCoin::print()
{
	Coin::printCoin();
}

const coinSide AmericanCoin::flip() 
{
	if (rand() % 10 < 1)
	{
		side = TAILS;
		side = mapnumbertoenum(side);
		std::cout << mapenumtostring(side);
	}
	else
	{
		side = HEADS;
		side = mapnumbertoenum(side);
		std::cout << mapenumtostring(side);
	}
	return side;
}

