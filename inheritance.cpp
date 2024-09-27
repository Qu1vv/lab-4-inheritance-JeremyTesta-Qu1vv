//Jeremy Testa
//A01378143

#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {
    cout << "---Create all animals---" << endl;

    Animal* animal = new Animal(10, 3.0, 8.0);
    Bird* bird = new Bird(15, 6.0, 3.0, 7.0);
    Canine* canine = new Canine(12, 8.0, 1.0);

    cout << "\n---Print all animals---" << endl;
    cout << *animal << endl;
    cout << *bird << endl;
    cout << *canine << endl;

    cout << "\n---Make all animals move and print---" << endl;
    animal->move(8.0, 7.0, 0.0);
    bird->move(1.0, 2.0, 0.0);
    canine->move(1.0, 2.0, 0.0);

    cout << *animal << endl;
    cout << *bird << endl;
    cout << *canine << endl;

    cout << "\n---Make all animals sleep---" << endl;
    animal->sleep();
    bird->sleep();
    canine->sleep();

    cout << "\n---Make all animals eat---" << endl;
    animal->eat();
    bird->eat();
    canine->eat();

    cout << "\n---Make canine hunt bird---" << endl;
    canine->hunt(bird);

    cout << "\n\n---Print all animals at end---" << endl;
    cout << *animal << endl;
    cout << *bird << endl;
    cout << *canine << endl;

    cout << "\n---Delete dynamic memory---" << endl;
    delete animal;
    delete bird;
    delete canine;

    return 0;
}
