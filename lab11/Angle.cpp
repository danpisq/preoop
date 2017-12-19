#include "Angle.h"
#include <cmath>
#include <iostream>

double Angle::toRad() const
{   
  return angleRad;
}

//////////////////////////////////
double Angle::toDeg() const
{
  double angle  = angleRad;
  angle /= (2 * M_PI);
  angle *= 360;
  return angle;
}
/////////////////////////////////////

Angle Angle::fromRadians(double angleValue)
{
  while (angleValue < 0)
    {
      angleValue += (2 * M_PI);
    }
  while(angleValue > (2 * M_PI))
    {
      angleValue -= (2 * M_PI);
    }
  return Angle(angleValue);
}

//////////////////////////////////////
Angle Angle::fromDegrees(double angleValue)
{
  while(angleValue < 0)
    {
      angleValue += 360;
    }
  while(angleValue > 360)
    {
      angleValue -= 360;
    }
  return Angle((angleValue / 360) * (2*M_PI));
}

////////////////////////////////////////////
Angle Angle::distance(const Angle& firstAngle,const  Angle& secondAngle)
{
  double distance = std::abs(firstAngle.angleRad - secondAngle.angleRad);
  if(distance > M_PI)
    {
      distance = 2 * M_PI - distance;
    }
  return Angle(distance);
}

/////////////////////////////////////////////
Angle& Angle::add(const Angle secondAngle)
{
  this->angleRad += secondAngle.angleRad;
  if(this->angleRad > (2 * M_PI))
    {
      this->angleRad -= 2 * M_PI;
    }
  return *this;
}

///////////////////////////////////////////
Angle::Angle(double angleValue)
{
  angleRad = angleValue;
}


Angle::operator double() const
{
  double angle = angleRad;
  angle /= 360;
  angle *=  2 * M_PI;
  return angle;
}
