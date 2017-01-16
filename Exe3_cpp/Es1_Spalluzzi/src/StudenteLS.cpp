/*
 * StudenteLS.cpp
 *
 *  Created on: 13 gen 2017
 *      Author: Andrea
 */

#include "StudenteLS.h"

StudenteLS::StudenteLS(string n) : Studente(n) { }

StudenteLS::~StudenteLS() { }

string StudenteLS::getCorsoStudi() { return "Studente LS";  }

string StudenteLS::getNome() { return "Studente LS " + nome; }

