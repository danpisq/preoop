#pragma once
#include <cstdlib>

struct Student{
  char first_letter_name;
  char first_letter_surname;
  int grade;
};
struct StudentsArray{
  Student** element;
  int n_elements;
};
struct Iterator{
  //StudentsArray object;
  Student *object;
  StudentsArray* arr;
  int jump;
};
void print(Student);
void print(Student*);
void set_student(const char, const char, int, Student*);
void init_array(StudentsArray*, int);

void init_iter(StudentsArray*, Iterator*);
void move_forward(Iterator*);
void select_element(Iterator* ,int);
void delete_array(StudentsArray*);
