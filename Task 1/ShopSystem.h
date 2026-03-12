#ifndef SHOPSYSTEM_H
#define SHOPSYSTEM_H

#include <iostream>

class ShopSystem {
public:
    void showShop() {
        std::cout << "[SHOP] offered: Bonus (+5)\n"; // [cite: 54]
        std::cout << "[SHOP] skipped\n"; // [cite: 55]
    }
};

#endif