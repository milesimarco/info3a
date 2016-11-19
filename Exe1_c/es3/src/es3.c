/*
 ============================================================================
 Name        : es3.c
 Author      : Gamba Daniele
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct temp{
	int tmp;
};

typedef struct temp struttura;

int* a(struttura n){
	return &n.tmp;
}

int main(void) {
	struttura b;
	b.tmp = 0;
	printf("%d",*a(b));
	return EXIT_SUCCESS;
}
