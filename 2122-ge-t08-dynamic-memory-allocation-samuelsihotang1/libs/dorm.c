#include "dorm.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

struct dorm_t create_dorm(char *input)
{
  struct dorm_t drm;
  strcpy(drm.name, strtok(NULL, "#"));
  drm.capacity = atoi(strtok(NULL, "#"));
  char *yoru = strtok(NULL, "#");
  if (strcmp(yoru, "male") == 0)
  {
    drm.gender = GENDER_MALE;
  }
  else if (strcmp(yoru, "female") == 0)
  {
    drm.gender = GENDER_FEMALE;
  }
  return drm;
}

void print_dorm(struct dorm_t drm)
{
  printf("%s|%hu|", drm.name, drm.capacity);
  if (drm.gender == GENDER_MALE)
  {
    printf("male\n");
  }
  else if (drm.gender == GENDER_FEMALE)
  {
    printf("female\n");
  }
}