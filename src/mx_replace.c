#include "../inc/header.h"

void mx_replace(t_num **numcorv, int x, int y) {
	numcorv[y][x].c = '*';
	numcorv[y][x].is = 1;

	if (numcorv[y - 1][x].i == numcorv[y][x].i - 1)
	{
		if (numcorv[y - 1][x].i == 1)
		{
			numcorv[y - 1][x].c = '*';
			numcorv[y - 1][x].is = 1;
		}
			mx_replace(numcorv, x, y - 1);
	}
	else if (numcorv[y + 1][x].i == numcorv[y][x].i - 1)
	{
		if (numcorv[y + 1][x].i == 1)
		{
			numcorv[y + 1][x].c = '*';
			numcorv[y + 1][x].is = 1;
		}
		mx_replace(numcorv, x, y + 1);
	}
	else if (numcorv[y][x - 1].i == numcorv[y][x].i - 1)
	{
		if (numcorv[y][x - 1].i == 1)
		{
			numcorv[y][x - 1].c = '*';
			numcorv[y][x - 1].is = 1;
		}
		mx_replace(numcorv, x - 1, y);
	}
	else if (numcorv[y][x + 1].i == numcorv[y][x].i - 1)
	{
		if (numcorv[y][x + 1].i == 1)
		{
			numcorv[y][x + 1].c = '*';
			numcorv[y][x + 1].is = 1;
		}
		mx_replace(numcorv, x + 1, y);
	}

}
