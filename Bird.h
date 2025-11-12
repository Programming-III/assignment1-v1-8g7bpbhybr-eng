#ifndef Bird_H
#define Bird_H
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Bird : public Animal {
private :
float wingSpan;

public:


Bird();
Bird(float wingSpan, string name, int age, bool isHungry);
~Bird();

 string getwingSpan();
 void setwingSpan(string wingSpan);
#endif Bird_H
