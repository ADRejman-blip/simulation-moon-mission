#include <iostream>
#include <vector>
#include "Astronaut.h"
using std::cout;
using std::cin;


int main(){
    Astronaut tom("Tom Major", 34, 80.4, "Geologe");
    
    tom.arbeiten();
    tom.statusBericht();


    return 0;
}