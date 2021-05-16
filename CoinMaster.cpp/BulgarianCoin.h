#pragma once
#include "Coin.h"

class BulgarianCoin : public Coin
{
public:
    BulgarianCoin();
    BulgarianCoin(size_t value);
    void print();
    const coinSide flip() override;
};
