#include <iostream>
#include "Player.h"

using std::cout;

    Player players[5] = {
        Player("Frank", 34),
        Player("Sally", 76),
        Player("George", 28),
        Player("Sean", 22),
        Player("Anne", 44)
    };

    void DisplayAll() {
        for(Player& player : players) {
            cout << "Name: " << player.getName() << "\n";
            cout << "Age: " << player.getAge() << "\nn";
        }
    }

    // Main loads at end

    int main() {
        
        // Preload();

        DisplayAll();        

        // cout << "This works";

        return 0;
    }