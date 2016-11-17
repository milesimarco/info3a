/*
 * studente.h
 *
 *  Created on: 15 nov 2016
 *      Author: jamba
 */

#ifndef STUDENTE_H_
#define STUDENTE_H_

typedef struct student* Studente;

Studente makeStudent(char* nome);
char* toString(Studente s);
void addVoto(Studente s, int x);


#endif /* STUDENTE_H_ */
