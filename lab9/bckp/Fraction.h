#pragma once
#include <cstdlib>

class Fraction
{
 private:
  int _numerator;
  int _denominator;

 public:
  Fraction(int numerator, int denominator);
  void Add(Fraction secondFraction);
  void Print();
  void SetValue(int numerator, int denominator);
  
  int GetNumerator();
  int GetDenominator();
  
};
