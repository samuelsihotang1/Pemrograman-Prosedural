#include "repository.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

struct dorm_t create_dorm_repository(char *input)
{
  struct dorm_t drm;
  strcpy(drm.name, strtok(input, "|"));
  drm.capacity = atoi(strtok(NULL, "|"));
  char *yoru = strtok(NULL, "|");
  if (strcmp(yoru, "male") == 0)
  {
    drm.gender = GENDER_MALE;
  }
  else if (strcmp(yoru, "female") == 0)
  {
    drm.gender = GENDER_FEMALE;
  }
  drm.residents_num = 0;
  return drm;
}

struct student_t create_student_repository(char *input)
{
  struct student_t mhs;
  strcpy(mhs.id, strtok(input, "|"));
  strcpy(mhs.name, strtok(NULL, "|"));
  strcpy(mhs.year, strtok(NULL, "|"));
  char *yoru = strtok(NULL, "|");
  if (strcmp(yoru, "male") == 0)
  {
    mhs.gender = GENDER_MALE;
  }
  else if (strcmp(yoru, "female") == 0)
  {
    mhs.gender = GENDER_FEMALE;
  }
  mhs.dorm = NULL;
  mhs.dorm = malloc(1 * sizeof(struct dorm_t));
  strcpy(mhs.dorm->name, "unassigned");

  return mhs;
}