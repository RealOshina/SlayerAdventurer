#include "character.h"

#ifndef NPC_H
#define NPC_H

typedef struct {
    Character base;

    int dialogue_id;
    int shop_id;
    int quest_id;
} Npc;

#endif