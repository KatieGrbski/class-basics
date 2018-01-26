#include <iostream>

#include "point.hpp"

int main(int argc, char const *argv[]) {
  Point p1, p2, p3(16, 8);
  p1.set_xy(5, 2);
  // p1.x = 5;
  // p1.y = 2;

  std::cout << "p1: (" << p1.get_x() << ", " << p1.get_y() << ")" << std::endl;
  std::cout << "p2: (" << p2.get_x() << ", " << p2.get_y() << ")" << std::endl;
  std::cout << "p3: (" << p3.get_x() << ", " << p3.get_y() << ")" << std::endl;
  p1.translate(4, -3);
  std::cout << "p1 after translate: (" << p1.get_x() << ", " << p1.get_y() << ")" << std::endl;
  return 0;
}
