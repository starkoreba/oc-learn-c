#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TODO : Enhance your code with condition

int main(int argc, char *argv[])
{
  int nb_lifes = 5, level = 1, difficulty = 0, damages = 1, result = 0;

  printf("You have %d lifes and you are level %d\n", nb_lifes, level);
  printf("Choose a difficulty 1-3 :\n");
  scanf("%d", &difficulty);

  damages *= difficulty;
  result = nb_lifes - damages;

  printf("You choose difficulty %d take %d damages \n", difficulty, damages);
  printf("You survived with %d lifes\n", result);

  return 0;
}
