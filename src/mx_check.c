#include "../inc/header.h"

void mx_check(int argc, char *argv[]) {
	if (argc != 6)
	{
		mx_printerr("usage: ");
		mx_printerr(argv[0]);
		mx_printerr(" [file_name] [x1] [y1] [x2] [y2]\n");
		exit(-1);
	}
}
