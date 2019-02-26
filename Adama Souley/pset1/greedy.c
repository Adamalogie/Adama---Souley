#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int sum=0;
    //input a credit cardlong long cc;
    do
    {
        cc =get_long_long("credit card number: ");
    }
    while(cc<0);
    //verify the lenght
    int count =0;
    // count the number of digit long long number=cc;
    {
        while(number>0)
        {
            number=number/10;
            count++;
        }
        //credit card has between 13_16 numbers depending on the type.
        if(count!=13 && count!=15 && count!=16)
        {
            printf("invalid card number\n");
        }
        //card digit initialize//starting with the last number.
        int digit [count];
        for(int i=0; i<count; i++)
        {
            digit[i]=cc%10;
            cc=cc/10;
        }
        //take the other digits
        int odigit[count]
        for(int i=0; i<count; i++)
        {
            odigit[i]=digit[i];
        }
        //multiply per 2
        for(int i=1; i<count; i+=2)
        {
            digit[i]=digit*2;
        }
        // check sum and calculate all the digits
        for(int i=0; i<count; i++)
        {
            sum=sum+digit[i]%10+digit[i]/10%10;
        }
        //verify if the second um =0
        if(sum%10==0)
        {
            //check the type of card
            //visa
            if(count==13 && digit[12]==4 && sum%10==0)
            {
                printf("valid visa\n");
            }
            if(count==16 && odigit[15]==4 && sum%10==0)
            {
                printf("valid visa\n");
            }
            //amex
            if(count==15 && odigit[14]==3 && sum%10=0 &&(odigit[13]==4 || odigit[13]==7))
            {
                printf("valid amex\n");
            }
            //master card
            if(count==16 && odigit[15]==5 && (odigit[14]==1 || odigit[14]==2 || odigit[14]==3 || odigit[14])==4 || odigit[14]==5 && sum%10==0)
            {
                printf("valid master card\n");
            }
            //check if sum is not verified=invalid
            else
            {
                printf("invalid\n");
            }
        }

    }
}