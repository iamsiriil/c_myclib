#include "../inc/stdlib.h"

void	ft_putendl_fd(char *s, int fd)
{
	for (; *s != '\0'; s++)
		write(fd, s, 1);

	write(fd, "\n", 1);
}
