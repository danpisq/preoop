#include "Main.h"

void Print(Fraction* fraction){
  if(fraction->numerator > 0){
    if(fraction->numerator < fraction->denominator){
      std::cout<<fraction->numerator<<"/"<<fraction->denominator<<std::endl;
    }
    else{
      std::cout<<(fraction->numerator / fraction->denominator)<<" ";
      std::cout<<(fraction->numerator % fraction->denominator)<<"/"<<fraction->denominator<<std::endl;
    }
  }
  else{
    if((fraction->numerator - 2 * fraction->numerator) < fraction->denominator){
      std::cout<<fraction->numerator<<"/"<<fraction->denominator<<std::endl;
    }
    else{
      std::cout<<(fraction->numerator/fraction->denominator)<<" ";
      std::cout<<((fraction->numerator - 2 * fraction->numerator) % fraction->denominator)<<"/"<<fraction->denominator<<std::endl;
    }
  }
}

Fraction* Sum(Fraction* firstFraction, Fraction* secondFraction){
  Fraction* newFraction = new Fraction;
  if(firstFraction->denominator != secondFraction->denominator){
    newFraction->denominator = (firstFraction->denominator) * (secondFraction->denominator);
    newFraction->numerator = ((firstFraction->numerator) * (secondFraction->denominator)) + ((firstFraction->denominator) * (secondFraction->numerator));
  }
  else{
    newFraction->denominator = firstFraction->denominator;
    newFraction->numerator = firstFraction->numerator + secondFraction->numerator;
  }
  
  return newFraction;
}
Fraction* Difference(Fraction* firstFraction, Fraction* secondFraction){
  Fraction* newFraction = new Fraction;
  if(firstFraction->denominator != secondFraction->denominator){
    newFraction->denominator = (firstFraction->denominator) * (secondFraction->denominator);
    newFraction->numerator = ((firstFraction->numerator) * (secondFraction->denominator)) - ((firstFraction->denominator) * (secondFraction->numerator));
  }
  else{
    newFraction->denominator = firstFraction->denominator;
    newFraction->numerator = firstFraction->numerator - secondFraction->numerator;
  }
  
  return newFraction;
}
Fraction* Product(Fraction* firstFraction, Fraction* secondFraction){
  Fraction* newFraction = new Fraction;
  newFraction->denominator = firstFraction->denominator * secondFraction->denominator;
  newFraction->numerator = firstFraction->numerator * secondFraction->numerator;
  return newFraction;
}

