#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int nb_lifes = 5, level = 1, difficulty = 0, damages = 1, result = 0;

  printf("You have %d and you are level %d\n", nb_lifes, level);
  printf("Choose a difficulty 1-3 :\n");
  scanf("%d", &difficulty);

  result = nb_lifes - damages * difficulty;

  printf("You choose difficulty %d take %d damages %d\n", difficulty, damages);
  printf("You survived with %d lifes", nb_lifes);

  return 0;
}
