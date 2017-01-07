/*
 * anagrafica.h
 *
 *  Created on: 07 gen 2017
 *      Author: dani
 */

#ifndef ANAGRAFICA_H_
#define ANAGRAFICA_H_

#include <map>
#include <vector>
#include <string.h>

using namespace std;

class anagrafica{
private:
	map<string, vector<int> > db;
public:
	anagrafica();
	void insert();
	void elenco();
	void interrogazione();
};

#endif /* ANAGRAFICA_H_ */
