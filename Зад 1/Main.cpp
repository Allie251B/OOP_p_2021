#include <iostream>
#include "Crypto.h"

int main()
{
    Crypto cryptocurrency("Cryptallie", 123, 321);
    cryptocurrency.printFullCoinInfo();
    std::cout << cryptocurrency.getname() << " course change: \n";
    cryptocurrency.print();

    std::cout << "\n\n******************************\n";
    std::cout << cryptocurrency.getname() << " second course change: \n";
    cryptocurrency.setlastPrice(cryptocurrency.getcurrentPrice());
    cryptocurrency.setcurrentPrice(213);
    cryptocurrency.print();

    /*tuka si suszadoh oshte edin put promqna v price-a da e po-interesno i 
    za da se vidi che smqta pravilno i za increase i za decrease*/
}
