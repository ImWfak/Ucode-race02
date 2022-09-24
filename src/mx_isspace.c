#include "../inc/header.h"
#include <stdbool.h>

bool mx_isspace(char c);

bool mx_isspace(char c) {
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f'
	    || c == '\v') {
		return 1;
	} 
	else {
		return 0;
	}
}

