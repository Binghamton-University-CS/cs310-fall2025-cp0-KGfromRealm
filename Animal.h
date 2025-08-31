#ifndef Animal_h //We need to use an inclusion guard to prevent multiple inclusions
#define Animal_h
#include <iostream>
#include <string>

using namespace std;

class Animal{ //this is only the class definition because we moved all implementations to Animal.cpp 
   public:
      Animal(string speciesName, unsigned int discoveryYear);
      Animal();
      void display ();

   private:
      string species;
      unsigned int year_discovered;
};

#endif
