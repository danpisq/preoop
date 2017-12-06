#pragma once
#include "Fraction.h"

class FractionArray
{
 private:
  int _size;
  Fraction* _array;
  int _howMany;
 public:
  FractionArray(const int arraySize);
  void AddFration(Fraction fraction);
  void Print();
  FractionArray Sum();

};
