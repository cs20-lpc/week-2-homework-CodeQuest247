#include <iostream> //added
#include <string> //added
using namespace std; //added
template <typename T> // This is a template, which means T can be any data type (int, double, string, etc)

class Box {
private: // Only the class itself can access this variable, code ourside this class cannot touch it dorectly, this keeps the data safe 
    T value; // The variable 'value' stores a value of type T inside the Box

public: // Anyone can use the following public memebers... main() and other files can call them
    // TODO: Constructor: This is the constructor defintion for the class Box (name matches the class box, no return type, and runs automatically when a Box is created; in this case nothing is being created)
    // Constructor runs automantically when a Box object is created 
    // It takes a value of type T and stores it in the Box 
    Box(T v) {
      value = v; // Assigns the passed value (v) to the class variable (value)
    }

    // TODO: setValue: updates the value stored inside the Box
    void setValue(T v) {
      value = v;  // Replaces the current value with a new one
    }

    // TODO: getValue: returns the value stores inside the Box
    T getValue() {
      return value; // Sends the stored value back to whoever calls this function
    }

    // TODO: print: prints the value stores in the Box to the screen
    void print() {
      cout << value << endl; // Outputs the value followed by a new line
    }
};

int main() // all of main already existed 
{
  Box<int> intBox(10); // Creates a Box that stores an integer with the value 10
  Box<double> doubleBox(3.14); //Creates a Box that stores a double with the value 3.14
  Box<string> stringBox("CS20"); // Creates a Box that stores a string with the value "CS20"

  intBox.print(); // prints the value inside the intBox
  doubleBox.print(); // prints the value inside the doubleBox
  stringBox.print(); // prints the value inside the stringBox
}
