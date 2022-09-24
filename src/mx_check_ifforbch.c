#include "../inc/header.h"

bool mx_check_ifforbch(char *argv[]) {
	int fd, bytes;
	char c;
	
	fd = open(argv[1], O_RDONLY);
	while ((bytes = read(fd, &c, sizeof(c))) > 0)
	{
		if (c != ',' && c != '#' && c != '.' && c != '\n')
		{
			return 1;
		}
	}
	close(fd);

	return 0;
}
