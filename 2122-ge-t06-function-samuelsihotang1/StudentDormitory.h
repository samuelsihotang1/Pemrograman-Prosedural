// DO NOT EDIT
#ifndef StudentDormitory_H
#define StudentDormitory_H

enum gender_t
{
  MALE,
  FEMALE
};
enum type_t
{
  FOR_MALE,
  FOR_FEMALE
};

enum status_t
{
  A,
  NA
};

struct student_t
{
  char id[12];
  char name[100];
  char year[5];
  char study_program[40];
  enum gender_t gender;
};

struct dorm_t
{
  char dormitory_name[20];
  int capacity;
  enum status_t status;
  enum type_t type;
  int residents_num;
  // struct student_t *students;
};

struct student_dormitory_t
{
  struct dorm_t dorm;
  struct student_t student;
};


void print_students(struct student_t *_students, int size);
void print_dorms(struct dorm_t *_dorm, int size);
void print_dorm(struct dorm_t _dorm);
void print_students_dorm(struct student_dormitory_t *students_dorms, int students_size, struct dorm_t *_dorm, int droms_size, struct student_t *students);

struct student_t create_student(char *_id, char *_name, char *_year, char *_study_program, enum gender_t _gender);
struct dorm_t create_dorm(char *_dormitory_name, unsigned short _capacity, enum status_t _status, enum type_t _type);
struct dorm_t check_dorm(struct dorm_t *dorms, int size, enum type_t gender);
void assign_students(struct student_dormitory_t *students_dorms, struct dorm_t *dorms, struct student_t *students, int size_dorms, int size_students);

#endif
// DO NOT EDIT
