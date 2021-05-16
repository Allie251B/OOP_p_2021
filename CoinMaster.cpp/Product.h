#pragma once
#include "Coin.h"

class Product
{
private:
	char* product_name;
	double product_price; // cenata e v lev.
	double product_discount;
	coinSide discount_chance;
public:
	Product();
	Product(Product& other);
	Product(const char* name, double _price, double _discount);
	~Product();

	void setName(const char* _name);
	void setPrice(double _price);
	void setDiscount(double _discount);
	void setDiscountChance(coinSide _discount_chance);

	char* getNameOfProduct();
	size_t getSide();
	double getPrice();
	double getDiscount();
	coinSide getDiscountChance();

	void print_product() const;
};
