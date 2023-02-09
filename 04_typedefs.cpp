#include <iostream>
#include <vector>

/*
typedef = reserved keyword used to create an additional name
(alias) for another data type. New identifer for an existing type
helps with readability and reduces typos.
Replaced with the keyword (using).
*/

typedef std::vector<std::pair<std::string, int>>; // This is long to type everytime.
typedef std::vector<std::pair<std::string, int>> pairList_t; // this would be better to have a name after.
typedef std::string text_t;
typedef int number_t;

using text_t = std::string;
using number_t = int;

int main5() {

   text_t firstName = "Tom";
   number_t age = 24;

   std::cout << firstName << age;

   return 0;
}