#include "../inc/cns_strlib.h"

void	*cns_memchr(const void *s, int c, size_t n) {

	for (size_t i = 0; i < n; i++) {
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (void *)(s + i);
	}
	return NULL;
}

