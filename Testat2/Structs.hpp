//
// Created by Matthias Roos on 16.12.24.
//

#ifndef STRUCTS_H
#define STRUCTS_H
#include <iostream>
#include <string>
using namespace std;

enum Wochentag {
    Montag,
    Dienstag,
    Mittwoch,
    Donnerstag,
    Freitag,
    Samstag,
    Sonntag
};

// Funktion, die Verhalten basierend auf dem Wochentag ausführt
void verhaltenBasierendAufWochentag(Wochentag tag) {
    switch (tag) {
    case Montag:
        cout << "Montag" << endl;
        break;
    case Dienstag:
        cout << "Dienstag" << endl;
        break;
    case Mittwoch:
        cout << "Mittwoch" << endl;
        break;
    case Donnerstag:
        cout << "Donnerstag" << endl;
        break;
    case Freitag:
        cout << "Freitag" << endl;
        break;
    case Samstag:
        cout << "Samstag" << endl;
        break;
    case Sonntag:
        cout << "Sonntag" << endl;
        break;
    default:
        cout << "Ungültiger Wochentag!" << endl;
        break;
    }
}

// Definition der Struktur Person
struct Person1 {
    string name;
    int age;
    Wochentag lieblingstag;
};

struct Datum {
    int tag;
    int moment;
    int jahr;
};

struct Adresse {
    string strasse;
    int hausnr;
    string stadt;
    long posttlz;
};

struct Person {
    string name;
    Datum geburtstag;
    Adresse wohnort;
};
struct Cat {
    std::string name;
    int alter;
    std::string fellFarbe;
};

void printCat(Cat cat) {
    cout << cat.name << " " << cat.alter << " " << cat.fellFarbe << endl;
}

void giveMeName(Cat cat[], int length) {
    for (int i = 0; i < length; i++) {
        cout << "Gib den Namen für Katze ein: ";
        cin >> cat[i].name;
    }
    for (int i = 0; i < length; i++) {
        cout << cat[i].name << endl;
    }
}

#define STRUCTS_H

#endif //STRUCTS_H