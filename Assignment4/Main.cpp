#include"Patient.h"

using namespace person;

void menu(int&, Patient&);
void selection(int&, Patient&);
void print_info(Patient);

void main() {

	int choice;
	Patient p;
	do {

		system("cls");

		menu(choice, p);

		system("pause");

	} while (choice != 3);
	return;
}

void menu(int& c, Patient& p) {

	cout << "What would you like to do today?" << endl;
	cout << "\t1 - Input Patient Information" << endl;
	cout << "\t2 - View Patient Information" << endl;
	cout << "\t3 - Exit" << endl;
	cout << "Pleaes Enter Here: ";
	cin >> c;
	selection(c, p);

	return;
}

void selection(int& c, Patient& p)
{
	switch (c)
	{
	case 1:
		input_data(p);
		break;
	case 2:
		print_info(p);
		break;
	case 3:
		system("exit");
		break;
	default:
		cout << "Please enter one of the listed choices.";
		break;
	}

	return;
}

void print_info(Patient p) {

	p.print();

}

namespace person {

	void input_data(Patient& p) {

		cout << "Please enter your first name: " << endl;
		cin >> p.first_name;
		cout << "Please enter your last name: " << endl;
		cin >> p.last_name;
		cout << "Please enter patient ID : " << endl;
		cin >> p.ID;

		return;
	}

}
