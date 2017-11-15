#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>

using namespace std;

namespace person {

	class Person {
	protected:
		string first_name, last_name;

	public:
		Person();
		Person(string, string);
		void print();
		
	};

}

#endif
