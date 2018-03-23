/*
** EPITECH PROJECT, 2017
** my_atoi.c
** File description:
** take a char and return a int
*/

int my_atoi(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j]) {
		if (str[j] >= '0' && str[j] <= '9')  {
			i = i * 10;
			i = i + str[j] - 48;
		}
		else
			return (i);
		j++;
	}
	return (i);
}
