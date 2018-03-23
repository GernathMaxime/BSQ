/*
** EPITECH PROJECT, 2017
** init_struct
** File description:
** init all the struct
*/

#include "bsq.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

buffer_t *init_struct(char *file, buffer_t *b)
{
	struct stat sb;

	b->file = file;
	stat(file, &sb);
	b->fb = open(file, O_RDONLY);
	b->max = 0;
	b->j = 0;
	b->i = 0;
	b->size = sb.st_size;
	b->colum = nb_colum(b);
	b->line = nb_line(b->file);
	b->map = fill_map(b);
	b->array = creat_array(b);
	close(b->fb);
	return (b);
}
