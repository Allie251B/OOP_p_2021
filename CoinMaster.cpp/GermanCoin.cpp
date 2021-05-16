#pragma once
#include "GermanCoin.h"

GermanCoin::GermanCoin() : Coin("gm", 6, TAILS)
{}

GermanCoin::GermanCoin(size_t _value) : Coin()
{
	value = _value;
}

void GermanCoin::print()
{
	Coin::printCoin();
}

const coinSide GermanCoin::flip()
{
	size_t sideofCoin = side;
	sideofCoin = rand() % 2;
	side = mapnumbertoenum(sideofCoin);
	return side;
}