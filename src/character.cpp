#include "character.h"

character::character()
{

}

character::~character()
{

}

void character::addItemToInventory(item item) {
    inventory.push_back(item);
    std::cout<< "Added to inventory\n";

}
