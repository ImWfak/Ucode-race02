#include "../inc/header.h"

void mx_check_equal(char *argv[], t_num **numcorv, int *dist, int *exit) {
	int x1 = mx_atoi(argv[2]), y1 = mx_atoi(argv[3]), x2 = mx_atoi(argv[4]), y2 = mx_atoi(argv[5]);

	if ((x1 == x2) && (y1 == y2))
	{
		*dist = 0;
		*exit = 0;
		numcorv[x1][y2].c = '*';
	}
}
