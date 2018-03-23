/*
** EPITECH PROJECT, 2017
** nb_line
** File description:
** return the nb of line
*/

#include "bsq.h"
#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int nb_line(char *file)
{
	int fb = open(file, O_RDONLY);
	static char map[6];
	static char line[6];
	int i = 0;

	line[5] = '\0';
	read(fb, map, 6);
	while (map[i] != '\n') {
		line[i] = map[i];
		i++;
	}
	close(fb);
	return (my_atoi(line));
}
