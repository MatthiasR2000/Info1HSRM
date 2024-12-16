
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

string stringErste5Buchstaben(string test) {
    string wort = test.substr(0, 5);
    return wort;
}

string stringLetztenDreiBuchstaben(string test) {
    string wort = test.substr(test.size() - 3);
    return wort;
}

void istStringImArray(string stringArray[], int len) {
    for (int i = 0; i < len; i++) {
        if (stringArray[0].substr(0, 5) == "Info1") {
            cout << stringArray[0] << "\n";
        }
        if (stringArray[len - 1].substr(0, 5) == "Info1") {
            cout << stringArray[len - 1] << "\n";
        }
    }
}

bool istStringSoEnthalten(string stringArray[], int len) {
    int counter = 0;
    for (int i = 0; i < len; i++) {//Geht durch das string Array von Wort zu Wort jedes mal wird die zweite Schleife aktiviert
        string wort = stringArray[i];
        for (int j = 0; j < wort.size() - 1; j++) {//Geht im Wort von char zu char
            if (wort[j] == 's' && wort[j + 1] == 'o') {
                counter++;
            }
        }
    }
    cout << "\nCounter: " << counter << endl;
    return true;
}
#define STRINGS_H

#endif //STRINGS_H