/*
 * Studente.h
 *
 *  Created on: 13 gen 2017
 *      Author: Andrea
 */

#ifndef SRC_STUDENTE_H_
#define SRC_STUDENTE_H_

#include <iostream>


using namespace std;

class Studente {

private:
	string nome;

public:
	Studente(string);
	virtual ~Studente();

	string virtual getCorsoStudi();
	string getNome();

	string saluta();

};

#endif /* SRC_STUDENTE_H_ */
