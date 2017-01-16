/*
 * Main.cpp
 *
 *  Created on: 13 gen 2017
 *      Author: Andrea
 */

#include <iostream>

#include "StudenteIL.h"
#include "StudenteLS.h"

using namespace std;

int main(){

	//------------ Normale --------------------------

	Studente s = Studente("Mario");
	Studente sil = StudenteIL("Giovanni");
	Studente sls = StudenteLS("Luca");


//  StudenteIL ils = Studente("Mario");
	StudenteIL ilil = StudenteIL("Giovanni");
	//StudenteIL ills = StudenteLS("Luca");


//	StudenteLS lss = Studente("Mario");
//	StudenteLS lsil = StudenteIL("Giovanni");
	StudenteLS lsls = StudenteLS("Luca");

	// ---------------Puntatori---------------------------


	Studente* ps = new Studente("Mario");
	Studente* psil = new StudenteIL("Giovanni");
	Studente* psls = new StudenteLS("Luca");


//	StudenteIL* pils = new Studente("Mario");
	StudenteIL* pilil = new StudenteIL("Giovanni");
	//StudenteIL* pills = new StudenteLS("Luca");


//	StudenteLS* plss = new Studente("Mario");
//	StudenteLS* plsil = new StudenteIL("Giovanni");
	StudenteLS* plsls = new StudenteLS("Luca");


	cout << "------- Confronto Metodo Virtual getCorsoStudi() e metodo Non Virtual getNome() -----" << endl;



	cout << s.getCorsoStudi() << endl;
	cout << s.getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	cout << sil.getCorsoStudi() << endl;
	cout << sil.getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	cout << sls.getCorsoStudi() << endl;
	cout << sls.getNome() << endl;
	cout << "---------------------------------------------------" << endl;



	//cout << ils.getCorsoStudi() << endl;
	//cout << ils.getNome() << endl;

	cout << ilil.getCorsoStudi() << endl;
	cout << ilil.getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	//cout << ills.getCorsoStudi() << endl;
	//cout << ills.getNome() << endl;
	cout << "---------------------------------------------------" << endl;


	//cout << lss.getCorsoStudi() << endl;
	//cout << lss.getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	//cout << lsil.getCorsoStudi() << endl;
	//cout << lsil.getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	cout << lsls.getCorsoStudi() << endl;
	cout << lsls.getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	cout << "------------- Puntantori -----------------------------" << endl;

	cout << ps->getCorsoStudi() << endl;
	cout << ps->getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	cout << psil->getCorsoStudi() << endl;
	cout << psil->getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	cout << psls->getCorsoStudi() << endl;
	cout << psls->getNome() << endl;
	cout << "---------------------------------------------------" << endl;


	cout << "---------------------------------------------------" << endl;


//	cout << pils->getCorsoStudi() << endl;
//	cout << pils->getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	cout << pilil->getCorsoStudi() << endl;
	cout << pilil->getNome() << endl;
	cout << "---------------------------------------------------" << endl;

//	cout << pills->getCorsoStudi() << endl;
//	cout << pills->getNome() << endl;
	cout << "---------------------------------------------------" << endl;


//	cout << plss->getCorsoStudi() << endl;
//	cout << plss->getNome() << endl;
	cout << "---------------------------------------------------" << endl;

//	cout << plsil->getCorsoStudi() << endl;
//	cout << plsil->getNome() << endl;
	cout << "---------------------------------------------------" << endl;

	cout << plsls->getCorsoStudi() << endl;
	cout << plsls->getNome() << endl;
	cout << "---------------------------------------------------" << endl;



	return 0;

}


