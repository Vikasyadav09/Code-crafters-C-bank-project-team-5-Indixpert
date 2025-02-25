#include<stdio.h>

void withdraw()
{
    int amount;
    int accnum;
    int balance =0;
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

            printf("\nPlease Enter the withdraw Amount :");
           while( scanf("%d", &amount)!=1)
           {
            while((ch=getchar()) != '\n' && ch !=EOF);
            printf("\n character are not allowed please enter valid amount");
           }
            if (balance >= amount && amount % 100 == 0 && amount >= 0)
            {
                printf("\nAmount Withdrawn : %d", amount);
                break;
            }
            else
            {
                printf("\nInsufficient Balance or Imporper Withdrawal amonunt.");
            }
        }
        balance = balance - amount;
        printf("\nTotal Balance : %ld", balance);
    }
}
