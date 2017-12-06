#pragma once
#include "Fraction.h"

class FractionArray
{
 public:
  FractionArray(const int arraySize);
  ~FractionArray();

  //method that adds given fraction to an array
  void AddFration(Fraction &fraction);
  //method that prints the content of an array
  void Print() const;
  //method that returns fraction equal to sum of fractions in an array
  Fraction Sum() const;

 private:
  int m_size;
  Fraction** m_array;
  int m_howMany;
};
