#include <stdio.h>

//#include "character/character.c"
//#include "character/npc.c"
//#include "character/player.c"

#include "user_input/user_input.c"

#include "color/color.h"

int main() {
    char request[] = "Enter a name: ";
    char* name;

    name = input_char(request);
    printf(GRN "%s\n", name);

    return 0;
}