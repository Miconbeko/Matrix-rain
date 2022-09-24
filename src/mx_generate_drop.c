#include "../inc/header.h"

bool mx_generate_drop(t_cell ***matrix, int height, int width) {
    const int max_generate_attempts = 10;
    const int min_life = height / 5;
    const int max_life = height - height / 3;

    for (int i = 0; i < max_generate_attempts; i++) {
        int x = mx_rand(0, width - 1);

        if (matrix[0][x]->chr == ' ') {
            matrix[0][x]->chr = mx_rand_char();
            matrix[0][x]->lifes = mx_rand(min_life, max_life);
            matrix[0][x]->is_first = true;
            return true;
        }
    }
    return false;
}
