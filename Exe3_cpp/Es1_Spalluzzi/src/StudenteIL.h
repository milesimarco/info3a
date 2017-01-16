/*
 * StudenteIL.h
 *
 *  Created on: 13 gen 2017
 *      Author: Andrea
 */

#ifndef SRC_STUDENTEIL_H_
#define SRC_STUDENTEIL_H_

#include <iostream>
#include "Studente.h"

using namespace std;

class StudenteIL : public Studente{

public:
	StudenteIL(string);
	virtual ~StudenteIL();

	virtual string getCorsoStudi();
	string getNome();
};

#endif /* SRC_STUDENTEIL_H_ */
