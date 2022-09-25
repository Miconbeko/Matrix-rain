#include "../inc/header.h"

int main() {
	int height;
	int width;
	t_cell ***matrix = NULL;

	mx_ncurses_init();

	getmaxyx(stdscr, height, width);
	matrix = mx_create_matrix(height, width);
	
	mx_rain(matrix, height, width);

	mx_del_matrix(&matrix, height, width);
	endwin();

	return 0;
}
