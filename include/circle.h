// Copyright 2022 UNN-CS
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_

#include <stdexcept>

const double MY_PI = 3.14159265358979323846;

class Circle {
 private:
  double radius;
  double ference;
  double area;

 public:
  Circle(const double radius_);

  void setRadius(const double radius_);
  void setFerence(const double ference_);
  void setArea(const double area_);

  double getRadius() const;
  double getFerence() const;
  double getArea() const;
};

#endif  // INCLUDE_CIRCLE_H_
