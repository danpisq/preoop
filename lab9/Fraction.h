#pragma once

class Fraction
{
 public:

  Fraction(int numerator, int denominator);
  //method that add second fraction to this fraction
  void Add(const Fraction &secondFraction);
  //method that prints this fraction
  void Print();
  //method that allows to set fraction numerator and denominator
  void SetValue(int numerator, int denominator);

  //getters
  int GetNumerator() const;
  int GetDenominator() const;

 private:
  int m_numerator;
  int m_denominator;
};
