#include "printString.h"

#include <iostream>
#include <string>

void printString(std::string str, int n) {
  for (int i = 0; i < n; ++i) {
    std::cout << str << std::endl;
  }
}