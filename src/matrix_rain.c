#include "../inc/header.h"

int main(int argc, char *argv[]) {
	int height = 0;
	int width = 0;
	t_cell ***matrix = NULL;

	if(argc == 1){
		mx_ncurses_init();
		mx_print_text();
		getmaxyx(stdscr, height, width);
		matrix = mx_create_matrix(height, width);
		mx_creative(matrix, height, width);
	}	
	else if(argc == 2){
		if(mx_strlen(argv[1]) == 2 
			  && (argv[1])[0] == '-' 
		      && (argv[1])[1] == 's') {
		mx_ncurses_init();
		getmaxyx(stdscr, height, width);
		matrix = mx_create_matrix(height, width);
		mx_rain(matrix, height, width);
		}
	}
	mx_del_matrix(&matrix, height, width);
	endwin();
	return 0;
}
