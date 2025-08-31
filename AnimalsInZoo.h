#ifndef AnimalsInZoo_h //Once again, we need inclusion guards to prevent multiple inclusions
#define AnimalsInZoo_h
#include "Animal.h"

class AnimalsInZoo{ //Same as before, this is only the class definition for AnimalsInZoo. Implementations are in Animal.cpp
    public:
        AnimalsInZoo(Animal newAnimal);
        AnimalsInZoo();
        void display();
        
    private:
        int numAnimals;
        Animal animal;
};

#endif
