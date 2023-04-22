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
  char *gend = strtok(NULL, "#");
  if (strcmp(gend, "male") == 0)
  {
    mhs.gender = GENDER_MALE;
  }
  else if (strcmp(gend, "female") == 0)
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

void assign_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int jmlhstd, int jmlhdrm, int find_id(char *nim, int jmlhstd, struct student_t *mhs), int find_dorm(char *asrama, int jmlhdrm, struct dorm_t *drm))
{
  int idmahasiswa = find_id(nim, jmlhstd, mhs);
  int idasrama = find_dorm(asrama, jmlhdrm, drm);
  if (drm[idasrama].capacity != drm[idasrama].residents_num)
  {
    strcpy(mhs[idmahasiswa].dorm->name, asrama);
    drm[idasrama].residents_num++;
  }
}

int find_id(char *nim, int jmlhstd, struct student_t *mhs)
{
  int find_id;
  for (int m = 0; m < jmlhstd; m++)
  {
    if (strcmp(nim, mhs[m].id) == 0)
    {
      find_id = m;
    }
  }
  return find_id;
}

void move_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int jmlhstd, int jmlhdrm, int find_id(char *nim, int jmlhstd, struct student_t *mhs), int find_dorm(char *asrama, int jmlhdrm, struct dorm_t *drm))
{
  int idmahasiswa = find_id(nim, jmlhstd, mhs);
  char before[20];
  strcpy(before, mhs[idmahasiswa].dorm->name);
  int idasramaasal = find_dorm(before, jmlhdrm, drm);
  int idasramatujuan = find_dorm(asrama, jmlhdrm, drm);
  if (drm[idasramatujuan].capacity != drm[idasramatujuan].residents_num)
  {
    drm[idasramaasal].residents_num--;
    strcpy(mhs[idmahasiswa].dorm->name, asrama);
    drm[idasramatujuan].residents_num++;
  }
}