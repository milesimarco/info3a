#include <stdio.h>
#include <stdlib.h>

#include "bitvector.h"

int main(void) {
	bitvector bv = makeBitvector(10);

	setBit(bv, 0);
	setBit(bv, 3);
	setBit(bv, 6);
	setBit(bv, 7);
	setBit(bv, 9);

	printf("VETTORE: \t\t%s\n", toString(bv));

	printf("AND (con se stesso): \t%s\n", toString(AND(bv, bv)));
	printf("OR (con vett vuoto): \t%s\n", toString(OR(bv, makeBitvector(10))));
	printf("NOT: \t\t\t%s\n", toString(NOT(bv)));

	delete(bv);

	return EXIT_SUCCESS;
}
