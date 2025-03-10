// Copyright 2022 UNN-CS
#include "circle.h"

#include <stdexcept>
#include <cmath>

Circle::Circle(const double radius_) {
  if (radius_ < 0) {
    throw std::invalid_argument("Exception: radius < 0");
  }
  radius = radius_;
  ference = 2 * MY_PI * radius;
  area = MY_PI * radius * radius;
}

void Circle::setRadius(const double radius_) {
  if (radius_ < 0) {
    throw std::invalid_argument("Exception: radius < 0");
  }
  radius = radius_;
  ference = 2 * MY_PI * radius;
  area = MY_PI * radius * radius;
}

void Circle::setFerence(const double ference_) {
  if (ference_ < 0) {
    throw std::invalid_argument("Exception: ference < 0");
  }
  ference = ference_;
  radius = ference / (2 * MY_PI);
  area = MY_PI * radius * radius;
}

void Circle::setArea(const double area_) {
  if (area_ < 0) {
    throw std::invalid_argument("Exception: area < 0");
  }
  area = area_;
  radius = std::sqrt(area / MY_PI);
  ference = 2 * MY_PI * radius;
}

double Circle::getRadius() const {
  return radius;
}

double Circle::getFerence() const {
  return ference;
}

double Circle::getArea() const {
  return area;
}
