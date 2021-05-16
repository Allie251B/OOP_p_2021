#include "Buyer.h"

int main()
{ 
	BulgarianCoin c;
	Buyer ali;
	ali.add_money(20, 30, 40);
	Product p("Jam", 50, 60);
	p.print_product();
	if (ali.buy(p))
	{
		std::cout << "You have succesesfuly bought the product with 60% discount";
	}
	else std::cout << "You won't get the discount";
	std::cout << std::endl;	std::cout << std::endl;

	Product p1("Eggs", 5, 20);
	p1.print_product();
	if (ali.buy(p1))
	{
		std::cout << "You have succesesfuly bought the product with 20% discount";
	}
	else std::cout << "You won't get the discount";
	std::cout << std::endl;	std::cout << std::endl;

	Product p2("Butter", 10, 25);
	p2.print_product();
	if (ali.buy(p2))
	{
		std::cout << "You have succesesfuly bought the product with 25% discount";
	}
	else std::cout << "You won't get the discount";
	std::cout << std::endl;	std::cout << std::endl;

	Product p3("Milk", 1, 50);
	p3.print_product();
	if (ali.buy(p3))
	{
		std::cout << "You have succesesfuly bought the product with 50% discount";
	}
	else std::cout << "You won't get the discount";


}