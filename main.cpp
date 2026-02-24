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
        cout << "First you have to pick your Engine\n";
        Engine_selection_menu();
        
        

    }
    return 0;
}