/*
** EPITECH PROJECT, 2017
** nb_colum.c
** File description:
** return the number of colum
*/

#include "bsq.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

int nb_colum(buffer_t *b)
{
	int fb = open(b->file, O_RDONLY);
	char *map = malloc(sizeof(char) * b->size);
	int count = 0;
	int i = 0;

	read(fb, map, b->size);
	while (map[i] != '\n')
		i++;
	i++;
	while (map[i] != '\n' && map[i] != '\0') {
		i++;
		count++;
	}
	close(fb);
	free(map);
	return (count);
}
