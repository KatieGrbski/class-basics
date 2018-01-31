#ifndef __STUDENT_HPP
#define __STUDENT_HPP

class Student {
private:
  std::string name;
  int id;
  float* grades;
  int n_grades;

public:
  Student();
  Student(std::string name, int id);
  Student(const Student& s);

  ~Student();

  void add_grade(float grade);
  void print_student();

  void operator=(const Student& s);
};

#endif
