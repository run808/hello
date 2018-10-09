#include <stdio.h>

struct person
{
  char name[20];
  char phoneNum[20];
  int age;
};

int main(void)
{
  struct person arr[3]={
    {"sg lee", "010-0001-0200", 21}, //first unit
    {"jy jeong", "010-2200-3300", 22}, //second unt
    {"js han", "010-4455-7788", 19} //third unit
};

  int i;
  for(i=0; i<3; i++)
    printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
    
  return 0;
}
