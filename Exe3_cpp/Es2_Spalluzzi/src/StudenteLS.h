/*
 * StudenteLS.h
 *
 *  Created on: 13 gen 2017
 *      Author: Andrea
 */

#ifndef SRC_STUDENTELS_H_
#define SRC_STUDENTELS_H_


#include <iostream>
#include "Studente.h"

using namespace std;

class StudenteLS : protected Studente {

public:
	StudenteLS(string);
	virtual ~StudenteLS();

	virtual string getCorsoStudi();
	string getNome();

};

#endif /* SRC_STUDENTELS_H_ */
