#include "../inc/header.h"

int mx_find_way(t_num **numcorv, int *arr) {
	int count = 1;

	while (true)
	{
		int check = 1;
		count++;
		for (int i = 0; i < arr[0]; i++)
		{
			for (int j = 0; j < arr[1]; j++)
			{
				if (numcorv[i][j].i == count - 1)
				{
					check = 0;
                    			if (j + 1 < arr[1] && numcorv[i][j + 1].i == 0)
                        			numcorv[i][j + 1].i = count;
                    			if (j - 1 >= 0 && numcorv[i][j - 1].i == 0)
                        			numcorv[i][j - 1].i = count;
                    			if (i + 1 < arr[0] && numcorv[i + 1][j].i == 0)
                        			numcorv[i + 1][j].i = count;
                    			if (i - 1 >= 0 && numcorv[i - 1][j].i == 0)
                    				numcorv[i - 1][j].i = count;
				}
			}
		}
		
		if (check == 1) return count - 3;
	}
	
	return 0;
}
