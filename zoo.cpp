#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"

using namespace std;

//removed all class definitions and implementations and moved them into Animal.h and Animal.cpp

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Komodo Dragon", 1912); //This is the new animal that I picked.

   delete animal1; //delete animal1 to prevent memory leak
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   AnimalsInZoo animalsInZoo(animal3);
   animalsInZoo.display();

   delete animal1; //delete animal1 again to prevent memory leak
}
