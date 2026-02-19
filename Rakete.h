#ifndef RAKETE_H
#define RAKETE_H

#include <iostream>

struct Engine{
    std::string designation;
    double thrust; // N
    double consumption; // kg/s
    double mass; // kg
};

struct Capsule{
    std::string type;
    double emptyMass; // weight without crew and supplies
    int maxCrew; // max crew
    double heatShieldCondition; // 100 optimal, 0 -> destroyed
    bool hasParachute;
};

struct Fuselage{
    std::string material;
    double emptyMass; // weight without fuel
    double maxFuel; // kg
};

struct NoseCone{
    double dragCoefficient; // Cw
    double frontalArea; // A
    double mass; // kg
    double aerodynamicFactor; // reduce drag
    bool isJettisonable; // can be dropped in space
};

struct Booster{
    double thrust; // N
    double totalMass; // incl. fuel
    double burnTime; // seconds
    bool isActive;
};

struct SolarPanel{
    std::string model;
    double mass; // kg
    double area; // m^2
    double efficiency; // panel efficiency
    // power logic
    double angleToSun; // 0° ideal, 90° no power
    bool isDeployed; // folded at launch
    bool isBroken;
};

struct Battery{
    double maxCapacity;
    double currentCharge;
    double baseConsumption;
};

class Rocket{
    private:
    std::string name;
    Booster auxiliaryBooster;
    NoseCone rocketNose;
    Fuselage rocketFuselage;
    Capsule commandCapsule;
    Engine mainEngine;
    SolarPanel panelRight;
    SolarPanel panelLeft;
    Battery rocketBattery;

    double massTotal;
    double forceTotal;

    bool parachuteOpen;
    bool hasLaunched;
    bool boosterJettisoned;
    bool fuselageJettisoned;
    bool noseJettisoned;
    bool engineJettisoned;

    public:
    Rocket(std::string name, Booster b, NoseCone n, Fuselage f, Capsule c, Engine e, SolarPanel s, Battery ba);

    // Actions
    void launch();
    void deployBooster();
    void deployFuselage();
    void deployNose();
    void deployEngine();
    void deploySolarPanel();
    void pointPanelToSun();
    void calculatePowerConsumption();
    void flyToMoon();
    void moonPhase();
    void returnToEarth();
    void landingSequence();
    // secondary actions
    void computePhysics();
    // getters
    std::string getStatusReport();
    // setters
};

#endif