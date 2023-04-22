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
  drm.residents_num = 0;
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

void print_dorm_detail(struct dorm_t drm)
{
  printf("%s|%hu|", drm.name, drm.capacity);
  if (drm.gender == GENDER_MALE)
  {
    printf("male|");
  }
  else if (drm.gender == GENDER_FEMALE)
  {
    printf("female|");
  }
  printf("%hu\n", drm.residents_num);
}

int find_dorm(char *asrama, int zdrm, struct dorm_t *drm)
{
  int find_dorm = -1;
  for (int m = 0; m < zdrm; m++)
  {
    if (strcmp(asrama, drm[m].name) == 0)
    {
      find_dorm = m;
    }
  }
  return find_dorm;
}