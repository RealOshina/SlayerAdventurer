#include <string.h>
#include "character.h"

void create_character(
    char name[40], 
    int skill_id[6], 
    int hp, 
    int max_hp, 
    int ep, 
    int lp, 
    int oad, 
    int oab, 
    int rp, 
    int mp, 
    int accuracy) 
{
    Character character;

    strcpy(character.name, name);
    character.skill_id[0] = 1;
    character.hp = 100;
    character.max_hp = 100;
    character.ep = 50;
    character.lp = 50;
    character.oad = 0;
    character.oab = 0;
    character.rp = 0;
    character.mp = 0;
    character.accuracy = 50;
}