#ifndef Animal_H
#define Animal_H
#include <iostream>
#include <string>
using namespace std;
#include <string>

class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string name, int age, bool isHungry);
    virtual ~Animal();

    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    bool getIsHungry();
    void setIsHungry(bool isHungry);

 
    void display();
    void feed();
};
#endif Animal_H
