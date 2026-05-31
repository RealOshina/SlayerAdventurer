#include "character.h"

#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    Character base;

    int gold;
} Player;

void create_player(Character* player, int gold);

#endif