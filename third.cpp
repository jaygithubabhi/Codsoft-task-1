#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int userGuess;

    std::cout << "Guess the number (between 1 and 100): ";

    do {
        std::cin >> userGuess;

        if (userGuess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number: " << secretNumber << std::endl;
            break;
        } else if (userGuess < secretNumber) {
            std::cout << "Too low. Try a higher number: ";
        } else {
            std::cout << "Too high. Try a lower number: ";
        }
    } while (true);

    return 0;
