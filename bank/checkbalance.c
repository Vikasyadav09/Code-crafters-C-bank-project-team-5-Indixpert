#include<stdio.h>
char accnum[12];
char name[50];
long int balance;

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
