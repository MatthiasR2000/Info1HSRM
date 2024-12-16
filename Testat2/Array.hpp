
#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <string>
using namespace std;


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
//Fürs erste ignorieren
void sortArray(int numbersArray[], const int length) {
	cout << "\nArray sortieren" << endl;
	printArray(numbersArray, length);
	cout << endl;
	for (int i = 0; i < length - 1; i++) {
		int minIndex = i; // Annahme: Der aktuelle Index hat das kleinste Element
		for (int j = i + 1; j < length; j++) {
			if (numbersArray[j] < numbersArray[minIndex]) {
				minIndex = j; // Index des kleineren Elements speichern
			}
		}
		// Tausch des kleinsten Elements mit dem Element an Position i
		int temp = numbersArray[i];
		numbersArray[i] = numbersArray[minIndex];
		numbersArray[minIndex] = temp;
	}
	for (int i = 0; i < length; i++) {
		cout << numbersArray[i] << " ";
	}
}

#define ARRAY_H

#endif //ARRAY_H