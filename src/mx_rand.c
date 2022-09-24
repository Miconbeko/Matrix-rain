#include "../inc/header.h"

int mx_rand(int min, int max) {
    if (min > max) {
        int temp = max;
        max = min;
        min = temp;
    }
    return (rand() % (max - min + 1) + min);
}
