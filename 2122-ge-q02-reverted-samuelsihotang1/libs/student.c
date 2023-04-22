#include "student.h"
#include "dorm.h"
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
  mhs.dorm = NULL;
  mhs.dorm = malloc(1 * sizeof(struct dorm_t));
  strcpy(mhs.dorm->name, "unassigned");

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

void print_student_detail(struct student_t mhs)
{
  printf("%s|%s|%s|", mhs.id, mhs.name, mhs.year);
  if (mhs.gender == GENDER_MALE)
  {
    printf("male|");
  }
  else if (mhs.gender == GENDER_FEMALE)
  {
    printf("female|");
  }
  printf("%s\n", mhs.dorm->name);
}

int find_id(char *nim, int zstd, struct student_t *mhs)
{
  int find_id = -1;
  for (int m = 0; m < zstd; m++)
  {
    if (strcmp(nim, mhs[m].id) == 0)
    {
      find_id = m;
    }
  }
  return find_id;
}

void assign_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int zstd, int zdrm, int find_id(char *nim, int zstd, struct student_t *mhs), int find_dorm(char *asrama, int zdrm, struct dorm_t *drm))
{
  int maha = find_id(nim, zstd, mhs);
  int asra = find_dorm(asrama, zdrm, drm);
  if (maha >= 0 && asra >= 0 && drm[asra].capacity != drm[asra].residents_num && mhs[maha].gender == drm[asra].gender)
  {
    strcpy(mhs[maha].dorm->name, asrama);
    drm[asra].residents_num++;
  }
}

void move_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int zstd, int zdrm, int find_id(char *nim, int zstd, struct student_t *mhs), int find_dorm(char *asrama, int zdrm, struct dorm_t *drm))
{
  int maha = find_id(nim, zstd, mhs);
  char before[20];
  strcpy(before, mhs[maha].dorm->name);
  int asrabefore = find_dorm(before, zdrm, drm);
  int asraafter = find_dorm(asrama, zdrm, drm);
  if (maha >= 0 && asrabefore >= 0 && asraafter >= 0 && drm[asraafter].capacity != drm[asraafter].residents_num && mhs[maha].gender == drm[asraafter].gender)
  {
    drm[asrabefore].residents_num--;
    strcpy(mhs[maha].dorm->name, asrama);
    drm[asraafter].residents_num++;
  }
  else if (maha >= 0 && asrabefore == -1 && asraafter >= 0 && drm[asraafter].capacity != drm[asraafter].residents_num && mhs[maha].gender == drm[asraafter].gender)
  {
    strcpy(mhs[maha].dorm->name, asrama);
    drm[asraafter].residents_num++;
  }
}

void dorm_empty(char *asrama, int zstd, int zdrm, struct student_t *mhs, struct dorm_t *drm, int find_dorm(char *asrama, int zdrm, struct dorm_t *drm))
{
  int asra = find_dorm(asrama, zdrm, drm);
  for (int m = 0; m < zstd; m++)
  {
    if (strcmp(asrama, mhs[m].dorm->name) == 0)
    {
      strcpy(mhs[m].dorm->name, "unassigned");
      drm[asra].residents_num--;
    }
  }
}