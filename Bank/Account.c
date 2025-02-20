#include<stdio.h>

// void createaccount();
void withdraw();
long long int accnum;
long int balance=1000;

int Menu()
{
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Banking System~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

printf("Enter 1 to Create Account.\n");
printf("Enter 2 to Deposit Money.\n");
printf("Enter 3 to Withdraw Money.\n");
printf("Enter 4 to Check Balance.\n");
printf("Enter 5 to Exit.\n");

int a;
printf("Enter Task number to Run :");
scanf("%d",&a);

if(a==3)
{
    withdraw();
}

else 
{
    printf("Exit");
}

}

// void createaccount()
// {
    
//     char name[30];
    

    
    
//     printf("\nEnter Account Number :");
//     scanf("%lld",&accnum);
//     if(accnum>10000000000 && accnum<99999999999)
//     {

//     }
//     else
//     {
//         printf("Enter correct account number :");
//         scanf("%lld",&accnum);
        
//     }
   
//     printf("\nEnter Account Holder Name :");
//     scanf("%s",&name);

//     printf("\nEnter Opening Balance Amount (500 or more) :");
//     scanf("%ld",&balance);
//     if (balance>=500)
//     {
        
//     }
//     else
//     {
//         printf("Enter Opening Balance amount (500 or more) :");
//         scanf("%ld",&balance);
//     }
    


//     printf("\nAccount Number : %lld",accnum);
//     printf("\nAccount Holder Name : %s",name);
//     printf("\nTotal Balance : %ld",balance);
// }

void withdraw()
{

        int amount;
        printf("\nPlease Enter Amount :");
        scanf("%d",&amount);
        if(balance>amount && amount%100==0)
        {
            printf("\nAmount Withdrawn : %d",amount);
        }
        else{
            printf("\nInsufficient Balance or Imporper Withdrawal amonunt.");
            printf("\nPlease Enter Amount :");
            scanf("%d",&amount);
            printf("\nAmount Withdrawn : %d",amount);
        }
    
        balance=balance-amount;
        printf("\nTotal Balance : %ld",balance);
    
    

}

int main()
{
    Menu();

    return 0;
}