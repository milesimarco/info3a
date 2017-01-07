/*
 * anagrafica.cpp
 *
 *  Created on: 07 gen 2017
 *      Author: dani
 */

/*
Costruisci l’anagrafica dei voti (interi)  di una classe (con nomi unici) come hash_map come
associazione
             nomi->voti
L'anagrafica ha tre funzioni:
	inserimento - chiedi nome e voto e inserisci il dato
	elenco - stampa elenco nomi, voti
	interrogazione - chiedi il nome e stampa il voto associato
 */

#include <iostream>
#include <map>
#include <vector>
#include <string.h>
#include "anagrafica.h"

using namespace std;

anagrafica::anagrafica(){}

void anagrafica::insert(){
	string nome;
	int voto;
	cout << "Iserisci il nome: ";
	cin >> nome;
	cout << "Inserisci il voto: ";
	cin >> voto;
	db[nome].push_back(voto);
}

void anagrafica::elenco(){
	for(map<string, vector<int> >::iterator iter = db.begin(); iter!=db.end(); iter++){
		cout << "- " << iter->first;
		for(vector<int>::iterator vi = iter->second.begin(); vi!=iter->second.end(); vi++){
			cout << " " << *vi;
		}
		cout << endl;
	}
}

void anagrafica::interrogazione(){	//non ho capito bene a cosa serve
	string nome;
	cout << "Inserisci il nome: ";
	cin >> nome;
	vector<int> stud = db[nome];	//eccezzione non controllata? se non trova nulla?
	for(vector<int>::iterator vi = stud.begin(); vi!=stud(); vi++){
		cout << " " << *vi;
	}
}

