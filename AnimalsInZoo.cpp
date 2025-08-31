#include "AnimalsInZoo.h"
#include <iostream>

using namespace std;

//This is the implementations of AnimalsInZoo. The class definitions are in AnimalsInZoo.h
AnimalsInZoo:: AnimalsInZoo(Animal newAnimal) {
   numAnimals = 1;
   animal = newAnimal;
}

AnimalsInZoo::AnimalsInZoo(){
   numAnimals = 0;
}

void AnimalsInZoo::display(){
   cout << "\nNumber of animals in zoo:" << numAnimals << endl;
   
   if (numAnimals > 0){ //Only bother displaying the animal names if there are actually animals in the zoo.
      animal.display();
   }
}
