#ifndef Reptile_H
#define Reptile_H
#include <iostream>
#include <string>
using namespace std;

class Reptile : public Animal {
private:
bool isVenomous;

public:
  
Reptile();
Reptile(string name, int age, bool isHungry, bool isVenomous);
~Reptile();

 
bool getIsVenomous() const;
void setIsVenomous(bool isVenomous);

  
void display();
};

#endif Reptile_H
