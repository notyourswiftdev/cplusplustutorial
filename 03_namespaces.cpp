#include <iostream>

// NAMESPACE: - Provides a solution from preventing name conflicts.
//              Each entity needs a unique name.
//              A namespace allows for identically named entities as long as the namespaces are different.
namespace first {
	int x = 1;
}

namespace second {
	int x = 2;
}

int main() {

	int x = 0;

	std::cout << x; // This would print zero because it was initialized above.

	std::cout << first::x; // This would print 1 because we are calling the namespace.
	std::cout << second::x; // This would print 2 because we are calling the namespace.

}

int main2() {
	using namespace first; // if delcared here then you would only need to call x to print.

	std::cout << x; // Would print 1 because we are using the namespace above.
}


/*
Using namespace std is nice to have when following normal case. But this could cause issues for naming.
For example std::data is a method built in method. But might have a variable called data that passes an integer.
*/
int main3() {
	
	using std::cout;
	using std::string;

	string name = "Tom Riddle";

	cout << name;
}