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

    character* getPlayer() { return this->player; }

    character createCharacter();
    void crossRoad();
    void findChest();

private:
    character *player;
};

#endif