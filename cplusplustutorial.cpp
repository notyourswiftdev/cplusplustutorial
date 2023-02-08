#include <iostream>

int main() {

	// This is a comment
	/*
		This is
		a multi-line
		comment.
	*/

   // -VARIABLES-

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

// NAMESPACE: - Provides a solution from preventing name conflicts.
//              Each entity needs a unique name.
//              A namespace allows for identically named entities as long as the namespaces are different.
namespace first {
	int x = 1;
}

namespace second {
	int x = 2;
}

int main2() {

	int x = 0;

	std::cout << x; // This would print zero because it was initialized above.

	std::cout << first::x; // This would print 1 because we are calling the namespace.
	std::cout << second::x; // This would print 2 because we are calling the namespace.

}

int main3() {
	using namespace first; // if delcared here then you would only need to call x to print.

	std::cout << x; // Would print 1 because we are using the namespace above.
}


/*
Using namespace std is nice to have when following normal case. But this could cause issues for naming.
For example std::data is a method built in method. But might have a variable called data that passes an integer.
*/
int main4() {
	
	using std::cout;
	using std::string;

	string name = "Tom Riddle";

	cout << name;
}

int main5() {
	/*
	typedef = reserved keyword used to create an additional name
	(alias) for another data type. New identifer for an existing type
	helps with readability and reduces typos.
	*/

}