#include <stdio.h>

void createaccount();
void deposit();
void withdraw();
void checkbalance();
void checkdetails();
long long int accnum;
char name[30];
long int balance;

void menu()
{
    while (1)
    {
        printf("\n~~~~~~~~~~~~~~~~~~~~~Banking System~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        printf("\nEnter 1 to Create Account.");
        printf("\nEnter 2 to Deposit Money.");
        printf("\nEnter 3 to Withdraw Money.");
        printf("\nEnter 4 to Check Balance.");
        printf("\nEnter 5 to Check Account Details.");
        printf("\nEnter 0 to Exit.");

        int a;
        printf("\nEnter a Tasknumber to Run : ");
        scanf("%d", &a);

        if (a == 1)
        {
            createaccount();
        }
        else if (a == 2)
        {
            deposit();
        }
        else if (a == 3)
        {
            withdraw();
        }
        else if (a == 4)
        {
            checkbalance();
        }
        else if (a == 5)
        {
            checkdetails();
        }
        else if (a == 0)
        {
            printf("Exit!");
            break;
        }
        else
        {
            printf("\nEnter a valid task number.");
        }
    }
}

void createaccount()
{
    while (1)
    {

        printf("\nEnter Account number (11 digits only) : ");
        scanf("%lld", &accnum);
        if (accnum > 10000000000 && accnum < 99999999999)
        {
            printf("\nEnter Account Holder Name :");
            scanf(" %[^\n]", &name);
            break;
        }
    }

    while (2)
    {

        printf("\nEnter Opening Balance Amount (min : 500) :");
        scanf("%ld", &balance);

        if (balance>=500)
        {
            break;
        }
    }

    printf("\nAccount Number : %lld", accnum);
    printf(" \nAccount Holder Name : %s", name);
    printf("\nTotal Balance : %ld", balance);
}
void deposit()
{
    int amount;

    if (accnum == 0)
    {
        printf("\nAccount not found!");
        printf("\nEnter 1 to Create account");
    }
    else
    {
        while (1)
        {
            printf("\nPlease Enter Amount :");
            scanf("%d", &amount);
            if (amount % 100 == 0 && amount > 0)
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
void withdraw()
{
    int amount;
    if (accnum == 0)
    {
        printf("\nAccount not found!");
        printf("\nEnter 1 to Create account");
    }
    else
    {
        while (1)
        {

            printf("\nPlease Enter Amount :");
            scanf("%d", &amount);
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

void checkbalance()
{
    if (accnum==0)
    {
        printf("\nAccount not found!");
        printf("\nEnter 1 to Create account");
    }
    else{
        printf("\nAccount Balance.");
        printf("\nTotal Balance : %ld",balance);
    }
}
void checkdetails(){
    if(accnum==0)
    {
        printf("\nAccount not found!");
        printf("\nEnter 1 to Create account");
    }
    else
    {
        printf("\nAccount Details");
        printf("\nAccount Number :%lld",accnum);
        printf("\nAccount Holder Name :%s",name);
        printf("\nTotal Balance :%ld",balance);
    }
}

int main()
{
    menu();

    return 0;
}