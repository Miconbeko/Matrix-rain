#include "../inc/header.h"

void mx_print_creative(t_cell ***matrix, int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int x = 0; x < width; x++) {
            int color = mvinch(i, x) / 256;
            if(color == MX_FIRST_CHAR) {
                color = rand() % 6 + 5;
            }
            if (matrix[i][x]->is_first == true)
                attron(COLOR_PAIR(MX_FIRST_CHAR));
            else if (matrix[i][x]->chr != ' ')
                attron(COLOR_PAIR(color));
            else
                attron(COLOR_PAIR(MX_BACKGROUND));
                mvprintw(i, x, &matrix[i][x]->chr);
            if (matrix[i][x]->is_first == true)
                attroff(COLOR_PAIR(MX_FIRST_CHAR));
            else if (matrix[i][x]->chr != ' ')
                attroff(COLOR_PAIR(color));
            else
                attroff(COLOR_PAIR(MX_BACKGROUND));
        }
    }
}

void mx_creative(t_cell ***matrix, int height, int width) {
    const int drops_per_frame = 2;
    
    while(getch() != 'q') {
		mx_down_drops(matrix, height, width);
		for (int i = 0; i < drops_per_frame; i++)
			mx_generate_drop(matrix, height, width);
		mx_print_creative(matrix, height, width);
		usleep(MX_FRAME_DELAY);
		refresh();
	}
}

