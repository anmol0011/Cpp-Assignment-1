// This code is made my Anmol Agarawal

#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  int score;

  std::cout << "Enter your score you did in your exams>>\n";
  std::cin >> score;

  if (score < 33) {
    std::cout << "Failed\n";
  } else if (score < 50) {
    std::cout << "You got C grade\n";
  } else if (score < 65) {
    std::cout << "You got B grade\n";
  } else if (score < 90) {
    std::cout << "You got A grade\n";
  } else if (score <= 100) {
    std::cout << "You are a topper Bro\n";
  } else if (score > 100) {
    std::cout << "Enter under 100 score\n";
  } else {
    std::cout << "What are you doing man?\n";
  }
}
