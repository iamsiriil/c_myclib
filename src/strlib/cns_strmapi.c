#include "../inc/cns_strlib.h"

char	*cns_strmapi(char const *s, char (*f)(unsigned int, char)) {

	if (s == NULL) return NULL;

	char	*str = malloc(sizeof(char) * (cns_strlen(s) + 1));
	if (!str) return NULL;

	unsigned int	i = 0;
	for (;s[i] != '\0'; i++)
		str[i] = f(i, s[i]);
	str[i] = '\0';

	return str;
}

