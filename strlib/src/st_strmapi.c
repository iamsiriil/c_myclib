#include "strlib.h"

char	*st_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if (s == NULL)
		return NULL;
	char	*str = malloc(sizeof(char) * (st_strlen(s) + 1));
	if (!str)
		return NULL;
	unsigned int	i = 0;
	while (s[i]) {
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return str;
}

