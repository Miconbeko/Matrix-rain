#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>

#define MX_FRAME_DELAY 100000
#define MX_BACKGROUND 1
#define MX_TRAIL 2
#define MX_FIRST_CHAR 3

typedef struct  s_cell {
    char chr;
    int lifes;
    bool is_first;
}               t_cell;

//int main();
t_cell ***mx_create_matrix(int height, int width);
t_cell *mx_create_cell();
void mx_del_cell(t_cell **cell);
void mx_del_matrix(t_cell ****arr, int height, int width);
bool mx_generate_drop(t_cell ***matrix, int width, int height);
int mx_rand(int min, int max);
char mx_rand_char();
void mx_down_drops(t_cell ***matrix, int height, int width);
void mx_print_matrix(t_cell ***matrix, int height, int width);
void mx_printchar(char c);


#endif

