#include <stdio.h>
#include <stdio.h>
#include <ctype.h>

void createaccount();
void openingbalance();
void deposit();
void withdraw();
void checkbalance();
void checkdetails();
long long accnum;
char name[30];
long int balance;

void menu()
{
    while (1)
    {
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Banking System~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        printf("\nEnter 1 to Create Account.");
        printf("\nEnter 2 to Deposit Money.");
        printf("\nEnter 3 to Withdraw Money.");
        printf("\nEnter 4 to Check Balance.");
        printf("\nEnter 5 to Check Account Details.");
        printf("\nEnter 0 to Exit.");

        int a;
        char input[100];

        while (1)
        {
            printf("\nPlease enter the task number: ");
            fgets(input, sizeof(input), stdin);
            if (sscanf(input, "%d", &a) == 1)
            {
                break;
            }
            else
            {
                // printf("Invalid input. Please enter a valid task number.\n");
            }
        }

        if (a == 1)
        {
            createaccount();
            openingbalance();
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
    char input[50];
    int i = 0;
    int valid = 0;
    while (1)
    {
        printf("\nEnter account number (11 digits): ");
        fgets(input, sizeof(input), stdin);
        if (sscanf(input, "%lld", &accnum) == 1, accnum > 10000000000 && accnum <= 99999999999)
        {
            break;
        }
        else
        {
            printf("Invalid account number. Please enter exactly 11 digits.\n");
        }
    }

    while (1)
    {
        printf("Enter account holder's name: ");
        scanf("%s", &name);
        while (name[i] != '\0')
        {
            if (!isalpha(name[i]))
            {
                printf("Invalid name. Please enter only alphabetic characters.\n");
                break;
            }
            i++;
        }

        if (name[i] == '\0')
        {
            // printf("Valid name entered: %s\n", name);
            break;
        }
    }
}

void openingbalance()
{
    char input[50];
    while (1)
    {
        printf("\nEnter Opening Balance Amount (min : 500):");
        fgets(input, sizeof(input), stdin);
        if (sscanf(input, "%d", &balance) == 1, balance >= 500)
        {

            printf("\nAccount Number : %lld", accnum);
            printf("\nAccount Holder Name : %s", name);
            printf("\nTotal Balance : %ld", balance);
            printf("\nAccount created sussfull");
            break;
        }
           else
           {
            printf("\nEntering character or less than 500 is invalid.");
           }
    }
}
void deposit()
{
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
            while (scanf("%d", &amount) != 1)
            {
                while ((ch = getchar()) != '\n' && ch != EOF)
                    ;
                printf("\nEnter a Valid Amount to Deposit!");
            }
            if (amount > 0)
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
            while (scanf("%d", &amount) != 1)
            {
                while ((ch = getchar()) != '\n' && ch != EOF)
                    ;
                printf("\ncharacter are not allowed please enter valid amount");
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

void checkbalance()
{
    if (accnum == 0)
    {
        printf("\nAccount not found!");
        printf("\nEnter 1 to Create account");
    }
    else
    {
        printf("\nAccount Balance.");
        printf("\nTotal Balance : %ld", balance);
    }
}
void checkdetails()
{
    if (accnum == 0)
    {
        printf("\nAccount not found!");
        printf("\nEnter 1 to Create account");
    }
    else
    {
        printf("\nAccount Details");
        printf("\nAccount Number :%lld", accnum);
        printf("\nAccount Holder Name :%s", name);
        printf("\nTotal Balance :%ld", balance);
    }
}

int main()
{
    menu();
    return 0;
}