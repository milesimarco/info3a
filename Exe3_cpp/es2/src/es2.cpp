//============================================================================
// Name        : es2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
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

class StudenteLS: private Studente{
};



int main() {
	StudenteLS* s = new StudenteLS();
	//s->printName();
	return 0;
}
