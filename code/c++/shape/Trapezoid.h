#ifndef _TRAPEZOID
#define _TRAPEZOID

#include "Shape.h"

class Trapezoid: public Shape {
 public:
  Trapezoid(double w1, double w2, double h);
  ~Trapezoid();
  double GetArea(void);
  void PrintArea(std::ostream &s);  

 protected:

 private:
  double width1, width2, height;
  static int numTrapz;
};

#endif // _TRAPEZOID

  
