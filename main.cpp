#include <iostream>
#include "Animal.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <string>
using namespace std;


Animal::Animal() : name(""), age(0), isHungry(false) {}
Animal::Animal(string name, int age, bool isHungry) 
    : name(name), age(age), isHungry(isHungry) {}
Animal::~Animal() {}

string Animal::getName() const { return name; }
void Animal::setName(string name) { this->name = name; }
int Animal::getAge() const { return age; }
void Animal::setAge(int age) { this->age = age; }
bool Animal::getIsHungry() const { return isHungry; }
void Animal::setIsHungry(bool isHungry) { this->isHungry = isHungry; }

void Animal::display() {
    cout << "- " << name << " (Age: " << age << ", " 
              << (isHungry ? "Hungry" : "Not Hungry") << ")";
}

void Animal::feed() {
    if (isHungry) {
       cout << name << " is being fed.";
        isHungry = false;
    } else {
        cout << name << " is not hungry." ;
    }
}

// Mammal Class Implementation
Mammal::Mammal() : Animal(), furColor("") {}
Mammal::Mammal(string name, int age, bool isHungry,string furColor)
    : Animal(name, age, isHungry), furColor(furColor) {}
Mammal::~Mammal() {}

string Mammal::getFurColor() const { return furColor; }
void Mammal::setFurColor(std::string furColor) { this->furColor = furColor; }

void Mammal::display() {
   cout << "- " << getName() << " (Age: " << getAge() << ", " 
              << (getIsHungry() ? "Hungry" : "Not Hungry") << ")";
}


Bird::Bird() : Animal(), wingSpan(0.0f) {}
Bird::Bird(std::string name, int age, bool isHungry, float wingSpan)
    : Animal(name, age, isHungry), wingSpan(wingSpan) {}
Bird::~Bird() {}

float Bird::getWingSpan() const { return wingSpan; }
void Bird::setWingSpan(float wingSpan) { this->wingSpan = wingSpan; }

void Bird::display() {
   cout << "- " << getName() << " (Age: " << getAge() << ", " 
              << (getIsHungry() ? "Hungry" : "Not Hungry") << ")";
}


Reptile::Reptile() : Animal(), isVenomous(false) {}
Reptile::Reptile(string name, int age, bool isHungry, bool isVenomous)
    : Animal(name, age, isHungry), isVenomous(isVenomous) {}
Reptile::~Reptile() {}

bool Reptile::getIsVenomous() const { return isVenomous; }
void Reptile::setIsVenomous(bool isVenomous) { this->isVenomous = isVenomous; }

void Reptile::display() {
 cout << "- " << getName() << " (Age: " << getAge() << ", "
 << (getIsVenomous() ? "Venomous, " : "") 
<< (getIsHungry() ? "Hungry" : "Not Hungry") << ")";
}


Enclosure::Enclosure() : capacity(10), currentCount(0) {
    animals = new Animal*[capacity];
    for (int i = 0; i < capacity; i++) {
        animals[i] = nullptr;
    }
}

Enclosure::Enclosure(int capacity) : capacity(capacity), currentCount(0) {
    animals = new Animal*[capacity];
    for (int i = 0; i < capacity; i++) {
        animals[i] = nullptr;
    }
}

Enclosure::~Enclosure() {
    for (int i = 0; i < currentCount; i++) {
        delete animals[i];
    }
    delete[] animals;
}

int Enclosure::getCapacity() const { return capacity; }
void Enclosure::setCapacity(int capacity) { this->capacity = capacity; }
int Enclosure::getCurrentCount() const { return currentCount; }

void Enclosure::addAnimal(Animal* a) {
    if (currentCount < capacity) {
        animals[currentCount] = a;
        currentCount++;
    }
}

void Enclosure::displayAnimals() {
   cout << "Enclosure 1 Animals:" << std::endl;
    for (int i = 0; i < currentCount; i++) {
        animals[i]->display();
      cout << ;
    }
}

Visitor::Visitor() : visitorName(""), ticketsBought(0) {}
Visitor::Visitor(string visitorName, int ticketsBought) 
    : visitorName(visitorName), ticketsBought(ticketsBought) {}
Visitor::~Visitor() {}

std::string Visitor::getVisitorName() const { return visitorName; }
void Visitor::setVisitorName(string visitorName) { 
    this->visitorName = visitorName; 
}
int Visitor::getTicketsBought() const { return ticketsBought; }
void Visitor::setTicketsBought(int ticketsBought) { 
    this->ticketsBought = ticketsBought; 
}

void Visitor::displayInfo() {
    cout << "Visitor Info:";
  cout << "Name: " << visitorName;
   cout << "Tickets Bought: " << ticketsBought;
}


int main() {
  
    Enclosure enclosure1(10);
    
   
    Mammal* lion = new Mammal("Lion", 5, true, "Golden");
    Bird* parrot = new Bird("Parrot", 2, false, 0.5f);
    Reptile* snake = new Reptile("Snake", 3, true, true);
    
    enclosure1.addAnimal(lion);
    enclosure1.addAnimal(parrot);
    enclosure1.addAnimal(snake);
    
  
    Visitor visitor("Sarah Ali", 3);
    
   
    enclosure1.displayAnimals();
    std::cout << std::endl;
    visitor.displayInfo();
    
    return 0;
}
