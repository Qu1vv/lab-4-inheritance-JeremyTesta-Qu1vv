//Jeremy Testa
//A01378143

#include "animal.hpp"
using namespace std;

// Initialize the static ID counter
long Animal::counterID = 1;

// Default constructor
Animal::Animal()
    : age(0), alive(true), id(counterID++), x(0.0), y(0.0), height(0.0) {
    cout << "Animal default constructor called" <<endl;
}

// 3-parameter constructor
Animal::Animal(int age, double x, double y)
    : age(age), alive(true), id(counterID++), x(x), y(y), height(0.0) {
    cout << "Animal 3-param constructor called" <<endl;
}

// 4-parameter constructor for animals with 3D coords
Animal::Animal(int age, double x, double y, double height)
    : age(age), alive(true), id(counterID++), x(x), y(y), height(height) {
    cout << "Animal 4-param constructor called" <<endl;
}

// Copy Constructor
Animal::Animal(const Animal& otherAnimal)
    : age(otherAnimal.age), alive(otherAnimal.alive),
      id(counterID++), x(otherAnimal.x), y(otherAnimal.y), height(otherAnimal.height) {
    cout << "Animal copy constructor called" <<endl;
}

// Virtual Destructor
Animal::~Animal() {
    cout << "Animal virtual destructor called" <<endl;
}

// Move method
void Animal::move(double moveX, double moveY, double moveHeight) {
    x = moveX;
    y = moveY;
    height = moveHeight; // Set height
    cout << "Animal moved to coordinates (" << x << ", " << y << ", " << height << ")." << endl;
}

void Animal::sleep() {
    cout << "Animal is sleeping." << endl;
}

void Animal::eat() {
    cout << "Animal is eating." << endl;
}

void Animal::setAlive(bool status) {
    alive = status;
}

// Overload insertion operator
ostream& operator<<(ostream& os, const Animal& animal) {
    os << "Animal ID: " << animal.id << ", Age: " << animal.age
       << ", Alive: " << (animal.alive ? "yes" : "no")
       << ", Location: (" << animal.x << ", " << animal.y << ", " << animal.height << ")";
    return os;
}
