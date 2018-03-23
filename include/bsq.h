/*
** EPITECH PROJECT, 2017
** bsq.h
** File description:
** proto struct
*/

#ifndef BSQ_H_
# define BSQ_H_

typedef struct buffer_s
{
	char *file;
	char *buffer;
	int fb;
	int colum;
	long size;
	int line;
	char **map;
	int **array;
	int max;
	int i;
	int j;
}buffer_t;

buffer_t *init_struct(char *file, buffer_t *buffer);
int nb_colum(buffer_t *b);
int nb_line(char *file);
char **fill_map(buffer_t *b);
int **creat_array(buffer_t *b);
buffer_t *bsq(buffer_t *b);
void show_array(buffer_t *b);

#endif /* !BSQ_H_ */
