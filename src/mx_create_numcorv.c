#include "../inc/header.h"

t_num **mx_create_numcorv(char **map, int row, int column) {
	t_num **numcorv = (t_num**)malloc((row + 1) * sizeof(t_num*));
	numcorv[row] = NULL;
	
	for (int i = 0; i < row; i++)
	{
		numcorv[i] = (t_num*)malloc((column + 1) * sizeof(t_num));
		numcorv[column] = NULL;
	}
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			numcorv[i][j].c = map[i][j];
			numcorv[i][j].is = 0;
			if (map[i][j] == '#')
			{
				numcorv[i][j].i = -1;
			}
			else numcorv[i][j].i = 0;
		}
	}
	
	return numcorv;
}
