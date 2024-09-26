
#ifndef CANINE_HPP
#define CANINE_HPP

#include "animal.hpp"
#include <iostream>
using namespace std;

class Canine : public Animal {
public:
    // Default constructor
    Canine();

    // Constructor with parameters
    Canine(int age, double x, double y);

    // Copy Constructor
    Canine(const Canine& other);

    // Destructor
    ~Canine();

    // Override move method
    void move(double moveX, double moveY, double height) override;
    void eat() override;
    void sleep() override;
    // New method for hunting
    void hunt(Animal* prey);
    //getter for type
    string getType() const override {

        return "Canine";
    }
    // Overload insertion operator
    friend ostream& operator<<(ostream& os, const Canine& canine);
};

#endif // CANINE_HPP
