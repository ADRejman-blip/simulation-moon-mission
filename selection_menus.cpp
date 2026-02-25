#include <iostream>
#include "Rocket.h"
#include "selection_menus.h"
using std::cout;
using std::cin;



Engine Engine_selection_menu(){
    int Engine_selection;
    bool false_selection = false;
    Engine selected_Engine;
    do {
    cout << "Please pick your Engine\n";
    cout << "Type 1 for the Merlin 1D\nType 2 for Raptor V2\n Type 3 for Rocketdyne F-1\nType 4 for Aerojet RL10\nType 5 for RS-25 SSME\n";
    cin >> Engine_selection;
    
    switch (Engine_selection)
        {
        case 1:
            selected_Engine.designation = "Merlin 1D";
            selected_Engine.thrust = 845000.0;
            selected_Engine.consumption = 470;
            selected_Engine.mass = 275;
            false_selection = false;
            break;

        case 2:
        selected_Engine.designation = "Raptor V2";
        selected_Engine.thrust = 2300000.0;
        selected_Engine.consumption = 650.0;
        selected_Engine.mass = 1600.0;
        false_selection = false;
            break;

        case 3:
        selected_Engine.designation = "Rocketdyne F-1";
        selected_Engine.thrust = 6770000.0;
        selected_Engine.consumption = 2570.0;
        selected_Engine.mass = 8400.0;
        false_selection = false;
            break;

        case 4:
        selected_Engine.designation = "Aerojet RL10";
        selected_Engine.thrust = 110000.0;
        selected_Engine.consumption = 25.0;
        selected_Engine.mass = 2777.0;
        false_selection = false;
            break;    

        case 5:
        selected_Engine.designation = "Aerojet RL10";
        selected_Engine.thrust = 1860000;
        selected_Engine.consumption = 440.0;
        selected_Engine.mass = 3520.0;
        false_selection = false;
            break;
        
        default:
        cout << "Please only type a number between 1 and 5" << '\n';
        false_selection = true;
            break;

        }
    } while(false_selection == true);
        cout << "You selected" << selected_Engine.designation << "\nThe thrust = " << selected_Engine.thrust << "\nThe consumption = " << selected_Engine.consumption << "\nThe mass = " << selected_Engine.mass << '\n';
            return selected_Engine;
}



Capsule Capsule_selection_menu(){
    int Capsule_selection;
    bool false_selection = false;
    Capsule selected_Capsule;
    do {
    cout << "Please pick your Capsule\n";
    cout << "Type 1 for Crew Dragon\nType 2 for Apollo CM\n Type 3 for Soyuz MS\nType 4 for Orion\nType 5 for Mercury\n";
    cin >> Capsule_selection;
    
    switch (Capsule_selection)
        {
        case 1:
        selected_Capsule.type = "Crew Dragon";
        selected_Capsule.emptyMass = 9525.0;
        selected_Capsule.maxCrew = 4;
        selected_Capsule.heatShieldCondition = 100.0;
        selected_Capsule.hasParachute = true;
            
            false_selection = false;
            break;

        case 2:
        selected_Capsule.type = "Apollo CM";
        selected_Capsule.emptyMass = 5560.0;
        selected_Capsule.maxCrew = 3;
        selected_Capsule.heatShieldCondition = 100.0;
        selected_Capsule.hasParachute = true;
      
        false_selection = false;
            break;

        case 3:
        selected_Capsule.type = "Soyuz MS";
        selected_Capsule.emptyMass = 7150.0;
        selected_Capsule.maxCrew = 3;
        selected_Capsule.heatShieldCondition = 100.0;
        selected_Capsule.hasParachute = true;
        
        false_selection = false;
            break;

        case 4:
        selected_Capsule.type = "Orion";
        selected_Capsule.emptyMass = 10400.0;
        selected_Capsule.maxCrew = 4;
        selected_Capsule.heatShieldCondition = 100.0;
        selected_Capsule.hasParachute = true;
        
        false_selection = false;
            break;    

        case 5:
        selected_Capsule.type = "Mercury";
        selected_Capsule.emptyMass = 1350.0;
        selected_Capsule.maxCrew = 1;
        selected_Capsule.heatShieldCondition = 100.0;
        selected_Capsule.hasParachute = true;
        false_selection = false;
        default:
        cout << "Please only type a number between 1 and 5" << '\n';
        false_selection = true;
            break;

        }
    } while(false_selection == true);
        cout << "You selected:" << selected_Capsule.type << "\nYour empty mass is:" << selected_Capsule.emptyMass << "\nYour max crew capacity is:" << selected_Capsule.maxCrew << '\n';
            return selected_Capsule;
}

Fuselage Fuselage_selection_menu(){
    int Fuselage_selection;
    bool false_selection = false;
    Fuselage selected_Fuselage;
    do {
    cout << "Please pick your Fuselage\n";
    cout << "Type 1 for Falcon 9\nType 2 for Saturn V\n Type 3 for Electron\nType 4 for Space Shuttle External Tank\nType 5 for Starship Super Heavy Booster\n";
    cin >> Fuselage_selection;
    
    switch (Fuselage_selection)
        {
        case 1:
        selected_Fuselage.emptyMass = 22200.0;
        selected_Fuselage.maxFuel = 411000.0;
        selected_Fuselage.material = "Aluminum-Lithium";
            
            false_selection = false;
            break;

        case 2:
        selected_Fuselage.emptyMass = 130000.0;
        selected_Fuselage.maxFuel = 2160000.0;
        selected_Fuselage.material = "Aluminum";
      
        false_selection = false;
            break;

        case 3:
        selected_Fuselage.emptyMass = 950.0;
        selected_Fuselage.maxFuel = 9250.0;
        selected_Fuselage.material = "Carbon Composite";
        
        false_selection = false;
            break;

        case 4:
        selected_Fuselage.emptyMass = 26500.0;
        selected_Fuselage.maxFuel = 733000.0;
        selected_Fuselage.material = "Aluminum-Lithium";
        
        false_selection = false;
            break;    

        case 5:
        selected_Fuselage.emptyMass = 200000.0;
        selected_Fuselage.maxFuel = 3400000.0;
        selected_Fuselage.material = "Stainless Steel";
        
        false_selection = false;
            break;
        
        default:
        cout << "Please only type a number between 1 and 5" << '\n';
        false_selection = true;
            break;

        }
    } while(false_selection == true);
        cout << "You selected Fuselage: " << Fuselage_selection << "\nYour empty mass is: " << selected_Fuselage.emptyMass << "\nYour max Fuel is: " << selected_Fuselage.maxFuel << "\n your material is: " << selected_Fuselage.material <<  '\n';
            return selected_Fuselage;
}

NoseCone NoseCone_selection_menu(){
    int NoseCone_selection;
    bool false_selection = false;
    NoseCone selected_NoseCone;
    do {
    cout << "Please pick your Nosecone\n";
    cout << "Type 1 for the Falcon 9 Fairing\nType 2 for Starship Nosecone\n Type 3 for Electron Fairing\nType 4 for Saturn V SLA\nType 5 for Ariane 5 Fairing\n";
    cin >> NoseCone_selection;
    
    switch (NoseCone_selection)
        {
        case 1:
        selected_NoseCone.aerodynamicFactor = 1.0;
        selected_NoseCone.dragCoefficient = 0.30;
        selected_NoseCone.frontalArea = 21.24;
        selected_NoseCone.isJettisonable = true;
        selected_NoseCone.mass = 1900.0;
            
            false_selection = false;
            break;

        case 2:
        selected_NoseCone.aerodynamicFactor = 0.9;
        selected_NoseCone.dragCoefficient = 0.25;
        selected_NoseCone.frontalArea = 63.62;
        selected_NoseCone.isJettisonable = false;
        selected_NoseCone.mass = 12000.0;
      
        false_selection = false;
            break;

        case 3:
        selected_NoseCone.aerodynamicFactor = 1.1;
        selected_NoseCone.dragCoefficient = 0.20;
        selected_NoseCone.frontalArea = 1.13;
        selected_NoseCone.isJettisonable = true;
        selected_NoseCone.mass = 44.0;
        
        false_selection = false;
            break;

        case 4:
        selected_NoseCone.aerodynamicFactor = 1.2;
        selected_NoseCone.dragCoefficient = 0.40;
        selected_NoseCone.frontalArea = 80.12;
        selected_NoseCone.isJettisonable = true;
        selected_NoseCone.mass = 3500.0;
        
        false_selection = false;
            break;    

        case 5:
        selected_NoseCone.aerodynamicFactor = 1.0;
        selected_NoseCone.dragCoefficient = 0.35;
        selected_NoseCone.frontalArea = 22.90;
        selected_NoseCone.isJettisonable = true;
        selected_NoseCone.mass = 2600.0;
        
        false_selection = false;
            break;
        
        default:
        cout << "Please only type a number between 1 and 5" << '\n';
        false_selection = true;
            break;

        }
    } while(false_selection == true);
        cout << "You selected NoseCone:" << NoseCone_selection << "\nYour areodynamicfactor is: " << selected_NoseCone.aerodynamicFactor << "\n Your dragCoefficient is: " << selected_NoseCone.dragCoefficient << "\n Your frontalArea is: " << selected_NoseCone.frontalArea << "\n Your mass is: " << selected_NoseCone.mass << '\n';
            return selected_NoseCone;
}

Booster Booster_selection_menu(){
    int Booster_selection;
    bool false_selection = false;
    Booster selected_Booster;
    do {
    cout << "Please pick your Booster\n";
    cout << "Type 1 for the Space Shuttle SRB\nType 2 for Falcon Heavy Side Booster\n Type 3 for Ariane 5 EAP\nType 4 for Atlas V AJ-60A\nType 5 for Delta II GEM-40\n";
    cin >> Booster_selection;
    
    switch (Booster_selection)
        {
        case 1:
        selected_Booster.burnTime = 124.0;
        selected_Booster.isActive = false;
        selected_Booster.thrust = 12500000.0;
        selected_Booster.totalMass = 590000.0;
            
            false_selection = false;
            break;

        case 2:
        selected_Booster.burnTime = 154.0;
        selected_Booster.isActive = false;
        selected_Booster.thrust = 7600000.0;
        selected_Booster.totalMass = 433000.0;
      
        false_selection = false;
            break;

        case 3:
        selected_Booster.burnTime = 140.0;
        selected_Booster.isActive = false;
        selected_Booster.thrust = 7080000.0;
        selected_Booster.totalMass = 273000.0;
        
        false_selection = false;
            break;

        case 4:
        selected_Booster.burnTime = 94.0;
        selected_Booster.isActive = false;
        selected_Booster.thrust = 1688000.0;
        selected_Booster.totalMass = 46700.0;
        
        false_selection = false;
            break;    

        case 5:
        selected_Booster.burnTime = 63.0;
        selected_Booster.isActive = false;
        selected_Booster.thrust = 499000.0;
        selected_Booster.totalMass = 13000.0;
        
        false_selection = false;
            break;
        
        default:
        cout << "Please only type a number between 1 and 5" << '\n';
        false_selection = true;
            break;

        }
    } while(false_selection == true);
        cout << "You selected Booster: " << Booster_selection << "\nThe burn time is: " << selected_Booster.burnTime << "\nThe thrust is: " << selected_Booster.thrust << "\nThe total mass is: " << selected_Booster.totalMass << '\n';
            return selected_Booster;
}

SolarPanel SolarPanel_selection_menu(){
    int SolarPanel_selection;
    bool false_selection = false;
    SolarPanel selected_SolarPanel;
    do {
    cout << "Please pick your SolarPanel\n";
    cout << "Type 1 for the ISS ROLL-Out Solar Array\nType 2 for Juno Jupiter Probe Arrays\n Type 3 for Hubble Space Telescope Arrays\nType 4 for Standart Telecom Satellite Array\nType 5 for CubeSat Deployable Array\n";
    cin >> SolarPanel_selection;
    
    switch (SolarPanel_selection)
        {
        case 1:
        selected_SolarPanel.angleToSun = 0.0;
        selected_SolarPanel.area = 350.0;
        selected_SolarPanel.efficiency = 0.30;
        selected_SolarPanel.isBroken = false;
        selected_SolarPanel.isDeployed = false;
        selected_SolarPanel.mass = 1400.0;
        selected_SolarPanel.model = "iROSA (ISS)";

            
            false_selection = false;
            break;

        case 2:
        selected_SolarPanel.angleToSun = 0.0;
        selected_SolarPanel.area = 60.0;
        selected_SolarPanel.efficiency = 0.29;
        selected_SolarPanel.isBroken = false;
        selected_SolarPanel.isDeployed = false;
        selected_SolarPanel.mass = 340.0;
        selected_SolarPanel.model = "Juno Deep Space";
      
        false_selection = false;
            break;

        case 3:
        selected_SolarPanel.angleToSun = 0.0;
        selected_SolarPanel.area = 30.0;
        selected_SolarPanel.efficiency = 0.15;
        selected_SolarPanel.isBroken = false;
        selected_SolarPanel.isDeployed = false;
        selected_SolarPanel.mass = 300;
        selected_SolarPanel.model = "Hubble Legacy Array";
        
        false_selection = false;
            break;

        case 4:
        selected_SolarPanel.angleToSun = 0.0;
        selected_SolarPanel.area = 40.0;
        selected_SolarPanel.efficiency = 0.25;
        selected_SolarPanel.isBroken = false;
        selected_SolarPanel.isDeployed = false;
        selected_SolarPanel.mass = 200.0;
        selected_SolarPanel.model = "Commercial Geo-Sat";
        
        false_selection = false;
            break;    

        case 5:
        selected_SolarPanel.angleToSun = 0.0;
        selected_SolarPanel.area = 0.1;
        selected_SolarPanel.efficiency = 0.28;
        selected_SolarPanel.isBroken = false;
        selected_SolarPanel.isDeployed = false;
        selected_SolarPanel.mass = 1.5;
        selected_SolarPanel.model = "Cubeat micro-Array";
        
        false_selection = false;
            break;
        
        default:
        cout << "Please only type a number between 1 and 5" << '\n';
        false_selection = true;
            break;

        }
    } while(false_selection == true);
        cout << "You selected the model:" << selected_SolarPanel.model << "\nThe area of your SolarPanel is:" << selected_SolarPanel.area << "\nThe efficiency is:" << selected_SolarPanel.efficiency  << " percent of the effected energy" << "\nThe mass is " << selected_SolarPanel.mass << '\n';
            return selected_SolarPanel;
}

Battery Battery_selection_menu(){
    int Battery_selection;
    bool false_selection = false;
    Battery selected_Battery;
    do {
    cout << "Please pick your Battery\n";
    cout << "Type 1 for the Standard Li-Ion Satellitebattery\nType 2 for Apollo Silver-Zinc Battery\n Type 3 for ISS main Baterry\nType 4 for Deep Space test Battery\nType 5 for CubeSat Micro-Battery\n";
    cin >> Battery_selection;
    
    switch (Battery_selection)
        {
        case 1:
        selected_Battery.baseConsumption = 500.0;
        selected_Battery.currentCharge = 15000.0;
        selected_Battery.mass = 50.0;
        selected_Battery.maxCapacity = 15000.0;
            
            false_selection = false;
            break;

        case 2:
        selected_Battery.baseConsumption = 1500.0;
        selected_Battery.currentCharge = 40000.0;
        selected_Battery.mass = 150.0;
        selected_Battery.maxCapacity = 40000.0;
      
        false_selection = false;
            break;

        case 3:
        selected_Battery.baseConsumption = 3500.0;
        selected_Battery.currentCharge = 120000.0;
        selected_Battery.mass = 430.0;
        selected_Battery.maxCapacity = 120000.0;
        
        false_selection = false;
            break;

        case 4:
        selected_Battery.baseConsumption = 150.0;
        selected_Battery.currentCharge = 8000.0;
        selected_Battery.mass = 35.0;
        selected_Battery.maxCapacity = 8000.0;
        
        false_selection = false;
            break;    

        case 5:
        selected_Battery.baseConsumption = 10.0;
        selected_Battery.currentCharge = 100.0;
        selected_Battery.mass = 1.2;
        selected_Battery.maxCapacity = 100.0;
        
        false_selection = false;
            break;
        
        default:
        cout << "Please only type a number between 1 and 5" << '\n';
        false_selection = true;
            break;

        }
    } while(false_selection == true);
        cout << "You selected model: " << Battery_selection << "\nYour base Consumption is:" << selected_Battery.baseConsumption << "\nYour mass is:" << selected_Battery.currentCharge << "\nYour max capacity is:" << selected_Battery.maxCapacity << '\n';
            return selected_Battery;
}