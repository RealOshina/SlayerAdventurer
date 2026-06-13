#include <stdio.h>
#include <stdlib.h>

#include "user_input.h"
#include "../color/color.h"

char* input_char(char *request) {
    printf("%s", request);

    char input[40];
	char* data = malloc(40);

    while (fgets(input, sizeof(input), stdin)) {
        if (sscanf(input, "%39s", data) == 1) {
            return data;
        } else {
            printf(REDBOLD "Invalid Input.\n\n" RESET);
			printf("%s", request);
        }
    }

    free(data);
    return NULL;
}