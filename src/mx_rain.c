#include "../inc/header.h"

void mx_rain(t_cell ***matrix, int height, int width) {
    const int drops_per_frame = 2;
    
    while(getch() != 'q') {
		mx_down_drops(matrix, height, width);
		for (int i = 0; i < drops_per_frame; i++)
			mx_generate_drop(matrix, height, width);
		mx_print_matrix(matrix, height, width);
		usleep(MX_FRAME_DELAY);
		refresh();
	}
}
