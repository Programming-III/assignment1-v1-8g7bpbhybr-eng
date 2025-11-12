#ifndef Mammal_H
#define Mammal_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal();
    Mammal(string name, int age, bool isHungry, string furColor);
    ~Mammal();

   
    string getFurColor();
    void setFurColor(string furColor);

    
    void display();
};
#endif Mammal_H
