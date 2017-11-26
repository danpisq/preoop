// Do tego pliku mozna dopisac kod, ale niemozna nic zniego usunac
#include "Main.h"
Fraction* CreateFraction (int numerator, int denominator)
{
  Fraction* fraction = new Fraction;
  fraction->numerator = numerator;
  fraction->denominator = denominator;
  return fraction;
}

