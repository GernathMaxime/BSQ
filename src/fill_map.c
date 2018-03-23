/*
** EPITECH PROJECT, 2017
** full_map
** File description:
** fill a char ** of the map char
*/

#include "bsq.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

char **fill_map(buffer_t *b)
{
	int fb = open(b->file, O_RDONLY);
	char *buffer = malloc(sizeof(char) * b->size);
	long j = 0;

	read(fb, buffer, b->size);
	b->map = malloc(sizeof(char *) * b->line);
	for (int k = 0; k < b->line; k++)
		b->map[k] = malloc(sizeof(char) * (b->colum + 1));
	while (buffer[j] != '\n')
		j++;
	j++;
	for (int count = 0; count < b->line; count++) {
		for (int i = 0; i <= b->colum; i++) {
			b->map[count][i] = buffer[j];
			j++;
		}
	}
	free(buffer);
	close(fb);
	return (b->map);
}
