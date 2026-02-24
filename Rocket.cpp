#include "Rocket.h"
#include <iostream>

Rocket::Rocket(std::string name, Booster b, NoseCone n, Fuselage f, Capsule c, Engine e, SolarPanel s, Battery ba){
    this->name = name;
    this->auxiliaryBooster = b;
    this->rocketNose = n;
    this->rocketFuselage = f;
    this->commandCapsule = c;
    this->mainEngine = e;
    this->panelRight = s;
    this->rocketBattery = ba;

    this->parachuteOpen = false;
    this->hasLaunched = false;
    this->boosterJettisoned = false;
    this->fuselageJettisoned = false;
    this->noseJettisoned = false;
    this->engineJettisoned = false;

    this->isLaunched = false;
    this->engineOn = false;
    this->parachuteDeployed = false;

    // Status of the physics
    this->currentHeight = 0.0;       // in m
    this->currentSpeed = 0.0;        // in m/s
    this->currentAcceleration = 0.0; // in m/s^2
    this->currentFuel = rocketFuselage.maxFuel;  // hopefully no error later
    this->currentBatteryCharge = rocketBattery.maxCapacity;// same here
    this->totalMass = mainEngine.mass + commandCapsule.emptyMass + rocketFuselage.emptyMass + rocketFuselage.maxFuel + rocketNose.mass + auxiliaryBooster.totalMass + panelRight.mass + panelLeft.mass + rocketBattery.mass;           // in kg
    this->forceTotal = 0.0;

}

void Rocket::launch(){

}

void Rocket::deployBooster(){

}

void Rocket::deployFuselage(){

}

void Rocket::deployNose(){

}

void Rocket::deployEngine(){

}

void Rocket::deploySolarPanel(){

}

void Rocket::pointPanelToSun(){

}

void Rocket::calculatePowerConsumption(){

}

void Rocket::flyToMoon(){

}

void Rocket::moonPhase(){

}

void Rocket::returnToEarth(){

}

void Rocket::landingSequence(){

}

void Rocket::computePhysics(){

}

std::string Rocket::getStatusReport(){

}