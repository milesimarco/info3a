/*
 ============================================================================
 Name        : es1.c
 Author      : Gamba Daniele
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int HASH_AB;

int hash_nr(char* vett){
	int sum = 0;
	int i = 0;
	while(vett[i]){
		sum+=(int)vett[i]*(i+1);
		i++;
	}
	return sum;
}

int hash_tr(char* vett, int sum, int i){
	if(vett[i]) return hash_tr(vett, sum+(vett[i]*(i+1)), i+1);
	return sum;
}

int hash_rec(char* vett, int i){
	if(vett[i]) return vett[i]*(i+1)+hash_rec(vett, i+1);
	return 0;
}

int main(void) {
	char stringa[3] = "ab\0";
	printf("Hash non ric.: %d\n", hash_nr(stringa));
	printf("Hash con tail rec: %d\n", hash_tr(stringa, 0, 0));
	printf("Hash senza tail rec: %d\n", hash_rec(stringa, 0));
	HASH_AB = hash_rec(stringa, 0);
	return EXIT_SUCCESS;
}
