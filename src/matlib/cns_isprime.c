#include "../../inc/cns_matlib.h"

int	cns_isprime(int nbr) {

	if (nbr <= 1) return 0;

	for (int i = 2; i <= nbr / i; ++i) {
		if (nbr % i == 0) return 0;
	}

	return 1;
}

