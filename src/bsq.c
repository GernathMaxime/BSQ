/*
** EPITECH PROJECT, 2017
** bsq
** File description:
** find the biggest square
*/

#include "bsq.h"
#include <stdlib.h>

int smaller_nb(int **map, int i, int j)
{
	int *tab = malloc(sizeof(int) * 3);
	int minimum;

	tab[0] = map[i - 1][j];
	tab[1] = map[i][j - 1];
	tab[2] = map[i - 1][j - 1];
	minimum = tab[0];
	for (int j = 0; j < 3; j++)
		if (tab[j] < minimum)
			minimum = tab[j];
	free(tab);
	return (minimum);
}

buffer_t *bsq(buffer_t *b)
{
	int i = 0;
	int j = 1;

	while (i < b->line - 1) {
		j = 1;
		i++;
		while (j < b->colum - 1) {
			if (b->map[i][j] != 'o') {
				b->array[i][j] = smaller_nb(b->array, i, j) + 1;
				if (b->array[i][j] > b->max) {
					b->max = b->array[i][j];
					b->i = i;
					b->j = j;
				}
			}
			else
				b->array[i][j] = 0;
			j++;
		}
	}
	return (b);
}
