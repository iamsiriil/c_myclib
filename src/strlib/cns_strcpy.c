#include "../inc/cns_strlib.h"

char	*cns_strcpy(char *dst, const char *src) {

	size_t	i;

	for (i = 0; src[i] != '\0'; i++)
		dst[i] = src[i];
	dst[i] = '\0';

	return dst;
}

