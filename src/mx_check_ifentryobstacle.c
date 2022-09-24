#include "../inc/header.h"

void mx_check_ifentryobstacle(char *argv[], char **map) {
	int x1 = mx_atoi(argv[2]), y1 = mx_atoi(argv[3]);
	
	if (map[y1][x1] == '#')
	{
		mx_printerr("entry point cannot be an obstacle\n");
		exit(-1);
	}
}
