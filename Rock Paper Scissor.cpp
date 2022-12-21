#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Print the game instructions
    cout << "Welcome to Rock-Paper-Scissors!" << endl;
    cout << "Enter 0 for rock, 1 for paper, or 2 for scissors." << endl;

    // Start the game loop
    bool play_again = true;
    while (play_again) {
        int player_choice;
        cin >> player_choice;

        // Generate the computer's choice
        int computer_choice = rand() % 3;
        cout << computer_choice << endl;

        // Determine the winner
        if (player_choice == computer_choice) {
            cout << "It's a tie!" << endl;
        } 
        else if ((player_choice == 0 && computer_choice == 2) ||
                 (player_choice == 1 && computer_choice == 0) ||
                 (player_choice == 2 && computer_choice == 1)) {
            cout << "You win!" << endl;
        }
        else{
            cout << "You lose!" << endl;
        }

        // Ask the player if they want to play again
        cout << "Do you want to play again? (y/n)" << endl;
        char response;
        cin >> response;
        if (response == 'n') {
            play_again = false;
        }
    }

    return 0;
}
