#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_t create_student(char *_id, char *_name, char *_year, enum gender_t _gender)
{
  struct student_t student;

  strcpy(student.id, _id);
  strcpy(student.name, _name);
  strcpy(student.year, _year);
  student.gender = _gender;
  strcpy(student.dormname, "unassigned");

  return student;
}

void print_student(struct student_t _students)
{
  printf("%s|%s|%s|", _students.id, _students.name, _students.year);
  if (_students.gender == 0)
  {
    printf("male|");
  }
  else if (_students.gender == 1)
  {
    printf("female|");
  }
  printf("%s\n", _students.dormname);
}