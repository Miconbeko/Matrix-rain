#include "../inc/header.h"

void mx_del_cell(t_cell **cell) {
    if (cell == NULL)
        return;
    free(*cell);
    *cell = NULL;
}
