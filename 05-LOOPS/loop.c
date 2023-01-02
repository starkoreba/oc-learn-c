#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TODO : Enhance your code with condition

int main(int argc, char *argv[])
{
  int nb_lifes = 5, level = 1, difficulty = 0, damages = 1, result = 0;

  printf("You have %d lifes and you are level %d\n", nb_lifes, level);
  printf("Choose a difficulty 1-5 :\n");
  scanf("%d", &difficulty);

  damages *= difficulty;
  result = nb_lifes - damages;

  printf("You choose difficulty %d take %d damages \n", difficulty, damages);

  if(result > 0)
  printf("You survived with %d lifes\n", result);
  else
  printf("You loose\n");

  return 0;
}
