#include "../inc/header.h"

int main(int argc, char *argv[]) {	
	int fd, dist = 0, exit = 0, row = 0, column = 0;
	char c;
	
	mx_check(argc, argv);
	
	int x1 = mx_atoi(argv[2]), y1 = mx_atoi(argv[3]), x2 = mx_atoi(argv[4]), y2 = mx_atoi(argv[5]);
	
	fd = open(argv[1], O_RDONLY);
	int byte = read(fd, &c, sizeof(c));
	mx_check_ifopen(fd, byte);
	close(fd);
	
	if (mx_check_ifrectangular(argv) || mx_check_ifforbch(argv))
	{
		mx_printerr("map error\n");
		return -1;
	}
	
	mx_check_ifout(argv);
	
	char **map = mx_file_to_str(argv[1], &row, &column);
	t_num **numcorv = mx_create_numcorv(map, row, column);
	numcorv[y1][x1].i = 1;
	
	int arr[] = {row, column};
	mx_check_ifentryobstacle(argv, map);
	mx_check_ifexitobstacle(argv, map);
	mx_check_equal(argv, numcorv, &dist, &exit);
	dist = mx_find_way(numcorv, arr);
	if (numcorv[y2][x2].i == 0)
	{
		mx_printerr("route not found\n");
		return -1;
	}
	else
	{
	exit = numcorv[y2][x2].i - 1;
	mx_replace(numcorv, x2, y2);
	mx_result(numcorv, dist, exit, arr);
	}
}


