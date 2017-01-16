/*
 * Studente.cpp
 *
 *  Created on: 13 gen 2017
 *      Author: Andrea
 */

#include "Studente.h"

Studente::Studente(string n) : nome(n) { }

Studente::~Studente() { }

string Studente::getCorsoStudi() {
	return "Studente";
}

string Studente::getNome() { return "Studente " + nome; }
