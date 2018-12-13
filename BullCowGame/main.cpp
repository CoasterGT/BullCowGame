#include <iostream>
#include <string>
#include "main.h"

using namespace std;


int main() {

	PrintInfo();
	PlayGame();

	return 0;
}

// Introduce the Game
void PrintInfo() {
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls & Cows" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I am thinking of?\n";
	cout << endl;
	return;
}

// Play Game
void PlayGame() {

	const int NUMBER_OF_TURNS = 9;

	string Word = "Andy";

	int Count = 0;

	while (Count < NUMBER_OF_TURNS) {


		string Guess = GetGuess();

		if (Guess == Word) {
			cout << "Correct Guess!";
			break;
		}

		Count++;
	}
	return;
}

// Get a Guess
string GetGuess() {
	string Guess = "";
	cout << "Guess a word: " << flush;
	getline(cin, Guess);

	return Guess;
}

// Print the guess
void PrintGuess(string Guess) {
	// Repeat guess back to them
	cout << endl;
	cout << "You guessed the word: " << Guess << endl;
	return;
}