#include "Astronaut.h"
#include <iostream>

// Constructor implementation
Astronaut::Astronaut(std::string n, int a, double w, std::string p) {
        name = n;
        age = a;
        weight = w;
        profession = p;
        // default values
        health = 100.0;
        oxygen = 100.0;
        isAlive = true;
}

// Method implementations
void Astronaut::eat(){
       if(isAlive){
        health += 10;
        if (health > 100){
            health = 100;
        }
       } else {
        std::cout << "Astronaut named " << name << " cannot eat because they are dead." << '\n';
       }
    }

void Astronaut::work(){
        if(isAlive){
            oxygen -= 5;
            health -= 2;
            std::cout << name << " is working!" << std::endl;
            report_status();
        }
    }

void Astronaut::report_status(){
        if(health <= 0 || oxygen <= 0) {
            isAlive = false;
            std::cout << name << " has just died. O2:" << oxygen << " | HP:" << health << std::endl;
        }
}

// Getters
std::string Astronaut::getName() { return name; }
int Astronaut::getAge() { return age; }
double Astronaut::getWeight() { return weight; }
std::string Astronaut::getProfession() { return profession; }
bool Astronaut::getIsAlive() { return isAlive; }
double Astronaut::getHealth() { return health; }
double Astronaut::getOxygen() { return oxygen; }

void Astronaut::statusReport() {
    std::cout << "--- ASTRONAUT LOG ---" << std::endl;
    std::cout << "Name: " << name << " [" << profession << "]" << std::endl;
    std::cout << "HP: " << health << "% | O2: " << oxygen << "%" << std::endl;
    std::cout << "Status: " << (isAlive ? "ALIVE" : "DEAD") << std::endl;
    std::cout << "----------------------" << std::endl;
}

// Setters
void Astronaut::setHealth(double newValue) {
    if (newValue > 100) {
        health = 100;
    } else if (newValue < 0) {
        health = 0;
    } else {
        health = newValue;
    }
}

    void Astronaut::setOxygen(double neuerWert) {
        if (neuerWert > 100) {
            oxygen = 100; // Obergrenze
        } else if (neuerWert < 0) {
            oxygen = 0;   // Untergrenz
        } else {
            oxygen = neuerWert; // Wert übernehmen
        }
    }