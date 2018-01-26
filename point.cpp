#include "point.hpp"

Point::Point() {
  this->x = -1;
  this->y = -1;
}

Point::Point(int x, int y) {
  // this->x = x;
  // this->y = y;
  this->set_xy(x, y);
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
