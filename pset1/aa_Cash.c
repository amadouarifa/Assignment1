
             //Amadou Arifa Arifa Mamane

    //Logical operators
#include <stdio.h>
#include <cs50.h>

int main (void)

{
        // prompting user to the amount
    int z=get_int ("The money: ");

    //coins declaration
    int a=500, b=250, c=200, d=100, e=50, f=25, g=10, h=5, i=0;


    //CONDITIONS TO GET THE NUMBER OF COINS USED (a,b,c,d,e,f,g,h,i)

     while (z>=a)
    {
        z=z-a;
     i++;
   }

     while (z>=b)
    {
     z=z-b;
     i++;
   }

     while (z>=c)
   {
     z=z-c;
     i++;
   }
     while (z>=d)
    {
     z=z-d;
     i++;
   }

     while (z>=e)
   {
     z=z-e;
     i++;
   }

     while (z>=f)
    {
     z=z-f;
     i++;
   }

     while (z>=g)
    {
     z=z-g;
     i++;
   }

     while (z>=h)
     {
     z=z-h;
     i++;
   }

     while (z>=i)
     {
     z=z-i;
     i++;
   }

   //printing the number of coins used after conditions done

   printf ("The number of coins are: %i \n", i);
}