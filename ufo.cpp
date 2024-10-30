#include "ufo_functions.hpp"
#include <iostream>

std::string password = "tractorbeam";
std::vector<int> correct_guesses;
std::vector<char> incorrect_guesses;
std::vector<char> past_guesses;
char guess;
int misses;

int main() {

  while (correct_guesses.size() != password.size() && misses <= 6) {

    print_correct(password, correct_guesses);

    std::cout << std::endl << std::endl;
    std::cout << "incorrect guesses: ";

    for (char i : incorrect_guesses) {
      std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;
    std::cout << "Password: ";
    std::cin >> guess;

    bool guessed = false;
    for (char i : past_guesses) {
      if (guess == i) {
        guessed = true;
      }
    }
    past_guesses.push_back(guess);
    if (guessed == false) {
      bool correct = false;
      int index = 0;
      for (char i : password) {
        if (i == guess) {
          correct_guesses.push_back(index);
          correct = true;
        }
        ++index;
      }
      if (correct == false) {
        incorrect_guesses.push_back(guess);
        misses++;
        display_misses(misses);
      }
    }
  }
  if (misses >= 6) {
    std::cout << "You lost!";
  }
  if (correct_guesses.size() == password.size()) {
    std::cout << "You won!";
  }
}
