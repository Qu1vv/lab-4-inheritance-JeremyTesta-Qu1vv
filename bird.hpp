// bird.hpp
// Created by jerem on 2024-09-25.

#ifndef BIRD_HPP
#define BIRD_HPP

#include "animal.hpp"

class Bird : public Animal {
public:
  // Default constructor
  Bird();

  // 4-parameter constructor
  Bird(int age, double x, double y, double height);

  // Copy Constructor
  Bird(const Bird& other);

  // Destructor
  ~Bird();

  // Override methods
  void move(double newX, double newY, double newHeight) override;
  void sleep() override;
  void eat() override;

  // Overload insertion operator
  friend ostream& operator<<(ostream& os, const Bird& bird);
};

#endif // BIRD_HPP
