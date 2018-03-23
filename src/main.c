/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main function
*/

#include "bsq.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	buffer_t *b = malloc(sizeof(buffer_t));

	if (ac != 2 || !b || open(av[1], O_RDONLY) == - 1)
		return (84);
	b = init_struct(av[1], b);
	b = bsq(b);
	show_array(b);
	for (int i = 0; i < b->line; i++)
		free (b->map[i]);
	free(b->map);
	for (long k = 0; k < b->line; k++)
		free(b->array[k]);
	free(b->array);
	free(b);
	return (0);
}
