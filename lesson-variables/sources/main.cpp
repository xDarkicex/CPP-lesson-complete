#include <iostream>
#include <iomanip>

int main() {
  int year, month, day;
  year = 2017;
  month = 3;
  day = 1;
  // single line initialization
  int a = 10, b, c = 14, d = 5, e = a, f = 5, g;
  std::cout << "Today is: " 
    << std::setw(2) << std::setfill('0') << day
    << "."
    << std::setw(2) << std::setfill('0') << month
    << "."
    << year << "."
    << std::endl;

  return 0;
}