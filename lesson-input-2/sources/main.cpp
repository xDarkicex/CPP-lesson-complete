#include <iostream>

int main(){
  int n1, n2, n3, n4, n5;
  std::cout << "Enter five intergers, seperated by spaces: ";
  std::cin >> n1 >> n2 >> n3 >> n4 >> n5;
  int sum = n1 + n2 + n3 + n4 + n5;
  float average = sum / 5.0f;
  std::cout << "Sum of numbers is: " << sum << std::endl;
  std::cout << "Average value is: " << average << std::endl;
  return 0;
}