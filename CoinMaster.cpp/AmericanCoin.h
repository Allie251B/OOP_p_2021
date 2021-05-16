#pragma once
#include "Coin.h"

class AmericanCoin : public Coin
{
public:
    AmericanCoin();
    AmericanCoin(size_t value);
    void print();
    const coinSide flip() override;
};
