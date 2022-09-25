#include "../inc/header.h"

void mx_print_text(){
	char *intro[] = {
		"Wake up , Neo..",
		"The Matrix has you..",
		"Follow the white rabbit",
		"Knock, knock, Neo"
	};
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < mx_strlen(intro[i]); j++){
			mvaddch(4, 2 + j, intro[i][j] | COLOR_PAIR(2));
			refresh();
			usleep(MX_FRAME_DELAY);
		}
		clear();
        usleep(MX_FRAME_DELAY);
	}
}

