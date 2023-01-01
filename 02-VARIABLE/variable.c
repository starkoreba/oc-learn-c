#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
  int nb_lifes = 5;

  printf("Vous avez %d vies\n", nb_lifes);
  printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête
  nb_lifes = 4; // Il vient de perdre une vie !
  printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n\n", nb_lifes);

  return 0;
}
