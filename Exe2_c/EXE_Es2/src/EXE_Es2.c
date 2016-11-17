/*
 ============================================================================
 Name        : EXE_Es2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "studente.h"

int main(void) {
	char* nome = "Daniele";
	Studente s = makeStudent(nome);
	printf("%s", toString(s));

	addVoto(s, 18);
	printf("%s", toString(s));

	return EXIT_SUCCESS;
}
