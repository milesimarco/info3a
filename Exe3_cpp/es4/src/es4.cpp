//============================================================================
// Name        : es4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Scrivi un vettore di interi e riepilo con le prime 10 potenze di 2. Stampale in ordine e in ordine
inverso. Usa gli iterator (tipo for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
*/

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	vector<int> v;

	for(int i = 1; i <= 10; i++){
		v.push_back(pow(2, i));
	}

	for(vector<int>::iterator iter = v.end(); iter!=v.begin(); --iter){
		cout << *iter << " ";	//mi stampa 0 il primo, got no idea why
	}
	return 0;
}
