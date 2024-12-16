
#ifndef STRINGS_H
#define STRINGS_H
#include <iostream>
#include <string>
using namespace std;

bool palindromCheck(std::string palindrom) {
	for (int i = 0; i < palindrom.size() / 2; i++) {
		if (palindrom[i] != palindrom[palindrom.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

void printStringArray(string stringArray[], int length) {
	for (int i = 0; i < length; i++) {
		cout << stringArray[i] << endl;
	}
}

void fillArrayWithText(string stringArray[], int length) {
	string eingabe;
	int counter = 0;
	do {
		cout << "Geben Sie ein Wort an: ";
		if (counter == 0) {
			cin.ignore(); // Eingabepuffer nur beim ersten Mal bereinigen
		}
		getline(cin, eingabe); // Nutze getline für die Eingabe
		stringArray[counter] = eingabe;
		counter++;
	} while (counter < length);

	printStringArray(stringArray, length);
}

#define STRINGS_H

#endif //STRINGS_H