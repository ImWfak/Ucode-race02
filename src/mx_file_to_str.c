#include "../inc/header.h"

char **mx_file_to_str(const char *filename, int *row, int *column) {
	int fd, len = 0, bytes, countl = 0;
	char c;

	fd = open(filename, O_RDONLY);
	
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
		len++;
	}
	
	len /= countl;
	*row = countl;
	*column = len;
	close(fd);
	
	char **res = (char**)malloc((countl + 1) * sizeof(char*));
	
	res[countl] = NULL;
	fd = open(filename, O_RDONLY);
	
	for (int i = 0; i < countl; i++)
	{
		res[i] = (char*)malloc((len + 1) * sizeof(char));
		res[i][len] = '\0';
	}
	
	for (int i = 0; i < countl; i++)
	{
		for (int j = 0; j < len; j++)
		{
			read(fd, &c, sizeof(c));
			res[i][j] = c;
			read(fd, &c, sizeof(c));
		}
	}
	
	close(fd);
	
	return res;
}

