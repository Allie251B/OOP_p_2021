#include "Crypto.h"
#include <iostream>
#include <cstring>


Crypto::Crypto()
{
    setname("DogeCoin");
    currentPrice = 0;
    lastPrice = 0;
}

Crypto::Crypto(const char* _name, double _lastPrice, double _currentPrice)
{
    setname(_name);
    currentPrice = _currentPrice;
    lastPrice = _lastPrice;
}


const char* Crypto::getname()
{
    return name;
}

const double Crypto::getlastPrice()
{
    return lastPrice;
}

const double Crypto::getcurrentPrice()
{
    return currentPrice;
}

void Crypto::setname(const char* _name)
{
    delete[] name;
    name = new char[30];
    int len = 0;
    while (_name[len] != '\0' && len < 30)
    {
        name[len] = _name[len];
        len++;
    }
    name[len] = '\0';
}

void Crypto::setlastPrice(double _lastPrice)
{
    if (_lastPrice < 0)
    {
        lastPrice = 0;
    }
    else
    {
        lastPrice = _lastPrice;
    }
}

void Crypto::setcurrentPrice(double _currentPrice)
{
    if (_currentPrice < 0)
    {
        currentPrice = 0;
    }
    else
    {
        currentPrice = _currentPrice;
    }
}


double Crypto::priceDifference()
{
    if (lastPrice == 0 || currentPrice == 0) return -1;
    if (currentPrice > lastPrice)
    {
        return ((currentPrice - lastPrice) * 100) / lastPrice;
    }
    else
    {
        return ((lastPrice - currentPrice) * 100) / currentPrice;
    }
}

void Crypto::printFullCoinInfo()
{
    std::cout << "__________________________________\n";
    std::cout << "Coin Name: " << getname() << "\n";
    std::cout << "Last Price: " << getlastPrice() << "\n";
    std::cout << "Current Price:" << getcurrentPrice() << "\n";
    std::cout << "__________________________________\n";
}

void Crypto::print()
{
    std::cout << name << " " << lastPrice << " " << currentPrice << std::endl;
    if (priceDifference() == -1)
    {
        std::cout << "If the starting or current price is 0 the change in percent is equal to infinity \n";
    }
    else if (currentPrice > lastPrice)
    {
        std::cout << "The price increased by " << priceDifference() << " percent" << std::endl;
    }
    else if (currentPrice == lastPrice)
    {
        std::cout << "The price didn't change " << std::endl;
    }
    else
    {
        std::cout << "The price decreased by " << priceDifference() << " percent" << std::endl;
    }
}

Crypto::~Crypto()
{
    delete[] name;
}