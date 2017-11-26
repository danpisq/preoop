#pragma once
#include <iostream>

struct Fraction{
  int numerator;
  int denominator;
};

//Function that Prints the fraction
void Print(Fraction* fraction);

//Function that creates new structure with given numbers
Fraction* CreateFraction(int numerator, int denominator);

//Function that return sum of two Fraction structures
Fraction* Sum(Fraction* fristFraction, Fraction* secondFraction);

//Function that returns difference betwen two Fraction structures
Fraction* Difference(Fraction* fristFraction, Fraction* secondFraction);

//Function that returns product two Fraction structures
Fraction* Product(Fraction* fristFraction, Fraction* secondFraction);
//
void Clear();
