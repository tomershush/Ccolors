#include <stdio.h>
#include <string.h>
#include "colors.h"

void redColor(char* word, char color)
{
    char selectedColor[COLOR_LENGTH] = {'\0'};

    switch (color)
    {
        case BLA:
            strcat(selectedColor, BLACK);
            break;

        case R:
            strcat(selectedColor, RED);
            break;

        case GR:
            strcat(selectedColor, GREEN);
            break;

        case YEL:
            strcat(selectedColor, YELLOW);
            break;

        case BLU:
            strcat(selectedColor, BLUE);
            break;

        case MAG:
            strcat(selectedColor, MAGENTA);
            break;

        case CY:
            strcat(selectedColor, CYAN);
            break;

        default:
            if (color == WHI)
            {
                strcat(selectedColor, WHITE);
            }
            else
            {
                strcat(selectedColor, RESET);
            }
    }
    printf("%s", selectedColor);

    while(*word != '\0')
    {
        printf("%c", *word++);
    }
    printf("%s", RESET);
}