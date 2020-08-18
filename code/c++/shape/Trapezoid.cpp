#include "Trapezoid.h"

int Trapezoid::numTrapz = 0;

Trapezoid::~Trapezoid() {
  numTrapz--;
  std::cout << "Trapezoid Destructor\n";
}

Trapezoid::Trapezoid(double w1, double w2, double d)
  :Shape(), width1(w1), width2(w2), height(d)
{
  numTrapz++;
}

double
Trapezoid::GetArea(void) {
  return (width1+width2)*height/2;
}

void 
Trapezoid::PrintArea(std::ostream &s) {
  s << "Trapezoid: " << (width1+width2)*height/2 << " numTrapz: " << numTrapz << "\n";
}

