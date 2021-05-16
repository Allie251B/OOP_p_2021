#pragma once
#include "Pouch.h"
#include "Product.h"

class Buyer
{
private:
	Pouch<BulgarianCoin> bg;
	Pouch<AmericanCoin> am;
	Pouch<GermanCoin> gm;

	double checkDiscount(Product _product);
	coinSide flipCoin();
	size_t calculatePrice_in_bg_coins(Product _product);
	bool Proceed_and_buy();

public:
	Buyer();
	Buyer(Pouch<BulgarianCoin> _bg, Pouch<AmericanCoin> _am, Pouch<GermanCoin> _gm);

	bool buy(Product _product);
	void add_money(size_t bg, size_t am, size_t gm);
	void take_money(size_t bg, size_t am, size_t gm);
	
};
