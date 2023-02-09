#include <iostream>


/*
if statements - do something if a condition is true. if not, then don't do it.
*/

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "You are too old to enter this site!";
    } else if (age >= 18) {
        std::cout << "Welcome to the site.";
    } else if (age < 0) {
        std::cout << "Woah! You have not been born yet!";
    } else {
        std::cout << "You are not old enough to enter this site.";
    }

    return 0;
}