#include <iostream>
#include "Main.h"



void print(Student student){
  std::cout<<"Initials: "<<student.first_letter_name<<" ";
  std::cout<<student.first_letter_surname<<"\t";
  std::cout<<"Grade: "<<student.grade<<std::endl;
}
void print(Student* student){
  std::cout<<"Initials: "<<student->first_letter_name<<" ";
  std::cout<<student->first_letter_surname<<"\t";
  std::cout<<"Grade: "<<student->grade<<std::endl;
}

void set_student(const char given_first_letter_name, const char given_first_letter_surname, int given_grade, Student* student){
  student->first_letter_name = given_first_letter_name;
  student->first_letter_surname = given_first_letter_surname;
  student->grade = given_grade;
return;
}

void init_array(StudentsArray* students_array, int number){
  (*students_array).element = (Student**)malloc(number*sizeof(Student*));
  (*students_array).n_elements = number;
}

void init_iter(StudentsArray* students_array, Iterator* iterator){
  iterator->object = (students_array->element)[0];
  iterator->arr = students_array;
  iterator->jump = 1;
  return;
}
void move_forward(Iterator* iterator){
  if(iterator->jump < (iterator->arr->n_elements)){
    iterator->object = (iterator->arr->element)[iterator->jump];
    (iterator->jump)++;
  }
  else{iterator->object = 0;}
}
void select_element(Iterator* iterator ,int number){
  iterator->object = (iterator->arr->element)[number];
  iterator->jump = number+1;
}
void delete_array(StudentsArray* students_array ){
  free(students_array->element);
}
