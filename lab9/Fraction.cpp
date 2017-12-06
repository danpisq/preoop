#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int numerator, int denominator)
{
  m_numerator = numerator;
  m_denominator = denominator;
}

int Fraction::GetNumerator() const
{
  return m_numerator;
}


int Fraction::GetDenominator() const 
{
  return m_denominator;
}


void Fraction::Add(const Fraction &secondFraction)
{
  if(secondFraction.GetDenominator() == m_denominator)
    {
  m_numerator += secondFraction.GetNumerator();
    }
  else
    {
      SetValue(m_denominator * secondFraction.GetNumerator() + m_numerator * secondFraction.GetDenominator() , m_denominator * secondFraction.GetDenominator());
    }
}


void Fraction::SetValue(int numerator, int denominator)
{
  m_numerator  = numerator;
  m_denominator = denominator;
}

void Fraction::Print()
{
  if(m_numerator < m_denominator)
    {
      std::cout<<m_numerator<<"/"<<m_denominator<<std::endl;
    }
  else
    {
      std::cout<<(m_numerator / m_denominator)<<" ";
      std::cout<<m_numerator % m_denominator<<"/"<<m_denominator<<std::endl;
    }
}
