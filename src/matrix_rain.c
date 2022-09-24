#include "../inc/header.h"

int main() { //двухмерный массив указателей, 
	const int drops_per_frame = 2;
	int height;
	int width;
	t_cell ***matrix = NULL;

	srand(time(0));
	initscr();
	curs_set(false);
	clear();
	noecho();
	cbreak();
	use_default_colors();

	start_color();
	init_color(COLOR_BLACK, 0, 0, 0);
	init_color(COLOR_GREEN, 0, 32767, 0);
	init_pair(MX_BACKGROUND, COLOR_BLACK, COLOR_BLACK);
	init_pair(MX_TRAIL, COLOR_GREEN, COLOR_BLACK);
	init_pair(MX_FIRST_CHAR, COLOR_WHITE, COLOR_BLACK);

	getmaxyx(stdscr, height, width);
	//matrix = mx_create_matrix(height, width);
	matrix = malloc(height * sizeof(**matrix));
    if (matrix == NULL)
        return 0;

    for (int i = 0; i < height; i++) {
        matrix[i] = malloc(width * sizeof(*matrix));
        if (matrix[i] == NULL)
            return 0;
        for (int x = 0; x < width; x++) {
            matrix[i][x] = mx_create_cell();
            if (matrix[i][x] == NULL)
                return 0;
        }
    }
	while(1) {
		mx_down_drops(matrix, height, width);
		for (int i = 0; i < drops_per_frame; i++)
			mx_generate_drop(matrix, height, width);
		mx_print_matrix(matrix, height, width);
		usleep(MX_FRAME_DELAY);
		refresh();
		// if (getch() == 'q')
		// 	break;
	}
	mx_del_matrix(&matrix, height, width);
	endwin();

	return 0;
}
