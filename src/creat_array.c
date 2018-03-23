/*
** EPITECH PROJECT, 2017
** creat_array
** File description:
** fill the int array of 1 and 0
*/

#include "bsq.h"
#include <stdlib.h>

int **creat_array(buffer_t *b)
{
	b->array = malloc(sizeof(int *) * b->line);
	for (long k = 0; k < b->line; k++)
		b->array[k] = malloc(sizeof(int) * b->colum);

	for (int j = 0; j < b->colum; j++) {
		if (b->map[0][j] == '.')
			b->array[0][j] = 1;
		else
			b->array[0][j] = 0;
	}
	for (int i = 1; i < b->line; i++) {
		if (b->map[i][0] == '.')
			b->array[i][0] = 1;
		else
			b->array[i][0] = 0;
	}
	return (b->array);
}
