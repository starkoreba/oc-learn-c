#include <stdio.h>

void splitMinutes(int *ptHours, int *ptMinutes);

int main(int argc, const char *argv[])
{
  int hours = 1, minutes = 90;

  splitMinutes(&hours, &minutes);

  printf("%d heures et %d minutes", hours, minutes);

  return 0;
}

void splitMinutes(int *ptHours, int *ptMinutes)
{
  *ptHours = *ptMinutes / 60;
  *ptMinutes = *ptMinutes % 60;
}
