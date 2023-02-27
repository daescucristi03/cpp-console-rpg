#include <iostream>
#include "game.h"
#include "character.h"

int main() { 
    game gameManager = game();
    character player;

    player = gameManager.createCharacter();
    
    // destroy gameManager;
    return 0;
}
