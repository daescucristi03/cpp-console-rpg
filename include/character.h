#ifndef CHARACTER_H
#define CHARACTER_H

#pragma once
#include "item.h"
#include <vector>
#include <iostream>

class character
{
public:
    character();
    ~character();

    void addItemToInventory(item item);

private:
    std::vector<item> inventory;
};

#endif