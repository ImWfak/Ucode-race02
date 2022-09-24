#include "../inc/header.h"

void mx_check_ifout(char *argv[]) {
	int fd = open(argv[1], O_RDONLY), bytes;
	int countw = 0, countl = 0;
	char c;
	
	if (mx_atoi(argv[2]) < 0 || mx_atoi(argv[3]) < 0
	    || mx_atoi(argv[4]) < 0 || mx_atoi(argv[5]) < 0)
	{
		mx_printerr("points are out of map range\n");
		exit(-1);
	}
	
	while ((bytes = read(fd, &c, sizeof(c))) > 0)
	{
		if (c == ',')
		{
			continue;
		}
		else if (c == '\n')
		{
			countl++;
			continue;	
		}	
		countw++;
	}
	
	countw /= countl;
	countw--;
	countl--;
	
	if (mx_atoi(argv[2]) > countw || mx_atoi(argv[4]) > countw
	    || mx_atoi(argv[3]) > countl || mx_atoi(argv[5]) > countl)
	{
		mx_printerr("points are out of map range\n");
		exit(-1);
	}
	
	close(fd);
}
