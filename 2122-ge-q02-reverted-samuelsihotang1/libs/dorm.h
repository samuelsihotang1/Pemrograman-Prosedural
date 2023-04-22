#ifndef DORM_H
#define DORM_H

#include "gender.h"

/**
 * @brief define your structure, enums, globally accessible variables, and function prototypes here.
 * The actual function implementation should be defined in the corresponding source file.
 *
 */

struct dorm_t
{
  char name[20];
  unsigned short capacity;
  enum gender_t gender;
  unsigned short residents_num;
};

struct dorm_t create_dorm(char *input);

void print_dorm(struct dorm_t drm);

void print_dorm_detail(struct dorm_t drm);

int find_dorm(char *asrama, int zdrm, struct dorm_t *drm);

#endif
