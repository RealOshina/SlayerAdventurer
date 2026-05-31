#ifndef CHARACTER_H
#define CHARACTER_H

typedef struct {
    char name[40];      // 40 bytes
    int skill_id[6];    // 32 bytes

    int hp;             // 4 bytes
    int max_hp;         // 4 bytes

    int ep;             // 4 bytes
    int lp;             // 4 bytes

    int oad;            // 4 bytes
    int oab;            // 4 bytes

    int rp;             // 4 bytes
    int mp;             // 4 bytes

    int accuracy;       // 4 bytes
} Character;            // 78 bytes or ~120 bytes

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
    int accuracy
);

#endif