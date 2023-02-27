#include "character.h"

character::character()
{

}

character::~character()
{

}

void character::addItemToInventory(item item) {
    int inventorySize = 5;
    if (character::inventory.size() < inventorySize) { // Check if the inventory is not full
        inventory.push_back(item);
    } else {
        std::cout << "Your inventory is full!\n";
    }
}
