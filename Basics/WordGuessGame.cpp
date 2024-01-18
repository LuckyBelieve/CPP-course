#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
string getRandomWord() {
    string words[] = {"apple", "banana", "cherry", "orange", "grape", "strawberry"};
    int randomIndex = rand() % (sizeof(words) / sizeof(words[0]));
    return words[randomIndex];
}
int main() {
    srand(time(0)); // Seed the random number generator
    string wordToGuess = getRandomWord();
    int wordLength = wordToGuess.length();
    string guessedWord(wordLength, '_'); // Initialize guessedWord with underscores
    int attempts = 6; // Number of attempts allowed
    cout << "Welcome to the Word Guessing Game!" << endl;
    cout << "guess the word in fruits" << endl;
    cout << "Guess the word: " << guessedWord << endl;
    while (attempts > 0 && guessedWord != wordToGuess) {
        cout << "Attempts left: " << attempts << endl;
        char guess;
        cout << "Enter a letter: ";
        cin >> guess;
        bool letterGuessed = false;
        for (int i = 0; i < wordLength; i++) {
            if (wordToGuess[i] == guess && guessedWord[i] == '_') {
                guessedWord[i] = guess;
                letterGuessed = true;
            }
        }
        if (!letterGuessed) {
            cout << "Incorrect guess!" << endl;
            attempts--;
        }
        cout << "Current progress: " << guessedWord << endl;
    }
    if (guessedWord == wordToGuess) {
        cout << "Congratulations! You guessed the word: " << wordToGuess << endl;
    } else {
        cout << "Sorry, you're out of attempts. The word was: " << wordToGuess << endl;
    }
    return 0;
}