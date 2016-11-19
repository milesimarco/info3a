/*
 ============================================================================
 Name        : es_divisibile.c
 Author      : Daniele Gamba
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int divisibile(int num){
	num = num%1000;
	if (num == 0 ) return true;
	int divisione=8;
	while(divisione*8<num){
		divisione++;
	}
	if(divisione*8==num) return 1;
	else return -1;
}

int divisibileAG(int num){
	int last = num%1000;
	if (last == 0) return true;
	return last %8 == 0;
}

/*
int divisibileAG1(int num){
	if (num < 1000) return num%8;
	else return divisibileAG()
	int last = num%1000;
	if (last == 0) return true;
	return last %8 == 0;
}
*/

int div7(int n){
	if (n == 0 || n==-1) return n;
	if(n/100 == 0){
		if(n%7==0) return 0;
		return -1;
	}
	return div7(n/10-(n%10)*2);
}



int main(void) {
	printf("1234 divisibile? %d\n", divisibile(1234));
	printf("4000 ? %d\n", divisibile(4000));
	printf("120840 ? %d\n", divisibile(120840));

	printf("\n\nDiv7 - 0 = true, -1 = false\n");
	printf("7 div 7? %d\n", div7(7));
	printf("8 div 7? %d\n", div7(8));
	printf("95676 div 7? %d\n", div7(95676));
	printf("95677 div 7? %d\n", div7(95677));
	return EXIT_SUCCESS;
}
