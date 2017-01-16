/*
 * StudenteIL.cpp
 *
 *  Created on: 13 gen 2017
 *      Author: Andrea
 */

#include "StudenteIL.h"

StudenteIL::StudenteIL(string n) : Studente(n) { }

StudenteIL::~StudenteIL() { }

string StudenteIL::getCorsoStudi() { return "Studente IL";  }

string StudenteIL::getNome() { return "Studente IL " + nome; }

