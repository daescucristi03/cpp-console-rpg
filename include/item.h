#ifndef ITEM_H
#define ITEM_H

#pragma once
#include <iostream> 

class item
{
public:
    item(std::string name, int attackBonus, int healthBonus);

    ~item();

    // Getter methods for the item's properties
    std::string getName() const {
        return name;
    }

    int getAttackBonus() const {
        return attackBonus;
    }

    int getHealthBonus() const {
        return healthBonus;
    }

private:
    std::string name;
    int attackBonus;
    int healthBonus;
};

#endif