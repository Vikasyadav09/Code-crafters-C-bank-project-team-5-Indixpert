#include<stdio.h>

int main()
{
 int accountNumber;
 double totalBalance;
 char name[30];

// Input account details
 printf("Enter Account Number: ");
 scanf("%d", &accountNumber);

 printf("\nenter account holder name :");
 scanf("%s",&name);

 printf("Enter Total Balance: ");
 scanf("%lf", &totalBalance);

 
 // Display account details
 printf("\nAccount Details:\n");
 printf("Account Number: %d\n", accountNumber);
 printf("\naccount holder name : %s",name);
 printf("Total Balance: %.2lf\n", totalBalance);


 return 0;


}