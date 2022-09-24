#include "../inc/header.h"

void mx_check_ifopen(int fd, int byte) {
	

	if (fd == -1 || byte == 0)
	{
		mx_printerr("map does not exist\n");
		exit(-1);
	}
}
