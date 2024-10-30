#include "ufo_functions.hpp"
#include <iostream>

std::string password = "tractorbeam";
std::vector<int> correct_guesses;
std::vector<char> incorrect_guesses;
std::vector<char> past_guesses;
char guess;
int misses;

int main() {
  std::cout << std::endl << std::endl;
  std::cout << "░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓██████▓▒░\n"
               "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░\n"
               "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░\n"
               "░▒▓█▓▒░░▒▓█▓▒░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░\n"
               "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░\n"
               "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░\n"
               " ░▒▓██████▓▒░░▒▓█▓▒░      ░▒▓██████▓▒░  \n";
  std::cout << "                                      .               \n";
  std::cout << "                                      |               \n";
  std::cout << "                                   .-\"^\"-.          \n";
  std::cout << "                                  /_....._\\          \n";
  std::cout << "                              .-\"`         `\"-.     \n";
  std::cout << "                             (  ooo  ooo  ooo  )      \n";
  std::cout << "                              '-.,_________,.-'       \n";

  std::cout << std::endl;
  std::cout
      << "You and Teddy ventured out into the woods to catch Night Geese.\n "
         "Teddy found a trail of a particularly large nocturnal goose, and \n"
         "went ahead in excitement.You lose sight of him, and hear some \n"
         "strange noises and a shriek in the distance. You run into a clearing "
         "\n"
         "and see Teddy struggling in the beam of an eery light which is \n"
         "eminating from the underside of an intimidating looking alien "
         "spacecraft hovering \n"
         "overhead. He sees you and yells out in fear. You fumble with your "
         "shotgun, like it will do \n"
         "anything to help, and then see a light flashing on your Blipper Bero "
         "\n"
         "universal communicator device. \n"
         "It\'s picked up the login for the tractor beam control console on "
         "the ship.\n\n";

  while (correct_guesses.size() != password.size() && misses <= 6) {
    std::cout << misses << " of 6 failed attempts" << std::endl << std::endl;
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
    std::cout << "            ░░                                               "
                 "        \n";
    std::cout << "     ▒▒▒▒  ██                                                "
                 "       \n";
    std::cout << "      ▒▒▒▒                                                   "
                 "        \n";
    std::cout << "    ▒▒▒▒▒▒                                                   "
                 "        \n";
    std::cout << "  ░░▒▒▒▒▒▒░░                                                 "
                 "        \n";
    std::cout << "░░░░▒▒▒▒▓▓░░░░░░                                             "
                 "        \n";
    std::cout << "  ░░    ░░░░░░░░                                             "
                 "        \n";
    std::cout << "          ▒▒▒▒░░                                             "
                 "        \n";
    std::cout << "          ░░░░░░                                             "
                 "        \n";
    std::cout << "          ░░░░░░                                             "
                 "        \n";
    std::cout << "            ░░                                               "
                 "        \n";
    std::cout << "            ░░                                               "
                 "        \n";
    std::cout << "            ░░                                               "
                 "        \n";
    std::cout << "            ░░                                               "
                 "        \n";
    std::cout << "                                                             "
                 "        \n";
    std::cout << "          ░░                                                 "
                 "        \n";
    std::cout << "                                                             "
                 "        \n";
    std::cout << "          ░░                                                 "
                 "        \n";
    std::cout << "          ░░                                                 "
                 "        \n";
    std::cout << "          ░░                                                 "
                 "        \n";
    std::cout << "          ░░                                                 "
                 "        \n";
    std::cout << "          ░░                                                 "
                 "        \n";
    std::cout << "                                                             "
                 "        \n";
    std::cout << "        ░░                                                   "
                 "        \n";
    std::cout << "        ░░░░                                                 "
                 "        \n";
    std::cout << "        ░░░░                                                 "
                 "        \n";
    std::cout << "        ░░░░                                                 "
                 "        \n";
    std::cout << "      ░░  ░░                                                 "
                 "        \n";
    std::cout << "      ░░  ░░                                                 "
                 "        \n";
    std::cout << "      ░░  ░░░░                                ░░             "
                 "        \n";
    std::cout << "      ░░░░░░░░                                  ░░           "
                 "        \n";
    std::cout << "      ░░░░  ░░                                      ░░       "
                 "        \n";
    std::cout << "      ░░░░░░░░                                               "
                 "        \n";
    std::cout << "      ░░░░░░░░░░░░░░                                         "
                 "        \n";
    std::cout << "      ░░░░░░░░░░░░░░░░                                    ░░ "
                 "        \n";
    std::cout << "      ▒▒▒▒░░░░░░░░░░░░░░░░░░                                 "
                 "        \n";
    std::cout << "      ░░░░░░░░░░░░░░░░░░░░░░░░                              "
                 "░░░░░░   \n";
    std::cout << "        ░░░░░░░░░░░░░░░░░░░░░░        ░░                     "
                 "   ▒▒▒▒░\n";
    std::cout << "          ░░░░░░░░░░░░░░░░░░░░░░░░                           "
                 "        \n";
    std::cout << "            ░░░░░░░░░░░░░░░░░░░░░░░░░░                       "
                 "        \n";
    std::cout << "            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░                   "
                 "        \n";
    std::cout << "              ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░                 "
                 "        \n";
    std::cout << "                ░░░░░░░░░░░░░░░░░░░░░░░░░░░░            ░░   "
                 "        \n";
    std::cout << "                ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░      ░░  "
                 "░░░░       \n";
    std::cout << "                  ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░ "
                 "        \n";
    std::cout << "                    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  ░░░░░░   "
                 "        \n";
    std::cout << "                    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░     "
                 "        \n";
    std::cout << "                      ░░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░▓▓▒▒░░     "
                 "        \n";
    std::cout << "                        ▒▒▒▒▒▒    ░░░░░░░░░░░░░░▒▒▓▓▒▒░░     "
                 "        \n";
    std::cout << "                        ░░▓▓▓▓                    ░░▓▓▒▒     "
                 "        \n";
    std::cout << "                          ▓▓▒▒                      ▒▒▒▒     "
                 "        \n";
    std::cout << "                          ▒▒▒▒                      ▓▓▒▒     "
                 "        \n";
    std::cout << "                          ▒▒▒▒                      ▓▓▒▒     "
                 "        \n";
    std::cout << "                          ▒▒▒▒                      ▓▓▒▒░░   "
                 "        \n";
    std::cout << "                          ▒▒▒▒                      ▓▓▒▒░░   "
                 "        \n";
    std::cout << "                          ▓▓▒▒░░                  ░░▓▓▒▒     "
                 "        \n";
    std::cout << "              ░░░░░░░░▒▒▒▒▒▒▒▒░░▒▒        ░░░░░░▒▒▒▒▒▒▒▒     "
                 "        \n";
    std::cout << "            ░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░    ░░▒▒▒▒▒▒░░▒▒▒▒▒▒       "
                 "        \n\n";

    std::cout
        << "Teddy disappears into the ship and it floats away. You return to "
           "camp, and wonder if you'll ever see him agian, and \n"
           "how you're going to break the news to his family. As you get "
           "older, sometimes you tell the tale of \n"
           "Teddy and his demise at the hands of a 7 foot Night Goose, which "
           "you've vowed to track down in vengeance.\n"
           "It\'s a far more believeable account than the one you\'ll take to "
           "your grave.\n";
  }
  if (correct_guesses.size() == password.size()) {
    std::cout
        << "\n\nThe tractor beam shrinks and disappears, and the space craft\n "
           "floats away. Teddy is shaking in terror, but seems unharmed \n"
           "otherwise. Tractorbeam? you think to yourself.\n"
           "I guess even aliens are lazy enough to leave the factory \n"
           "settings as they are.\n";
  }
}
