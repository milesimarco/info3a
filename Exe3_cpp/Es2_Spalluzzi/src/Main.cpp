/*
 * Main.cpp
 *
 *  Created on: 13 gen 2017
 *      Author: Andrea
 */

#include <iostream>
#include "StudenteLS.h"

using namespace std;

int main(){


	Studente s("Mario");

	cout << s.getCorsoStudi() << endl;
	cout << s.getNome() << endl;
	cout << s.saluta() << endl;

	StudenteLS ls("Giovanni");

	cout << ls.getCorsoStudi() << endl;
	cout << ls.getNome() << endl;
	cout << ls.saluta() << endl;


//	Studente sls = StudenteLS("Mario");
//	Studente* psls = new StudenteLS("Mario");

	return 0;
}


