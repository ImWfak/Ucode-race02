CC = clang

CFLAG = -std=c11 -Wall -Wextra -Werror -Wpedantic -Iinc -o

all: way_home

way_home:
	$(CC) $(CFLAG) way_home src/*.c

uninstall:
	rm way_home

clean:
	rm -rf src
	rm -rf inc

reinstall:
	make uninstall
	make

