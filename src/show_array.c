/*
** EPITECH PROJECT, 2017
** show_array.c
** File description:
** print x for the square
*/

#include "bsq.h"
#include <unistd.h>

buffer_t *spe_case(buffer_t *b)
{
	for (int i = 0; i <= b->line - 1; i++) {
		for (int j = 0; j <= b->colum - 1; j++) {
			if (b->map[i][j] == '.') {
				b->map[i][j] = 'x';
				return (b);
			}
		}
	}
	return (b);
}

void show_array(buffer_t *b)
{
	int i = 0;
	int j = 0;

	if (b->line == 1 || b->colum == 1) {
		b = spe_case(b);
		for (int k = 0; k < b->line; k++) {
			write(1, b->map[k], b->colum + 1);
		}
		return;
	}
	if (b->max == 1)
		b->max += 1;
	while (i < b->max) {
		j = 0;
		while (j < b->max) {
			b->map[b->i - i][b->j - j] = 'x';
			j++;
		}
		i++;
	}
	for (int k = 0; k < b->line; k++) {
		write(1, b->map[k], b->colum + 1);
	}
}
