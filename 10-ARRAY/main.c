#include <stdio.h>

// TODO: Write a function to declare and display all value
// function takes 2 params array address and lenght

void display(int *array, int lenght);

int main(int argc, char const *argv[])
{
  int array[4] = {12, 1, 5, 9};

  display(array, 4);

  return 0;
}

void display(int *array, int lenght)
{
  int i;

  for (i = 0 ; i < lenght ; i++)
  {
    printf("%d\n", array[i]);
  }
}
