// bird.cpp
// Created by jerem on 2024-09-25.

#include "bird.hpp"
// Default Constructor
Bird::Bird() : Animal(0, 0.0, 0.0, 0.0) {
    cout << "Bird default constructor called" <<endl;
}

// 4-param Constructor
Bird::Bird(int age, double x, double y, double height) : Animal(age, x, y, height) {
    cout << "Bird 4-param constructor called" <<endl;
}

// copy Constructor
Bird::Bird(const Bird& other) : Animal(other) {
    cout << "Bird copy constructor called" <<endl;
}
// Destructor
Bird::~Bird() {
    cout << "Bird destructor called" <<endl;
}

// Override move to include three coordinates
void Bird::move(double newX, double newY, double newHeight) {
    Animal::move(newX, newY, newHeight);
    //cout << getType()<< " moved to coordinates (" << newX << ", " << newY << ", " << newHeight << ")." << endl;
}

// Override sleep method
void Bird::sleep() {
    cout << getType() << " is sleeping." << endl;
}

// Override eat method
void Bird::eat() {
    cout << getType() <<" is eating." << endl;
}

// Overload insertion operator
ostream& operator<<(ostream& os, const Bird& bird) {
    os << static_cast<const Animal&>(bird); // Cast to Animal to call Animal's operator<<
    return os;
}
