#include <stdio.h>

//void display(int *array, int lenght);
void display(int array[], int lenght);
int sum(int array[], int lenght);
double average(int array[], int lenght);


int main(int argc, char const *argv[])
{
  int array[4] = {12, 1, 5, 9};

  display(array, 4);
  printf("The sum is %d\n", sum(array, 4));
  printf("The average is %f\n",average(array, 4));

  return 0;
}

// TODO: Write a function to declare and display all value
// function takes 2 params array address and lenght
void display(int *array, int lenght)
{
  int i;

  for (i = 0 ; i < lenght ; i++)
  {
    printf("%d\n", array[i]);
  }
}

int sum(int array[], int lenght)
{
  int i;
  int sum = 0;
  for (i = 0; i < lenght ; i++)
  {
    sum += array[i];
  }
  return sum;
}

double average(int array[], int lenght)
{
  int i;
  int sum = 0;
  for (i = 0; i < lenght ; i++)
  {
    sum += array[i];
  }
  return (double)sum/(double)lenght;
}
