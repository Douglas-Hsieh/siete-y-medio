#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)
bool checkWin(Player P)
{
    if(P.getMoney() >= 1000)
    {
        cout << "Congratulations. You beat the casino! Bye.";
        return true;
    }
    return false;

}
bool checkLose(Player P);

// Non member functions implementations (if any)
bool checkLose(Player P)
{
    if(P.getMoney() <= 0)
    {
        cout << "You have $0. GAME OVER! Come back when you have more money. Bye.";
        return true;
    }
    return false;
}

// Stub for main
int main(){
    /* --STATEMENTS-- */
    
    Player P(100);
    Hand H;
    
    
    
    
    
    
    
    
    
    return 0;
}
