/*
 * studente.c
 *
 *  Created on: 15 nov 2016
 *      Author: jamba
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct student{
	char* nome;
	int* voti;
}* Studente;

Studente makeStudent(char* nome){
	Studente p = malloc(sizeof(Studente));
	p->nome = malloc(20*sizeof(char));
	strcpy(p->nome,nome);
	p->voti = calloc(30,sizeof(int));
	return p;
}

char* toString(Studente s){
	char* buffer = malloc(200*sizeof(char));
	//nome: *nome voti: *voti, media
	sprintf(buffer, "Nome: %s, Voti: ", s->nome);

	int sum = 0;
	int i=0;
	while(!(s->voti[i] == 0)){	//da debuggare
		sprintf(buffer+strlen(buffer), "%d ", s->voti[i]);
		sum+=s->voti[i];
		i++;
	}

	sprintf(buffer+strlen(buffer), " Media: %d", (int)sum/(i+1));
	return buffer;
}

void addVoto(Studente s, int x){
	int i = 0;
	while(s->voti[i]!=0){
		i++;
	}
	if(i==30){
		printf("Memoria piena");
	}else{
		s->voti[i]=x;
	}
}
