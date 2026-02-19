#include "Astronaut.h" //Verbindet diese Datei mit dem Header
#include <iostream>

// Implementierung des Konstruktors
Astronaut::Astronaut(std::string n, int a, double g, std::string b) {
        name = n;
        alter = a;
        gewicht = g;
        beruf = b;
        //standartwerte
        gesundheit = 100.0;
        sauerstoff = 100.0;
        lebt_noch = true;
}

// Implementierung der Methoden
void Astronaut::essen(){
       if(lebt_noch){
        gesundheit += 10;
        if (gesundheit > 100){
            gesundheit = 100;
        }
       } else {
        cout << "Astronaut namens:" << name << " kann nicht essen da er tot ist." << '\n';
       }
    }


void Astronaut::arbeiten(){
        if(lebt_noch){
            sauerstoff -=5;
            gesundheit -=2;
            cout << name << " arbeitet!" << std::endl;
            report_status();
        }
    }


void Astronaut::report_status(){
        if(gesundheit <=0 || sauerstoff <= 0) {
            lebt_noch = false;
            cout << name << "ist seben gestorben. O2:" << sauerstoff << "|HP:" << gesundheit << std::endl;
        } 
        }

// Getter (um Daten sicher auszulesen)
    std::string Astronaut::getName() { return name; }
    int Astronaut::getalter() {return alter; }
    double Astronaut::getgewicht() {return gewicht; }
    std::string Astronaut::getberuf() {return beruf; }
    bool Astronaut::getisAlive() { return lebt_noch; }
    double Astronaut::getGesundheit() {return gesundheit;}
    double Astronaut::getSauerstoff() {return sauerstoff;}
    
    void Astronaut::statusBericht() {
        cout << "--- ASTRONAUTEN LOG ---" << std::endl;
        cout << "Name: " << name << " [" << beruf << "]" << std::endl;
        cout << "HP: " << gesundheit << "% | O2: " << sauerstoff << "%" << std::endl;
        cout << "Status: " << (lebt_noch ? "LEBENDIG" : "TOT") << std::endl;
        cout << "-----------------------" << std::endl;
    }
    //setter
    void Astronaut::setGesundheit(double neuerWert) {
        if (neuerWert > 100) {
            gesundheit = 100; // Obergrenze
        } else if (neuerWert < 0) {
            gesundheit = 0;   // Untergrenz
        } else {
            gesundheit = neuerWert; // Wert übernehmen
        }
    }

    void Astronaut::setSauerstoff(double neuerWert) {
        if (neuerWert > 100) {
            sauerstoff = 100; // Obergrenze
        } else if (neuerWert < 0) {
            sauerstoff = 0;   // Untergrenz
        } else {
            sauerstoff = neuerWert; // Wert übernehmen
        }
    }