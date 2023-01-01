#include <stdio.h>
#include <stdlib.h>

/* int main(int argc, char *argv[]) // Équivalent de int main()
{
  int nb_lifes = 5;

  printf("Vous avez %d vies\n", nb_lifes);
  printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête
  nb_lifes = 4; // Il vient de perdre une vie !
  printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n\n", nb_lifes);

  return 0;
}

int main(int argc, char *argv[])
{
  int nombreDeVies = 5, niveau = 1;

  printf("Vous avez %d vies et vous etes au niveau n° %d\n", nombreDeVies, niveau);

  return 0;
} */


int main(int argc, char *argv[])
{
  int age = 0; // On initialise la variable à 0

  printf("Quel age avez-vous ? ");
  scanf("%d", &age); // On demande d'entrer l'âge avec scanf
  printf("Ah ! Vous avez donc %d ans !\n\n", age);

  return 0;
}
