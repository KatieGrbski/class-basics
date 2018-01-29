#include <iostream>

#include "student.hpp"

int main(int argc, char const *argv[]) {

  Student s1("Luke Skywalker", 933111111);
  s1.add_grade(4.0);
  s1.add_grade(3.67);

  Student s1_copy = s1;
  s1_copy.add_grade(1.0);
  s1_copy.print_student();

  s1.print_student();

  Student* s2 = new Student;
  Student* s3 = new Student("Princess Leia", 933222222);

  Student* students = new Student[5];

  delete s2;
  delete s3;
  delete[] students;

  std::cout << "Done freeing dynamically allocated students" << std::endl;

  return 0;
}
