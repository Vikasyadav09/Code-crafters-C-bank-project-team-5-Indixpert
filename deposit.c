#include<stdio.h>

void deposit()
{
    int balance =0;
    int accnum;
    int amount;
    char ch;

    if (accnum == 0)
    {
        printf("\nAccount not found!");
        printf("\nEnter 1 to Create account");
    }
    else 
    {
        while (1)
        { 
            printf("\nPlease Enter deposit Amount :");
          while( scanf("%d", &amount) !=1)
          {
            while((ch = getchar()) !='\n'&& ch !=EOF);
            printf("\nEnter a Valid Amount to Deposit!");
          }
            if (amount>0)
            {
                printf("\nAmount Deposited : %d", amount);
                break;
            }
            else
            {
                printf("\nEnter a Valid Amount to Deposit!");
            }
        }
        balance = balance + amount;
        printf("\nTotal Balance : %ld", balance);
    }
}