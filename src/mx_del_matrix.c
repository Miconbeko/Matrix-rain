#include "../inc/header.h"

void mx_del_matrix(t_cell ****arr, int height, int width) {
    if (arr == NULL)
        return;
    for (int i = 0; i < height; i++) {
        for (int x = 0; x < width; x++)
            mx_del_cell(&(*arr)[i][x]);
        free((*arr)[i]);
        (*arr)[i] = NULL;
    }
    free(*arr);
    *arr = NULL;
}
