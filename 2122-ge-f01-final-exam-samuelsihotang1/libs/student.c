#include "student.h"
#include "dorm.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct student_t create_student(char *input)
{
  struct student_t mhs;
  strcpy(mhs.nim, strtok(NULL, "#"));
  strcpy(mhs.name, strtok(NULL, "#"));
  strcpy(mhs.year, strtok(NULL, "#"));
  strcpy(mhs.gender, strtok(NULL, "#"));
  strcpy(mhs.dormname, "unassigned");

  return mhs;
}

void print_student_detail(struct student_t mhs)
{
  printf("%s|%s|%s|%s|%s\n", mhs.nim, mhs.name, mhs.year, mhs.gender, mhs.dormname);
}

int find_id(char *nim, int zstd, struct student_t *mhs)
{
  int find_id;
  for (int m = 0; m < zstd; m++)
  {
    if (strcmp(nim, mhs[m].nim) == 0)
    {
      find_id = m;
    }
  }
  return find_id;
}

void leave_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int zstd, int zdrm, int find_id(char *nim, int zstd, struct student_t *mhs), int find_dorm(char *asra, int zdrm, struct dorm_t *drm))
{
  int maha = find_id(nim, zstd, mhs);
  asrama = mhs[maha].dormname;
  int asra = find_dorm(asrama, zdrm, drm);
  drm[asra].residents_num--;
  strcpy(mhs[maha].dormname, "left");
}


void assign_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int zstd, int zdrm, int find_id(char *nim, int zstd, struct student_t *mhs), int find_dorm(char *asrama, int zdrm, struct dorm_t *drm))
{
  int maha = find_id(nim, zstd, mhs);
  int asra = find_dorm(asrama, zdrm, drm);
  if (maha >= 0 && asra >= 0 && drm[asra].capacity != drm[asra].residents_num && strcmp(mhs[maha].gender, drm[asra].gender) == 0)
  {
    strcpy(mhs[maha].dormname, asrama);
    drm[asra].residents_num++;
  }
}