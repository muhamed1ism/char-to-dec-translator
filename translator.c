#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{
  char a,c;
  int b;
  printf("DECIMALNA VRIJEDNOST TIPKE\n");
  printf("Kada zelite prekinuti program pritisnite ENTER dva puta!\n");
  printf("S time ce vam se usput ispisat njegova decimalna vrijednost\n");
  printf("Pritisnite tipku čiju ASCII vrijednost želite da znate: \n");
  while(a!=10)
  {
  a = getch();
  b = toascii(a);
  printf("ASCII vrijednost tipke koju ste unijeli je: %d\n", b);
  }
  while(c!=10)
  {
    c=getch();
  }
}
