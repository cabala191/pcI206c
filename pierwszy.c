<<<<<<< HEAD
#include <stdio.h>
#include <conio.h>
char znak='a';
void main()
{
  puts("Naciskaj klawisze (q=wyjscie)");
  while (znak!='q')
  {
    znak=getch();
    printf("Znak %c to liczba %d\n",znak,znak);
  }
=======
#include <stdio.h>
#include <conio.h>
char znak='a';
void main()
{
  puts("Naciskaj klawisze (q=wyjscie)");
  while (znak!='q')
  {
    znak=getch();
    printf("Znak %c to liczba %d\n",znak,znak);
  }
>>>>>>> a87ac19cdc53f52a34c15b3323d2e6cdc73213d1
}