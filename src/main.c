#ifdef _WIN32
#include <windows.h>
#endif

#include <stdio.h>

//#include "character/character.c"
//#include "character/npc.c"
//#include "character/player.c"

#include "user_input/user_input.h"

#include "color/color.h"

void enable_ansi() {
#ifdef _WIN32
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    DWORD mode = 0;
    GetConsoleMode(hOut, &mode);

    mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;

    SetConsoleMode(hOut, mode);
#endif
}

int main() {
    char* name;

    enable_ansi();

    name = input_char("Enter a name: ");
    printf(GRN "%s\n" RESET, name);

    free(name);

    return 0;
}