#include "../inc/header.h"

bool mx_check_ifrectangular(char *argv[]) {
	int fd, countw = 0, countl = 0, bytes, temp;
	char c;

	fd = open(argv[1], O_RDONLY);

	while ((bytes = read(fd, &c, sizeof(c))) > 0)
	{
		if (c == '\n')
		{
			if (countl > 0)
			{
				if (temp != countw)
				{
					return 1;
				}
			}	
			temp = countw;
			countl++;
			countw = 0;
			continue;
		}
		countw++;
	}
	close(fd);

	return 0;
}
