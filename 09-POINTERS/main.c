#include <stdio.h>


int main(int argc, const char * argv[])
{
  int age = 21;
  int *ptage = &age;

  printf("%d", *ptage);

  return 0;
}
