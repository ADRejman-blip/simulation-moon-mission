#include <iostream>
#include <vector>
#include "Astronaut.h"
#include "Rocket.h"
#include "selection_menus.h"
using std::cout;
using std::cin;

int main(){
    std::string Yes;
    cout << "Welcome to the moon mission simulation.\n To get started yout first have to bulit your Rocket.\n";
    cout << "Type Yes to start the selection\n";
    cin >> Yes;
    if(Yes == Yes){
    Engine myEngine       = Engine_selection_menu();
    Capsule myCapsule     = Capsule_selection_menu();
    Fuselage myFuselage   = Fuselage_selection_menu();
    NoseCone myNose       = NoseCone_selection_menu();
    Booster myBooster     = Booster_selection_menu();
    SolarPanel myPanel    = SolarPanel_selection_menu();
    Battery myBattery     = Battery_selection_menu();

    std::vector<Astronaut> myCrew = Astronaut_selection_menu(myCapsule);

    cout << "\nAll parts collected! Assembling the rocket...\n" << std::endl;
        
    std::string rocketName;
    cout << "Enter a name for your space mission: ";
    cin >> rocketName;

    Rocket myRocket(rocketName, myBooster, myNose, myFuselage, myCapsule, myEngine, myPanel, myBattery);



    cout << "\n--- PRE-FLIGHT CHECK ---" << std::endl;
    cout << "\nRocket is ready on the launchpad! Waiting for ignition..." <<std::endl;

        

    }
    return 0;
}