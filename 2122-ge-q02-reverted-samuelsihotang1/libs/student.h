#ifndef STUDENT_H
#define STUDENT_H

#include "gender.h"
#include "dorm.h"

/**
 * @brief define your structure, enums, globally accessible variables, and function prototypes here.
 * The actual function implementation should be defined in the corresponding source file.
 *
 */

struct student_t
{
  char id[12];
  char name[40];
  char year[5];
  enum gender_t gender;
  struct dorm_t *dorm;
};

struct student_t create_student(char *input);

void print_student(struct student_t mhs);

void print_student_detail(struct student_t mhs);

void assign_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int zstd, int zdrm, int find_id(char *nim, int zstd, struct student_t *mhs), int find_dorm(char *asrama, int zdrm, struct dorm_t *drm));

int find_id(char *nim, int zstd, struct student_t *mhs);

void move_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int zstd, int zdrm, int find_id(char *nim, int zstd, struct student_t *mhs), int find_dorm(char *asrama, int zdrm, struct dorm_t *drm));

void dorm_empty(char *asrama, int zstd, int zdrm, struct student_t *mhs, struct dorm_t *drm, int find_dorm(char *asrama, int zdrm, struct dorm_t *drm));

#endif