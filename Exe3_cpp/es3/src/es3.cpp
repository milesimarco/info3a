//============================================================================
// Name        : es3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
T maxjj(T n1, T n2){
	if(n1 > n2) return n1;
	return n2;
}

int main() {
	int mnum = maxjj(2, 3);
	cout << mnum ;
	return 0;
}
