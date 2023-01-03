#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "controller.h"

// TODO : Enhance your code with functions

int real_damage(int damages, int diff);

int main(int argc, char *argv[])
{
  int nb_lifes = 5, level = 1, difficulty = 0, damages = 1, result = 0;

  printf("You have %d lifes and you are level %d\n", nb_lifes, level);
  do
  {
    printf("Choose a difficulty 1-5 :\n");
    scanf("%d", &difficulty);
  } while (difficulty > 5 || difficulty == 0);


  damages = real_damage(damages, difficulty);
  result = nb_lifes - damages;

  printf("You choose difficulty %d take %d damages \n", difficulty, damages);

  if(result > 0)
  printf("You survived with %d lifes\n", result);
  else
  printf("You loose\n");

  return 0;
}

int real_damage(int damages, int diff)
{
  return damages *= diff;
}
