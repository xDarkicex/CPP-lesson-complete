#include <iostream>

int main(){
  int input;
  std::cout << "Enter an interger: ";
  std::cin >> input;
  int squared = input * input;
  std::cout << "Squared Number " << " is " << squared << std::endl;
  return 0;
}