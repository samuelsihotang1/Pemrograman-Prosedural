#include "dorm.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct dorm_t create_dorm(char *input)
{
  struct dorm_t drm;
  strcpy(drm.name, strtok(NULL, "#"));
  drm.capacity = atoi(strtok(NULL, "#"));
  strcpy(drm.gender, strtok(NULL, "#"));
  drm.residents_num=0;
  return drm;
}

int find_dorm(char *asrama, int zdrm, struct dorm_t *drm)
{
  int find_dorm;
  for (int m = 0; m < zdrm; m++)
  {
    if (strcmp(asrama, drm[m].name)==0)
    {
      find_dorm=m;
    }
  }
  return find_dorm;
}