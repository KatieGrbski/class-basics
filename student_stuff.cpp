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

  delete s2;
  delete s3;

  Student* students = new Student[5];

  delete[] students;

  std::cout << std::endl << "Allocating an array of pointers:" << std::endl;
  Student** more_students = new Student*[8];
  for (int i = 0; i < 8; i++) {
    more_students[i] = new Student("Clone", 933555555);
  }

  for (int i = 0; i < 8; i++) {
    delete more_students[i];
  }
  delete[] more_students;

  std::cout << "Done freeing dynamically allocated students" << std::endl;

  Student s7 = s1;

  Student s8;
  s8 = s1;

  s1.print_student();
  s8.print_student();

  return 0;
}
