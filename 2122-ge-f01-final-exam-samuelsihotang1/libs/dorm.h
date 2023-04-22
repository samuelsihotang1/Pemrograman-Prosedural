#ifndef DORM_H
#define DORM_H

#include "gender.h"

struct dorm_t
{
  char name[20];
  short capacity;
  char gender[10];
  short residents_num;
};

struct dorm_t create_dorm(char *input);

int find_dorm(char *asrama, int zdrm, struct dorm_t *drm);

#endif