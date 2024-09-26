// bird.cpp
// Created by jerem on 2024-09-25.

#include "bird.hpp"

Bird::Bird() : Animal(0, 0.0, 0.0, 0.0) {}

Bird::Bird(int age, double x, double y, double height) : Animal(age, x, y, height) {}

Bird::Bird(const Bird& other) : Animal(other) {}

Bird::~Bird() {}

// Override move to include three coordinates
void Bird::move(double newX, double newY, double newHeight) {
    Animal::move(newX, newY, newHeight);
    cout << "Bird moved to coordinates (" << newX << ", " << newY << ", " << newHeight << ")." << endl;
}

// Override sleep method
void Bird::sleep() {
    cout << "Bird is sleeping." << endl;
}

// Override eat method
void Bird::eat() {
    cout << "Bird is eating." << endl;
}

// Overload insertion operator
ostream& operator<<(ostream& os, const Bird& bird) {
    os << "Bird \n" << static_cast<const Animal&>(bird);
       //<< ", Height: " << bird.height;
    return os;
}
