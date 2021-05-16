#pragma once
#include "BulgarianCoin.h"
#include "GermanCoin.h"
#include "AmericanCoin.h"

template<typename C>
class Pouch
{
private:
	size_t number_of_coins;
	C coin;
public:
	Pouch();
	Pouch(size_t);

	size_t getNumberOfCoins();
	const coinSide flip();

	bool take_money(size_t add_number_of_coins);
	void add_money(size_t number_of_coins);
	void set_money(size_t num_money);

};

template<typename C>
inline Pouch<C>::Pouch() : number_of_coins(0) 
{}

template<typename C>
inline Pouch<C>::Pouch(size_t num) : number_of_coins(num)
{}

template<typename C>
inline size_t Pouch<C>::getNumberOfCoins()
{
	return number_of_coins;
}

template<typename C>
inline const coinSide Pouch<C>::flip()
{
	return coin.flip();
}

template<typename C>
inline bool Pouch<C>::take_money(size_t take_number_of_coins)
{
	int left_coins = number_of_coins - take_number_of_coins;
	if (left_coins >= 0)
	{
		number_of_coins = left_coins;
		return true;
	}
	else
	{
		std::cout << "Not enough coins from this currency!\n";
		return false;
	}
}

template<typename C>
inline void Pouch<C>::add_money(size_t add_number_of_coins)
{
	number_of_coins = number_of_coins + add_number_of_coins;
}

template<typename C>
inline void Pouch<C>::set_money(size_t num_money)
{
	number_of_coins = num_money;
}
