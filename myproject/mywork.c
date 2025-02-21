#include<stdio.h>
int key;
float newbalance=0;
 long long accountnumber;
char name[50];
float balance;
void menu()
{
  printf("\t\t\t ***** Banking Management System ******");
  printf("\n   press 1 for create account");
  printf(" \n  press 2 for deposit money");
  printf("\n   press 3 for withdraw the money");
  printf("\n   press 4 for check balance");
  printf("\n   press 5 for display accont details");
  printf("\n   press 6 for exit program");

  printf(" \n\n\n *please press any key*");
  scanf(" \n %d", &key);

}

void createaccount()
{

printf("\n\nEnter the accont number");
scanf("%lld",&accountnumber);
while(1){
if(accountnumber>10000000000 && accountnumber<=99999999999)
{
   printf("\n Enter accont holder name");
   scanf("%s",&name);
   //printf("** ACCOUNT CREATED SUCESSFULLY  **"); 
   
   break;
}

else
{
    printf(" enter the correct account number");
    scanf("%lld",&accountnumber);}
    if(accountnumber>10000000000 && accountnumber<=99999999999)
   {
       printf("\n Enter accont holder name");
       scanf("%s",&name);
       printf("** ACCOUNT CREATED SUCESSFULLY  **"); 
       break;
    }
   else{
    printf("\n try again you enter two time wrong account number ");
    printf("\n please enter 11 digit account number");
    scanf("%lld",&accountnumber);
    printf("\n Enter accont holder name");
    scanf("%s",&name);
    break;
    }

}
  // printf("\n please enter any key");
   //scanf("\n %d",&key);
}
void openingbalance()
{
float openingbalance;
printf("\n please enter opening balance minimum 500");
scanf("\n\n%f",&openingbalance);
if(openingbalance>=500)
{
    balance += openingbalance;
    printf("\n your opening balace is :%f",balance);
}
else
{
    printf("\n enter the valid opening balance");
    scanf("\n%f",&openingbalance);
    balance += openingbalance;
    printf("\n your opening balace is :%f",balance);

}
}



void deposit()
{
float depositamount;
printf(" enter the amount you want to deposit:");
scanf("%f",&depositamount);
if(depositamount>0)
{
balance +=depositamount;
printf("deposit balance is : %f",balance);
}
else
{
    printf("please enter the valid amount:");
}
printf("\n please enter any key");
scanf("\n\n %d",&key);

}



void withdraw()
{
float amount;
printf("\nplease enter the withdraw amount :");
scanf("%f",&amount);
while(1){
if(amount>0 && amount<=balance)
{
balance -=amount;
printf("\nwithdraw sucessfull: your remain balance is: %f\n",balance);
break;
}
else
{
    printf("\n please enter a valid amount:");
scanf("%f",&amount);
balance -=amount;
printf("\nwithdraw sucessfull: your remain balance is: %f\n",balance);
if(amount>balance){
printf("\n you have not sufficient amount which you enter:first deposit then withdraw ");}
}
break;
}
printf("\n please enter any key");
scanf("\n\n %d",&key);
}


void checkbalance()
{

    printf("\n your cureent balance is:%f",balance);
    printf("\n please enter any key");
    scanf("\n %d",&key);
}


void accountdetails()
{
    printf("\n*****ACCOUNT DETAILS****");
    printf("\naccount number is : %lld " ,accountnumber);
    printf("\n account holder name  :%s",name);
    printf(" \n balane %f",balance);
    printf("\n please enter any key");
    scanf("\n %d",&key);
}
void exit()
{
printf("thanku");

printf("\n please enter any key");
scanf("\n %d",&key);

}

int main()
{
 

menu();

while(1){

    if(key==1)
    {
      createaccount();
openingbalance();
printf("\n  Account open Sucessfully");
    }
  
   else if(key==2 || key==3 || key==4 || key==5)
   {
    
    printf("\n please first create account then press any other key");
    
   }
   printf("\n please enter any key");
   scanf("\n %d",&key);


    
  
    if(key==2)
    {
      deposit();
    }
  
    if(key==3)
    {
      withdraw();
    
    }
  
    if(key==4)
    {
      checkbalance();
    
    }
  
    if(key==5)
    {
      accountdetails();
    
    }

    if(key==6)
    {
      exit();
    break;
    }
}
    return 0;
}