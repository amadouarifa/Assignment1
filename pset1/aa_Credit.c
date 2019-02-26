

            //Amadou Arifa Arifa Mamane

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //declaring differents values of the integers and the credit card number
    long long i, g, m;
    int s, p, sum;

    do
    {
        //prompt user for the credit card number
        i=get_long_long("Your creditcard number: ");
    }
    while (i<0);

    //Condition for doing the addition when jump numbers

    for (g=i, s=0; g>0; g/=100)
    s+= g%10;

     //Condition for doing the multiplication (2*) of the numbers jumped

    for(m=i/10, p=0; m>0; m/=100)
    {
        if (2* (m%10)>9)
        {
            p+=(2*(m%10))/10;
            p+=(2*(m%10))%10;
        }
        else
            p+=2 *(m%10);
    }
        //doing the sum to know or to check whether the rsukt is true or false in order to say that the card is true or not

    sum=s+p;

    if (sum%10==0)

    {   // creating an interval in which the firsts numbers and the length of the creditcard(AMEX) are include to say to my program to not find out of the AMEX card
        if ((i >=340000000000000 && i<350000000000000) || (i>=370000000000000 && i<380000000000000))

            //Print that the card is valid and it's an AMEX card if the condition is OK
            printf("Your card is an American Express\n");

            //creating another interval for the Mastercard to not also find out of the firsts numbers and the length
        else if (i>=510000000000000 && i<560000000000000)

        //Print that the card is valid and it's an Mastercard if the condition is OK
            printf("Your card is a Mastercard\n");

            //creating another interval for the Visa card to not also find out of the firsts numbers and the length
        else if ((i>=4000000000000 && i<5000000000000) || (i>=4000000000000000 && i<5000000000000000))

        //Print that the card is valid and it's an Visa card if the condition is OK
            printf ("Your card is a Visa\n");


        else
        //if all theese conditions are not include or do not exist, to say that the card is invalid
        printf("This card is invalid \n");
    }
}