#include"Patient.h"

using namespace person;

Patient::Patient() : Person() {

	ID = 0;

}

Patient::Patient(string fn, string ln, int ID) : Person(fn, ln) {

	this->ID = ID;

}

void Patient::print() {

	Person::print();
	cout << "Patient ID: " << ID << endl;

	return;
}
