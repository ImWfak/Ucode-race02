#include "../inc/header.h"
#include <stdbool.h>
#include <stdio.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
	int res = 0;
	int count = 0;	
	int rule = 0;
	int sign = 1;
	
	while (str[count] != '\0') {
		if (str[count] == '-')
		{
			sign = -1;
			count++;
			continue;
		}
		if (mx_isdigit(str[count]))
		{
			res += str[count] - 48;
			rule = 1;
		}
		else if (mx_isspace(str[count]))
		{
			if (rule == 0)
			{
				continue;
			} 
			else return sign * res / 10;

		}
		res *= 10;
		count++;
	}
	return sign * res / 10;
}

