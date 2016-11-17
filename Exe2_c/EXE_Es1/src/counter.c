/*
 * counter.c
 *
 *  Created on: 15 nov 2016
 *      Author: jamba
 */

static counter;

void init(){
	counter=0;
}

void incr(){
	counter++;
}

char* printCounter(){
	char* stringa = malloc(10*sizeof(char));
	sprintf(stringa, "%d", counter);
	return stringa;
}
