#pragma once
#include "Coin.h"

class GermanCoin : public Coin
{
public:
    GermanCoin();
    GermanCoin(size_t value);
    void print();
    const coinSide flip() override;
};

