#ifndef __POINT_HPP
#define __POINT_HPP

class Point {
private:
    int x;
    int y;

public:
  Point();
  Point(int x, int y);
  void set_xy(int x, int y);
  int get_x();
  int get_y();
  void translate(int dx, int dy);
};

#endif
