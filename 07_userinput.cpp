#include <iostream>

/*
cout << (insertion operator)
cin >> (extraction operator)
*/

int main8() {
   std::string name;

   std::cout << "What's your name?: ";
   std::cin >> name;

   std::cout << "Hello " << name;

   std::cout << "What is your full name?: ";
//    std::getline(std::cin, name);

   return 0;
}
