// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/gender.h"

int main(int _argc, char **_argv)
{
  char input[75];
  int n = 0;
  int size = 0;
  struct dorm_t *drm = malloc(size * sizeof(struct dorm_t));
  int p = 0;
  int sizee = 0;
  struct student_t *mhs = malloc(sizee * sizeof(struct student_t));
  char *token;

  while (1 == 1)
  {
    fgets(input, sizeof input, stdin);
    while (1)
    {
      if (input[strlen(input) - 1] == '\n' || input[strlen(input) - 1] == '\r')
      {
        input[strlen(input) - 1] = '\0';
      }
      else
      {
        break;
      }
    }

    token = strtok(input, "#");
    if (strcmp(token, "---") == 0)
    {
      break;
    }
    else if (strcmp(token, "dorm-add") == 0)
    {
      size++;
      drm = realloc(drm, size * sizeof(struct dorm_t));
      drm[n] = create_dorm(input);
      n++;
    }
    else if (strcmp(token, "dorm-print-all") == 0)
    {
      for (int m = 0; m < n; m++)
      {
        print_dorm(drm[m]);
      }
    }
    else if (strcmp(token, "student-add") == 0)
    {
      sizee++;
      mhs = realloc(mhs, sizee * sizeof(struct student_t));
      mhs[p] = create_student(input);
      p++;
    }
    else if (strcmp(token, "student-print-all") == 0)
    {
      for (int m = 0; m < p; m++)
      {
        print_student(mhs[m]);
      }
    }
  }
  free(mhs);
  free(drm);
  
  return 0;
}