#ifndef Enclosure_H
#define Enclosure_H
#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"

class Enclosure {
private:
Animal** animals;
int capacity;
int currentCount;

public:
   
Enclosure();
Enclosure(int capacity);
~Enclosure();

int getCapacity() const;
void setCapacity(int capacity);
int getCurrentCount() const;

   
    void addAnimal(Animal* a);
    void displayAnimals();
};

#endif Enclosure_H
