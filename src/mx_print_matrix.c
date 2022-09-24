#include "../inc/header.h"

void mx_print_matrix(t_cell ***matrix, int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int x = 0; x < width; x++) {
            if (matrix[i][x]->is_first == true)
                attron(COLOR_PAIR(MX_FIRST_CHAR));
            else if (matrix[i][x]->chr != ' ')
                attron(COLOR_PAIR(MX_TRAIL));
            else
                attron(COLOR_PAIR(MX_BACKGROUND));
                mvprintw(i, x, &matrix[i][x]->chr);
            if (matrix[i][x]->is_first == true)
                attroff(COLOR_PAIR(MX_FIRST_CHAR));
            else if (matrix[i][x]->chr != ' ')
                attroff(COLOR_PAIR(MX_TRAIL));
            else
                attroff(COLOR_PAIR(MX_BACKGROUND));
        }
    }
}
