#include "../inc/header.h"

t_cell *mx_create_cell() {
    t_cell *cell = malloc(sizeof(*cell));
    cell->chr = ' ';
    cell->lifes = 0;
    cell->is_first = false;

    return cell;
}
