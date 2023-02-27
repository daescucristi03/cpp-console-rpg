#include "game.h"

game::game() {}

game::~game() {}

character game::createCharacter() {
    std::string name;
    std::cout << "Enter your character's name: ";
    std::cin >> name;

    std::cout << "Choose a class for your character:\n";
    std::cout << "1. Wizard\n";
    std::cout << "2. Warrior\n";
    std::cout << "3. Rogue\n";

    int classChoice;
    std::cin >> classChoice;
    system("cls");

    switch (classChoice) {
        case 1:
            // Create a new wizard character and return it
            // return Wizard(name);
            game::crossRoad();
            return character();
            break;
        case 2:
            // Create a new warrior character and return it
            // return Warrior(name);
            game::crossRoad();
            return character();
            break;
        case 3:
            // Create a new rogue character and return it
            // return Rogue(name);
            game::crossRoad();
            return character();
            break;
        default:
            std::cout << "Invalid choice.\n";
            // Return a default character object (or throw an exception)
            game::crossRoad();
            return character();
            break;
    }

}

void game::crossRoad() {
    std::cout << "You have arrived at a crossroad.\n";
    std::cout << "There are three paths to choose from:\n";
    std::cout << "1. Forest\n";
    std::cout << "2. Village\n";
    std::cout << "3. Cave\n";

    std::cout << "Which path do you want to take? ";
    int choice;
    std::cin >> choice;
    system("cls");

    switch (choice) {
        case 1:
            std::cout << "You have chosen the forest path.\n";
            game::findChest();
            // forest();
            break;
        case 2:
            std::cout << "You have chosen the village path.\n";
            game::findChest();
            // village();
            break;
        case 3:
            std::cout << "You have chosen the cave path.\n";
            game::findChest();
            // cave();
            break;
        default:
            std::cout << "Invalid choice.\n";
            break;
    }
}

void game::findChest() {
    std::cout << "You have found a chest!\n";

    std::vector<item> items;
    std::vector<item> itemList = {item("Sword", 10, 0), item("Potion", 0, 20), item("Gold", 50, 0)}; // Example list of items

    int itemIndex = rand() % itemList.size(); // Get a random item from the list
    getPlayer()->addItemToInventory(itemList[itemIndex]); // Add the item to the player's inventory
}
