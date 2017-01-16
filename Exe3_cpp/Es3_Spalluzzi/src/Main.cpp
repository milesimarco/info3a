/*
 * Main.cpp
 *
 *  Created on: 14 gen 2017
 *      Author: Andrea
 */

#include <iostream>

using namespace std;


class Person {

private:
	string name;
	int age;

public:
	Person(string n, int a) : name(n), age(a) {}
	virtual ~Person() {};

	string getName(){ return name; }
	int getAge() { return age; }


	bool operator >(const Person& p){
		return this->age > p.age;
	}

};

template <typename T>
T maxT(T a, T b){

	if(a > b)
		return a;

	return b;

}

int main(){

	cout << "maxT(3, 5): " << maxT(3, 5) << endl;
	cout << "maxT(3, 5): " << maxT(3.5, 3.4) << endl;

	Person p1("Mario", 20);
	Person p2("Luca", 30);

	Person older = maxT(p1, p2);
	cout << "La persona più vecchia è " << older.getName();

	return 0;
}



