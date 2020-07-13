/*********************************
** Program: lab1_worst_advice.cpp
** Author: Benjamin McFarland
** Date: 01/06/2020
** Description: Print worst advice for a college freshman.
*********************************/

#include <string>
#include <iostream>

int main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::getline(std::cin, name);
  std::cout << "Thank you, '" << name << "'." << std::endl;
}
