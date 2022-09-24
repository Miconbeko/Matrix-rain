#include "../inc/header.h"

void mx_down_drops(t_cell ***matrix, int height, int width) {
    if (matrix == NULL)
        return;
    for (int i = height - 1; i >= 0 ; i--) {
        for (int x = 0; x < width; x++) {
            if (matrix[i][x]->is_first == true) {
                if (i != height - 1) {
                    matrix[i + 1][x]->chr = mx_rand_char();
                    matrix[i + 1][x]->lifes = matrix[i][x]->lifes;
                    matrix[i + 1][x]->is_first = true;
                }
                matrix[i][x]->is_first = false; 
            }
            else if(matrix[i][x]->lifes > 0) {
                matrix[i][x]->lifes = matrix[i][x]->lifes - 1;
            }
            else if(matrix[i][x]->lifes == 0){
                matrix[i][x]->chr = ' ';
            }
        }
    }
}
