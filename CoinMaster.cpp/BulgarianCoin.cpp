#pragma once
#include "BulgarianCoin.h"

BulgarianCoin::BulgarianCoin()  : Coin("bg", 1, TAILS)
{}

BulgarianCoin::BulgarianCoin(size_t _value) : Coin()
{
	value = _value;
}

void BulgarianCoin::print()
{
	Coin::printCoin();
}

const coinSide BulgarianCoin::flip()
{
	if (rand() % 10 < 7)
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

