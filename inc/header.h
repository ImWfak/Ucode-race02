#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct s_num {
	char c;
	int i;
	int is;
}		t_num;

void mx_check(int argc, char *argv[]);
void mx_check_ifopen(int fd, int byte);
bool mx_check_ifrectangular(char *argv[]);
bool mx_check_ifforbch(char *argv[]);
void mx_printerr(const char *s);
int mx_strlen(const char *s);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_check_ifout(char *argv[]);
char **mx_file_to_str(const char *filename, int *row, int *column);
void mx_check_ifentryobstacle(char *argv[], char **map);
void mx_check_ifexitobstacle(char *argv[], char **map);
void mx_check_equal(char *argv[], t_num **numcorv, int *dist, int *exit);
t_num **mx_create_numcorv(char **map, int row, int column);
void mx_result(t_num **numcorv, int dist, int exit, int *arr);
int mx_find_way(t_num **numcorv, int *arr);
void mx_replace(t_num **numcorv, int x, int y);


#endif
