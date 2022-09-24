#include "../inc/header.h"

void mx_check_ifexitobstacle(char *argv[], char **map) {
	int x2 = mx_atoi(argv[4]), y2 = mx_atoi(argv[5]);
	
	if (map[y2][x2] == '#')
	{
		mx_printerr("exit point cannot be an obstacle\n");
		exit(-1);
	}
}
