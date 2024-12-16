#include <iostream>
#include <array>
#include <string>
#include "Structs.hpp"
#include "Array.hpp"
#include "Strings.hpp"
#include "Rekursion.hpp"

using namespace std;

/*
Funktionen werden deklariert damit er bei Runtime weiß dass es Sie gibt
Der Eigentliche Code ist in den Header Dateien weil es sonst zu unübersichtlich wird
*/

void mainArrayBefehle();
void mainStringBefehle();
void mainRekursionBefehle();
void mainStructBefehle();
void mainPointerBefehle();

int main() {
	int eingabe = 0;
	while (true) {
		cout << "\n=====================================\n"
			<< "Benutzeroberflaeche      \n"
			<< "=====================================\n"
			<< "0.Programm beenden\n"
			<< "1.Array Aufgaben\n"
			<< "2.String Aufgaben\n"
			<< "3.Rekursion\n"
			<< "4.Structs\n"
			<< "5.Pointers\n"
			<< "=====================================\n"
			<< "Bitte waehlen Sie: " << endl;

		cout << "Auswahl: ";
		cin >> eingabe;
		switch (eingabe) {
		case 0:
			cout << "\nWird beendet\n" << endl;
			return 0;
			break;
		case 1:
			mainArrayBefehle();
			break;
		case 2:
			mainStringBefehle();
			break;
		case 3:
			mainRekursionBefehle();
			break;
		case 4:
			mainStructBefehle();
			break;
		case 5:
			mainPointerBefehle();
			break;
		default:
			cout << "\nFalsche Eingabe!\n" << endl;
			break;
		}
	}
	return 0;
}

//Initialisierung der Funktionen

//Funktionen die die Basics über Arrays vermitteln
void mainArrayBefehle() {

	const int length = 5;
	int numberArray[length];
	int numberArray2[length] = { 1,2,3,4,5 };
	//printArray(numberArray, length); Kein Wert initialisiert also kommen random Werte die im Speicher liegen
	fillArray(numberArray);
	cout << "\nNormale For Schleife: ";
	printArray(numberArray, length);
	cout << "\nFor each Schleife: ";
	for (int number : numberArray2) {
		cout << number << " ";
	}
	cout << endl;
	cout << "\nGroesste Nummer im Array ist: " << biggestNumber(numberArray, length) << endl;
	cout << "Kleinste Zahl im Array ist: " << smallestNumber(numberArray, length) << endl;
	cout << "Mittelwert des Arrays: " << mittelwert(numberArray, length) << endl;
	sortArray(numberArray, length);
}


void mainStringBefehle() {
	string stringArray[5];
	string palindrom;
	const int length = 5;
	fillArrayWithText(stringArray, length);
	cout << "\nGeben sie ein Palindrom zum Beisppiel otto an: ";
	cin >> palindrom;
	cout << "\nDas Angegebene Wort ist Palindrom? 1/0 -> true/false: " << palindromCheck(palindrom) << endl;
}

void mainRekursionBefehle() {
	cout << rekursion(7) << endl;
	cout << "Fakultaet rekursiv: " << fakultaet(3) << endl;
}

void mainStructBefehle() {
	const int length = 2;
	Cat cat2;
	Cat cat3;
	Cat cats[length] = { cat2, cat3 };
	giveMeName(cats, length);
	Cat cat1 = { "bert",4,"blau" };
	cout << cat1.name << endl;
	cout << cat1.alter << endl;
	cat1.alter = cat1.alter + 1;
	cout << cat1.alter << endl;
	printCat(cat1);
	// Array von Person-Strukturen
	Person1 people[3] = {
		{"Alice", 30, Montag},
		{"Bob", 25, Freitag},
		{"Charlie", 35, Sonntag}
	};

	// Ausgabe der Informationen und des Verhaltens basierend auf dem Lieblingstag
	for (int i = 0; i < 3; i++) {
		cout << "Name: " << people[i].name << ", Alter: " << people[i].age << ", Lieblingstag: ";
		verhaltenBasierendAufWochentag(people[i].lieblingstag);
	}

	Person einwohner[3] = { {"Alice", {1, 1, 1990}, {"Hauptstrasse", 1, "Berlin", 10115}}, {"Bob", {2, 2, 1985}, {"Nebenstrasse", 2, "Hamburg", 20095}}, {"Charlie", {3, 3, 1975}, {"Ringstrasse", 3, "München", 80331}} }; // Zugriff auf die Stadt des 2. Einwohners cout << "Stadt des 2. Einwohners: " << einwohner[1].wohnort.stadt << endl; // Zugriff auf die Daten des 2. Einwohners Person p = einwohner[1]; Adresse a = p.wohnort; string s = a.stadt; cout << "Stadt des 2. Einwohners (über Variable): " << s <<
}

void mainPointerBefehle() {
	cout << "Kommt noch" << endl;
}