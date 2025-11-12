#ifndef Visitor_H
#define Visitor_H
#include <iostream>
#include <string>
using namespace std;

class Visitor {
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor();
    Visitor(string visitorName, int ticketsBought);
    ~Visitor();


   string getVisitorName() const;
    void setVisitorName(string visitorName);
    int getTicketsBought() const;
    void setTicketsBought(int ticketsBought);


    void displayInfo();
};

#endif Visitor_H
