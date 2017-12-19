#pragma once
class Angle
{
public:
  //funkcja zmieniająca przechowywany kąt na radiany
  double toRad() const;

  //funkcja zmieniająca przechowywany kat na stopnie
  double toDeg() const;
  
  //funkcja statyczna tworząca obiekt inicjalizowany radianami
  static Angle fromRadians(double angleValue);

  //funkcja statyczna tworząca obiekt inicjalizowany stopniami
  static Angle fromDegrees(double angleValue);

  //funkcja zwracająca dystans między dwoma kontami
  static Angle  distance(const Angle& firstAngle, const Angle& secondAngle);

  //funkcja pozwalająca dodać do obiektu drugi kąt seconAngle
 Angle& add(const Angle secondAnlge);
  
  operator double() const;

 private:
  //Konstruktor tworzący obiekt kąta o miarze angleValue
  Angle(double angleValue);
  //stores value in radians
  double angleRad;
};
