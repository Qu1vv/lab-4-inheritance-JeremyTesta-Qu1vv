// animal.hpp
// Created by jerem on 2024-09-24.

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <utility>
using namespace std;

class Animal {
protected:
    int age;
    bool alive;
    long id;
    double x, y, height; // Added height for 3D coordinates

public:
    static long counterID;

    // Default constructor
    Animal();

    // 3-parameter constructor
    Animal(int age, double x, double y);

    // 4-parameter constructor for animals with 3D coords
    Animal(int age, double x, double y, double height);

    // Copy Constructor
    Animal(const Animal& otherAnimal);

    // Virtual Destructor
    virtual ~Animal();


    virtual void move(double moveX, double moveY, double moveHeight);
    virtual void sleep();
    virtual void eat();
    void setAlive(bool status);

    // Getter methods for when coords are inaccessible
    int getID() const {return id;}
    double getX() const { return x; }
    double getY() const { return y; }
    double getHeight() const { return height; }

    friend ostream& operator<<(ostream& os, const Animal& animal);
};

#endif // ANIMAL_HPP
