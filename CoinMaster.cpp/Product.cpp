#include "Product.h"

Product::Product()
{
	product_name = new char[5];
	strcpy_s(product_name, 5, "None");
	product_discount = 0;
	product_price = 0;
	discount_chance = HEADS;
}

Product::Product(Product& other)
{
	product_name = new char[strlen(other.product_name) + 1];
	strcpy_s(product_name, strlen(other.product_name) + 1, other.product_name);
	product_price = other.product_price;
	product_discount = other.product_discount;
}

Product::Product(const char* name, double _price, double _discount)
{
	product_name = new char[strlen(name) + 1];
	strcpy_s(product_name, strlen(name) + 1, name);
	product_price = _price;
	product_discount = _discount;
	discount_chance = HEADS;
}

Product::~Product()
{
	delete[] product_name;
}

void Product::setName(const char* _name)
{
	delete[] product_name;
	product_name = new char[strlen(_name) + 1];
	strcpy_s(product_name, strlen(_name) + 1, _name);
}

void Product::setPrice(double _price)
{
	product_price = _price;
}

void Product::setDiscount(double _discount)
{
	product_discount = _discount;
}

void Product::setDiscountChance(coinSide _discount_chance)
{
	discount_chance = _discount_chance;
}

char* Product::getNameOfProduct()
{
	return product_name;
}

size_t Product::getSide()
{
	return discount_chance;
}

double Product::getPrice()
{
	return product_price;
}

double Product::getDiscount()
{
	return product_discount;
}

coinSide Product::getDiscountChance()
{
	return discount_chance;
}

void Product::print_product() const
{
	std::cout << product_name << std::endl;
	std::cout <<"Price: "<< product_price << std::endl;
	std::cout <<"You can potentially get "<< product_discount <<"% discount on this product" << std::endl;
}

