#include <stdio.h>
#include <conio.h>
main ()
{
     int x, y, pot=0,i=0, count=0;
 
     printf ("valor de X: ");
     scanf ("%d",&x);
     printf ("valor de Y: ");
     scanf ("%d",&y);
       pot = x; 
     for ( i = 1; i < y; i++ ) 
     {
        pot *= x; 
     }
     printf ("%d",i);
          printf ("\nvalor de X elevado a Y sera : %d", pot);
  
          getch();  
}
