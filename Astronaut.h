#ifndef ASTRONAUT_H  // "Include Guard" - verhindert Fehler beim Kompilieren
#define ASTRONAUT_H

#include <iostream>

using namespace std; 

class Astronaut {
private:
    std::string name;
    int alter;
    double gewicht;
    std::string beruf;
    //vitalwerte
    double gesundheit;
    double sauerstoff;
    bool lebt_noch;


public:
    // Hier stehen nur die Funktions-Köpfe (Prototypen)
    Astronaut(std::string n, int a, double g, std::string b); // Konstruktor
    
    void essen();
    void arbeiten();
    void statusBericht();
    void report_status();
    std::string getName();
    int getalter();
    double getgewicht();
    std::string getberuf();
    bool getisAlive();
    double getGesundheit();
    double getSauerstoff();
    void setGesundheit(double neuerWert);
    void setSauerstoff(double neuerWert);

};

#endif