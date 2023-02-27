#include "item.h"

item::item(std::string name, int attackBonus, int healthBonus) {
    this->name = name;
    this->attackBonus = attackBonus;
    this->healthBonus = healthBonus;
}

item::~item()
{

}