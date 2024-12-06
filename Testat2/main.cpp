#include <iostream>
#include <array>
using namespace std;

//Funktionen werden deklariert damit er bei Runtime weiß dass es Sie gibt
void printArray(int numbersArray[], int length);
void fillArray(int numbersArray[]);
int biggestNumber(int numbersArray[], int length);
int smallestNumber(int numbersArray[], int length);
double mittelwert(int numbersArray[], int length);
bool palindromCheck(string palindrom);
void printStringArray(string stringArray[], int length);
void fillArrayWithText(string stringArray[], int length);
int rekursion(int y);
int fakultaet(int n);

int main() {

	const int length = 5;
	int numberArray[length];
	int numberArray2[5] = { 1,2,3,4,5 };
	string stringArray[5];
	string palindrom;

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
			break;
		case 2:
			fillArrayWithText(stringArray, length);
			cout << "\nGeben sie ein Palindrom zum Beisppiel otto an: ";
			cin >> palindrom;
			cout << "\nDas Angegebene Wort ist Palindrom? 1/0 -> true/false: " << palindromCheck(palindrom) << endl;
			break;
		case 3:
			cout << rekursion(7) << endl;
			cout << "Fakultaet rekursiv: " << fakultaet(3) << endl;

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

void printArray(int numbersArray[], int length) {
	for (int i = 0; i < length; i++) {
		cout << numbersArray[i] << " ";
	}
}

void fillArray(int numbersArray[]) {
	int eingabe;
	for (int i = 0; i < 5; i++) {
		cout << "Geben sie eine Zahl ein: ";
		cin >> numbersArray[i];
	}
}

int biggestNumber(int numbersArray[], int length) {
	int maxNumber = numbersArray[0];
	for (int i = 0; i < length; i++) {
		if (numbersArray[i] > maxNumber) {
			maxNumber = numbersArray[i];
		}
	}
	return maxNumber;
}

int smallestNumber(int numbersArray[], int length) {
	int smallestNumber = numbersArray[0];
	for (int i = 0; i < length; i++) {
		if (numbersArray[i] < smallestNumber) {
			smallestNumber = numbersArray[i];
		}
	}
	return smallestNumber;
}

double mittelwert(int numbersArray[], int length) {
	double mittelwert = 0;
	int summe = 0;
	for (int i = 0; i < length; i++) {
		summe += i;
	}
	return mittelwert = summe / length;
}

//Funktionen die Primär mit Strings arbeiten

bool palindromCheck(std::string palindrom) {
	for (int i = 0; i < palindrom.size()/2; i++) {
		if (palindrom[i] != palindrom[palindrom.size()-i-1]) {
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
		cin >> eingabe;                 
		stringArray[counter] = eingabe; 
		counter++;
	} while (counter < length); 
	printStringArray(stringArray, length);
}
//Funktionen die Rekursion benutzen
int rekursion(int y) {
	if (y >= 100) {
		return y;  // Rekursion stoppt, wenn y >= 100
	}
	else if (y + y > 100) {
		return y;
	}
	else {
		return rekursion(y + y);  // Verdoppeln und rekursiv weiter aufrufen
	}
}

int fakultaet(int n) {
	// Basisfall: wenn n gleich 0 ist, ist die Fakultät 1
	if (n == 0) {
		return 1;
	}
	else {
		// Rekursiver Fall: n! = n * (n - 1)!
		return n * fakultaet(n - 1);
	}
}

//Funktionen die Pointer benutzen
//Funktionen die alles auf einmal benutzen