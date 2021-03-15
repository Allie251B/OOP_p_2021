#pragma once

class Crypto
{
private:
	char* name;
	double lastPrice;
	double currentPrice;


public:
	const char* getname();
	const double getlastPrice();
	const double getcurrentPrice();
	void setname(const char* _name);
	void printFullCoinInfo();
	void setlastPrice(double _lastPrice);
	void setcurrentPrice(double _currentPrice);

	~Crypto();
	void print();
	Crypto();
	Crypto(const char* _name, double _lastPrice, double _currentPrice);
	double priceDifference();

};