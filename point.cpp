#include <iostream>
#include "point.hpp"

Point::Point() : x(-1), y(-1) {
  // this->x = -1;
  // this->y = -1;
}

Point::Point(int x, int y) : x(x), y(y) {
  // this->x = x;
  // this->y = y;
  // this->set_xy(x, y);
}

Point::Point(const Point& p) {
  std::cout << "== In copy constructor" << std::endl;
  this->x = p.x;
  this->y = p.y;
}

void Point::set_xy(int x, int y) {
  this->x = x;
  this->y = y;
}

int Point::get_x() {
  return this->x;
}

int Point::get_y() {
  return this->y;
}

void Point::translate(int dx, int dy) {
  this->x += dx;
  this->y += dy;
}
