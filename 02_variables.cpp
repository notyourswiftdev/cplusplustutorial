#include <iostream>

int main() {
   int x; // declaration
   x = 5;

   std::cout << x; // this would display 5.

   // -INTEGERS- (WHOLE NUMBERS)
   int age = 21;
   int year = 2023;
   int days = 10;

   // -DOUBLE- (NUMBER INCLUDING DECIMAL)
   double price = 10.99;
   double gpa = 2.5;
   double temperature = 25.1;

   // -SINGLE CHARACTER-
   char grade = 'A';
   char initial = 'C';
   char dollarSign = '$';

   // -BOOLEAN- (TRUE or FALSE)
   bool student = false;
   bool power = true;
   bool forSale = true;

   // -STRING- (OBJECTS THAT REPRESENTS A SEQUENCE OF TEXT)
   std::string name = "Polo";
   std::string day = "Friday";
   std::string food = "pizza";
   std::string address = "123 Washington St,";

   // CONST: - The const keyword specifies that a variables value is constant
   //          Tells the compiler to prevent anything from modifying it (read-only)
   const double PI = 3.14159;
   const int LIGHT_SPEED = 299792458;
   const int WIDTH = 1920;
   const int HEIGHT = 1080;


	return 0;
}