#include"Person.h"

using namespace person;

Person::Person() {

	first_name = "";
	last_name = "";

}

Person::Person(string fn, string ln) {

	first_name = fn;
	last_name = ln;

}

void Person::print() {

	cout << "Patient First Name: " << first_name << endl;
	cout << "Patient Last Name: " << last_name << endl;

	return;
}
