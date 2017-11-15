#ifndef PATIENT_H
#define PATIENT_H

#include"Person.h"

namespace person {

	class Patient : public Person {

		int ID;

	public:
		Patient();
		Patient(string, string, int);
		void print();
		friend void input_data(Patient&);
	};

}

#endif
