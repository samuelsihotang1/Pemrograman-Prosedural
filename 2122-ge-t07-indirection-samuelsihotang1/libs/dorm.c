#include "dorm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dorm_t create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender)
{
  struct dorm_t dorm_;

  strcpy(dorm_.name, _name);
  dorm_.capacity = _capacity;
  dorm_.gender = _gender;
  dorm_.residents_num = 0;
  
  return dorm_;
}

void print_dorm(struct dorm_t _dorm)
{
  printf("%s|%i|", _dorm.name, _dorm.capacity);
  if (_dorm.gender == 0)
  {
    printf("male|");
  }
  else if (_dorm.gender == 1)
  {
    printf("female|");
  }
  printf("%i\n", _dorm.residents_num);
}