#include "../inc/header.h"

void mx_result(t_num **numcorv, int dist, int exit, int *arr) {
	int fd;

	printf("%s=%i\n", "dist", dist);
	printf("%s=%i\n", "exit", exit);
	
	for (int i = 0; i < arr[0]; i++)
	{
		for (int j = 0; j < arr[1]; j++)
		{
			if (numcorv[i][j].i == dist + 1)
			{
				if (numcorv[i][j].is == 1)
				{
					numcorv[i][j].c = 'X';
				}
				else numcorv[i][j].c = 'D';
			}
		}
	}
	
	fd = open("path.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	
	for (int i = 0; i < arr[0]; i++)
	{
		for (int j = 0; j < arr[1]; j++)
		{
			write(fd, &numcorv[i][j].c, sizeof(numcorv[i][j].c));
		}
		write(fd, "\n", 1);
	}
	
	close(fd);
}
