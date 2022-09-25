#include "../inc/header.h"

void mx_ncurses_init() {
    srand(time(0));
	initscr();
	curs_set(false);
	clear();
	noecho();
	cbreak();
	use_default_colors();
    nodelay(stdscr, true);

    start_color();
	init_color(COLOR_BLACK, 0, 0, 0);
	init_color(COLOR_GREEN, 0, 32767, 0);
	init_pair(MX_BACKGROUND, COLOR_BLACK, COLOR_BLACK);
	init_pair(MX_TRAIL, COLOR_GREEN, COLOR_BLACK);
	init_pair(MX_FIRST_CHAR, COLOR_WHITE, COLOR_BLACK);
}
