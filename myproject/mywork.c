#include<stdio.h>
int key;
float newbalance=0;
char accountnumber[12];
char name[20];

int createaccount()
{
char accountnumber[12];
char name[50];
while(1){
printf("Enter the accont number");
scanf("%d",&accountnumber[12]);
if(accountnumber[12]==1)
{
   printf("\n Enter accont holder name");
   scanf("%s",&name[50]); 
   break;
}
else
{
    printf(" enter the correct account number");
    scanf("%d",&accountnumber);
}
}
}
void deposit()
{
float depositamount;
printf(" enter the amount you want to deposit:");
scanf("%f",&depositamount);
if(depositamount>0)
{
newbalance +=depositamount;
printf("new balance : %f",newbalance);
}
else
{
    printf("please enter the valid amount:");
}


}
void withdraw()
{
float amount;
printf("\nplease enter the withdraw amount :");
scanf("%f",&amount);
if(amount>0 && amount<=newbalance)
{
newbalance -=amount;
printf("withdraw sucessfull:%f\n",newbalance);
}
else
{
    printf("\n please enter a valid amount:");
}
}
void checkbalance()
{

    printf("\n your cureent balance is:%f",newbalance);
}
void accountdetails()
{
    printf("*****ACCOUNT DETAILS****");
    printf("\naccount number :%d",accountnumber[12]);
    printf("\n account holder name%s",name[20]);
    printf(" \n balane %f",newbalance);
}


int main()
{
  printf("\t\t\t ***** Banking Management System ******");
 printf("\n  1: press 1 for create account");
  printf(" \n 2: press 2 for deposit money");
  printf("\n  3: press 3 for withdraw the money");
 printf("\n  4: press 4 for check balance");
 printf("\n  5: press 5 for display accont details");
  printf("\n  6: press 6 for exit program");
 printf(" \n *please press any key*");
  scanf(" \n %d", &key);
    return 0;
}