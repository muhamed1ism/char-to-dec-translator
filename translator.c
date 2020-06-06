#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{
  char a,c;
  printf("DECIMAL VALUE OF THE KEY\n");
  printf("To exit the program press ENTER twice!\n");
  printf("That way it will display the value of ENTER and exit the program.\n");
  printf("Press the key: \n");
  while(a!=10)
  {
  a = getch();
  printf("Decimal value of that key is: %i\n", a);
  }
  printf("Press ENTER one more time to exit the program!\n");
  while(c!=10)
  {
    c=getch();
  }
}
