#ifndef GAME_H
#define GAME_H

#pragma once

#include <iostream>
#include "character.h"
#include "item.h"
#include <vector>

class game
{
public:
    game();
    ~game();

    character setCharacter();

    character createCharacter();
    void crossRoad();
    void findChest(character* player);

private:
    character player;
};

#endif