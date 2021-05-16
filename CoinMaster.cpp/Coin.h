#pragma once
#include <iostream>

enum coinSide
{
	HEADS = 0,
	TAILS
};

class Coin
{
protected:
	char* nationality;
	size_t size_nationality;
	size_t capacity_nationality;

	double index_of_bulgarian_currency;

	double value;
	coinSide side;

	void erase();
	void copy(const Coin& _coin);
	coinSide mapnumbertoenum(int num);
	const char* mapenumtostring(int _side);

public:
	Coin();
	Coin(const Coin& _coin);
	Coin(const char* _nationality, double _value, coinSide _side);
	Coin& operator=(const Coin& _coin);
	~Coin();

	void setNationality(const char* _str);
	void setValue(double _Value);

	virtual void printCoin();
	virtual const coinSide flip() = 0;
};