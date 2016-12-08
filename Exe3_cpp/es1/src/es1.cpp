//============================================================================
// Name        : es1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

class Studente{
private:
	string corso;
	string nome;
public:
	virtual string getCorsoStudi(){
		return corso;
	}
	void printName(){
		cout << "Nome: " << nome << endl;
	}
	virtual ~Studente(){}
};

class StudenteLS: public Studente{
};

class StudenteIL: public Studente{
};

int main() {
	Studente a1 = Studente();
	//Studente* a2 = Studente();
	Studente a3 = StudenteLS();
	//Studente* a4 = StudenteLS();
	Studente a5 = StudenteIL();
	//Studente* a6 = StudenteIL();

	//Studente a7 = new Studente();
	Studente* a8 = new Studente();
	//Studente a9 = new StudenteLS();
	Studente* a10 = new StudenteLS();
	//Studente a11 = new StudenteIL();
	Studente* a12 = new StudenteIL();

	//StudenteLS a13 = Studente();
	//StudenteLS a14 = StudenteIL();
	StudenteLS a15 = StudenteLS();
	//StudenteLS a16 = new Studente();
	//StudenteLS a17 = new StudenteIL();
	//StudenteLS a18 = new StudenteLS();
	//StudenteLS* a19 = Studente();
	//StudenteLS* a20 = StudenteIL();
	//StudenteLS* a21 = StudenteLS();
	//StudenteLS* a22 = new Studente();
	//StudenteLS* a23 = new StudenteIL();
	StudenteLS* a24 = new StudenteLS();


	//StudenteIL a25 = Studente();
	StudenteIL a26 = StudenteIL();
	//StudenteIL a27 = StudenteLS();
	//StudenteIL a28 = new Studente();
	//StudenteIL a29 = new StudenteIL();
	//StudenteIL a30 = new StudenteLS();
	//StudenteIL* a31 = Studente();
	//StudenteIL* a31 = StudenteIL();
	//StudenteIL* a33 = StudenteLS();
	//StudenteIL* a34 = new Studente();
	StudenteIL* a35 = new StudenteIL();
	//StudenteIL* a36 = new StudenteLS();

	return 0;
}
