#ifndef _COLORS_H_
#define _COLORS_H_

#define BLA 'B'
#define R 'r'
#define GR 'g'
#define YEL 'y'
#define BLU 'b'
#define MAG 'm'
#define CY 'c'
#define WHI 'w'

#define COLOR_LENGTH 7
#define BLACK "\x1b[30m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define WHITE "\x1b[37m"
#define RESET "\x1b[0m"

extern void redColor(char* word, char color);

#endif