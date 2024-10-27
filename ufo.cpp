#include "ufo_functions.hpp"
#include <iostream>
std::string password = "tractorbeam";
std::vector<int> correct_guesses{0, 4, 8, 11};

int main() { std::cout << print_correct(password, correct_guesses); }
