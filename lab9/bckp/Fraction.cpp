#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int numerator, int denominator)
{
  _numerator = numerator;
  _denominator = denominator;
}

int Fraction::GetNumerator()
{
  return _numerator;
}


int Fraction::GetDenominator()
{
  return _denominator;
}


void Fraction::Add( Fraction secondFraction)
{
  _numerator += secondFraction.GetNumerator();
  _denominator += secondFraction.GetDenominator();
}


void Fraction::SetValue(int numerator, int denominator)
{
  _numerator  = numerator;
  _denominator = denominator;
}

void Fraction::Print()
{
  if(_numerator < _denominator)
    {
      std::cout<<_numerator<<"/"<<_denominator<<std::endl;
    }
  else
    {
      std::cout<<(_numerator / _denominator)<<" ";
      std::cout<<_numerator % _denominator<<"/"<<_denominator<<std::endl;
    }
}
