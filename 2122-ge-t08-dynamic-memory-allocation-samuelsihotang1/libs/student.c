#include "student.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

struct student_t create_student(char *input)
{
  struct student_t mhs;
  strcpy(mhs.id, strtok(NULL, "#"));
  strcpy(mhs.name, strtok(NULL, "#"));
  strcpy(mhs.year, strtok(NULL, "#"));
  char *yoru = strtok(NULL, "#");
  if (strcmp(yoru, "male") == 0)
  {
    mhs.gender = GENDER_MALE;
  }
  else if (strcmp(yoru, "female") == 0)
  {
    mhs.gender = GENDER_FEMALE;
  }
  return mhs;
}

void print_student(struct student_t mhs)
{
  printf("%s|%s|%s|", mhs.id, mhs.name, mhs.year);
  if (mhs.gender == GENDER_MALE)
  {
    printf("male\n");
  }
  else if (mhs.gender == GENDER_FEMALE)
  {
    printf("female\n");
  }
}