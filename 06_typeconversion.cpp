#include <iostream>

/*type conversion:

conversion a value of one data type to another

Implicit = automatic
Explicit = Precede value with new data type 

*/
int main() {
   int correct = 8;
   int questions = 10;
   double score = correct/(double)questions * 100;

   std::cout << score << "%";

   return 0;
}