#ifndef ASTRONAUT_H
#define ASTRONAUT_H

#include <iostream>

class Astronaut {
private:
    std::string name;
    int age;
    double weight;
    std::string profession;
    // vital stats
    double health;
    double oxygen;
    bool isAlive;

public:
    // Function prototypes
    Astronaut(std::string n, int a, double w, std::string p); // constructor

    void eat();
    void work();
    void statusReport();
    void report_status();
    std::string getName();
    int getAge();
    double getWeight();
    std::string getProfession();
    bool getIsAlive();
    double getHealth();
    double getOxygen();
    void setHealth(double newValue);
    void setOxygen(double newValue);

};

#endif