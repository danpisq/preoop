#include "FractionArray.h"
#include <iostream>

FractionArray:: FractionArray(const int arraySize): m_size(arraySize)
{
  m_array = new Fraction* [m_size];
  m_howMany = 0;
}


FractionArray::~FractionArray()
{
  delete [] m_array;
}
void FractionArray::Print() const
{
  for(int i = 0; i < m_size; i++)
  {
    std::cout<<i<<": ";
    (*(m_array[i])).Print();
  }
}


void FractionArray::AddFration(Fraction &fraction)
{
  (m_array[m_howMany]) = &fraction;
  m_howMany += 1;

}
Fraction FractionArray::Sum() const
{
  Fraction tmp(0,1);
  for(int i = 0; i < m_size; i++)
  {
    tmp.Add(*(m_array[i]));
  }
  return tmp;
}
