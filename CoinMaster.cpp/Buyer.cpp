#include "Buyer.h"

double Buyer::checkDiscount(Product _product)
{
	coinSide side = flipCoin();

	return _product.getDiscount();
}

 coinSide Buyer::flipCoin() 
{
	int randomflip = rand() % 3;
	if (randomflip == 0)
	{
		if (bg.getNumberOfCoins() > 0)
		{
			return bg.flip();
		}
	}
	else if (randomflip == 1)
	{
		if (am.getNumberOfCoins() > 0)
		{
			return am.flip();
		}
	}
	else if (randomflip == 2)
	{
		if (gm.getNumberOfCoins() > 0)
		{
			return gm.flip();
		}

	}
}

 size_t Buyer::calculatePrice_in_bg_coins(Product _product)
 {
	 coinSide coin_flip = flipCoin();
	 if (coin_flip == _product.getSide())
	 {
		 return _product.getPrice()* (_product.getDiscount() / 100);
	 }
	 return  _product.getPrice();
 }

 bool Buyer::Proceed_and_buy()
 {
	 char ans;

	 std::cout << "Do you want to proceed: y/n";
	 std::cin >> ans;
	 if (ans == 'y') return true;
	 else if (ans == 'n') return false;

 }

Buyer::Buyer()
{
}

Buyer::Buyer(Pouch<BulgarianCoin> _bg, Pouch<AmericanCoin> _am, Pouch<GermanCoin> _gm)
{
	bg.set_money(_bg.getNumberOfCoins());
	am.set_money(_am.getNumberOfCoins());
	gm.set_money(_gm.getNumberOfCoins());
}



bool Buyer::buy(Product _product)
{
	int randomflip = rand() % 3;

	int price_in_lev = calculatePrice_in_bg_coins(_product);
	bool proceed = false;
	bool can_proceed = false;

 
		if (randomflip == 0)
		{
			can_proceed = bg.take_money(price_in_lev);
		}
		else if (randomflip == 1)
		{

			int price_in_am = price_in_lev * 3;
			can_proceed = am.take_money(price_in_am);

		}
		else if (randomflip == 2)
		{
			int price_in_gm = price_in_lev * 6;
			can_proceed = gm.take_money(price_in_gm);
		}

	if ( (price_in_lev < _product.getPrice() )&& (can_proceed == true))
	{
		if (Proceed_and_buy())
		{
			proceed = true;
		}
	}
	return can_proceed;
}

void Buyer::add_money(size_t bg_n, size_t am_n, size_t gm_n)
{
	bg.add_money(bg_n);
	gm.add_money(gm_n);
	am.add_money(am_n);
}

void Buyer::take_money(size_t bg_m, size_t am_m, size_t gm_m)
{
	bg.take_money(bg_m);
	gm.take_money(gm_m);
	am.take_money(am_m);
}
