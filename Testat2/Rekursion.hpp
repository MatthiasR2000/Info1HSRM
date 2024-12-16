
#ifndef REKURSION_H
#define REKURSION_H
#include <iostream>
#include <string>
using namespace std;

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

#define REKURSION_H

#endif //REKURSION_H