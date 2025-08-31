#include "Animal.h"

//This the class implementations of Animal. The class definition is in Animal.h
Animal::Animal(string speciesName, unsigned int discoveryYear) {
      species = speciesName;
      year_discovered = discoveryYear;
}

Animal::Animal() : species(""), year_discovered(0) {};
      
void Animal::display() {
      cout << species << " [" << year_discovered << "]" << endl;
}
