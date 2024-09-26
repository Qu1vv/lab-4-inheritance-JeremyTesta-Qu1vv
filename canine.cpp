
#include "canine.hpp"

// Default constructor
Canine::Canine() : Animal(0, 0.0, 0.0) {
    cout << "Canine default constructor called" <<endl;
}

// Constructor with parameters
Canine::Canine(int age, double x, double y) : Animal(age, x, y) {
    cout << "Canine 3-param constructor called" <<endl;
}

// Copy Constructor
Canine::Canine(const Canine& other) : Animal(other) {
    cout << "Canine copy constructor called" <<endl;
}

// Destructor
Canine::~Canine() {
    cout << "Canine destructor called" <<endl;
}

// Override move method
void Canine::move(double moveX, double moveY, double moveHeight) {
    Animal::move(moveX, moveY, moveHeight);
}
// Override eat method
void Canine::eat()  {
    cout << getType() <<" is eating." << endl;
}

// Override sleep method
void Canine::sleep() {
    cout << getType() << " is sleeping." << endl;
}

// Hunt method implementation
void Canine::hunt(Animal* prey) {
    //abs so we dont worry about if coord is -pos or +pos
    if(abs(x - prey->getX()) <= 1 && abs(y - prey->getY()) <= 1 && abs(height - prey->getHeight()) <= 1) {
        prey->setAlive(false);
        cout << "Canine hunted prey ID: " << prey->getID() << " Successfully";
    }else {
        cout << "Hunt failed";
    }
}

// Overload insertion operator
ostream& operator<<(ostream& os, const Canine& canine){
    os << static_cast<const Animal&>(canine); // Cast to Animal to call Animal's operator<<
    return os;  // Return the output stream
}
