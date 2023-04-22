// DO NOT EDIT
#include "StudentDormitory.h"
#include <stdio.h>
#include <stdlib.h>

int main(int _argc, char **_argv)
{
  struct student_t *std = malloc(12 * sizeof(struct student_t));
  struct dorm_t *dorm = malloc(4 * sizeof(struct dorm_t));
  struct student_dormitory_t *students_dorms = malloc(12 * sizeof(struct dorm_t));

  dorm[0] = create_dorm("Pniel", 10, A, FEMALE);
  dorm[1] = create_dorm("Silo", 10, A, MALE);
  dorm[2] = create_dorm("Kapernaum", 10, A, MALE);
  dorm[3] = create_dorm("Mamre", 10, A, FEMALE);

  
  std[0] =
      create_student("12S20999", "Wiro Sableng", "2020", "Information Systems", MALE);
  std[1] =
      create_student("12S18019", "Novita Hutapea", "2018", "Information Systems", FEMALE);
  std[2] =
      create_student("12S19023", "Irfan Siregar", "2019", "Information Systems", MALE);
  std[3] =
      create_student("12S20030", "Lamsihar Siahaan", "2020", "Information Systems", FEMALE);
  std[4] =
      create_student("12S21056", "Endang Siregar", "2021", "Information Systems", FEMALE);
  std[5] =
      create_student("11319002", "Asido Agripo Panjaitan", "2019", "Information Technology", MALE);
  std[6] =
      create_student("11319014", "Alex Sander Hutapea", "2019", "Information Technology", MALE);
  std[7] =
      create_student("13319004", "Sotar Dodo", "2019", "Computer Technology", MALE);
  std[8] =
      create_student("21S20031", "Aldi Sitorus", "2020", "Engineering Management", MALE);
  std[9] =
      create_student("31S20020", "Friskila Ariyanty", "2020", "Bioprocess Engineering", FEMALE);

  assign_students(students_dorms, dorm, std, 4, 10);

  print_students_dorm(students_dorms, 10, dorm, 4, std);

  return 0;
}

// DO NOT EDIT
