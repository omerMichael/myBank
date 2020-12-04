#include <stdio.h>
#include "myBank.h"
double bank [ACCOUNTS][2] = {0};


void openAccount(double amount){
  
    if (amount<0)
    {
        printf("Invalid amount\n");
        return;
    }
    
    int flag = 0; 
    int i=0;
    while (i<ACCOUNTS && flag==0){
        if (bank[i][1]==0){  //if this account empty
        bank[i][0] = amount;
        bank[i][1]=1; // now is open
        flag =1;
        }
        i++;
    }
    if(flag==1){
        i+=900;
        printf("New account number is: %d \n",i);
    }

}
// char B Balance
void Balance(int account_number){
if (account_number>900&&account_number<951)
{
    int i = account_number-901;
    //check if the account open
    if (bank[i][1]== 1)
    {
        printf("The balance of account number %d is: %.2lf \n", account_number , bank[i][0]);
    }else{
        printf("This account is closed \n");
    }
    
}


}

// char D deposit
void deposit(int account_number,double amount){
if (amount<0)
printf("Cannot deposit a negative amount \n");

if (account_number>900&&account_number<951){
    int i = account_number-901;
    if (bank[i][1]== 1){
    bank[i][0] += amount;
    printf("The new balance is: %.2lf\n", bank[i][0]);
    }
    else
    {
           printf("This account is closed\n");
    }
    
}
else{
    printf("Invalid account number \n");
}


}

void withdrawal(int account_number,double amount){
   if (account_number>900&&account_number<951){
    int i = account_number-901;
    if (bank[i][1]== 1){
    if (amount<bank[i][0])
    {
    bank[i][0] -= amount;    
    }
    

    printf("The new balance is: %.2lf\n", bank[i][0]);
    }
    else
    {
           printf("This account is closed\n");
    }
    
}


}

void closeAc(int account_number){

if (account_number>900&&account_number<951){
    int i = account_number-901;
    if (bank[i][1]== 1){
    //now the money is zero
    bank[i][0] = 0;
    //close the account
    bank[i][1] = 0;
}
}
}

void Interest(double  interest_rate){
    // for to all account and add interest
    for (int i=0; i< ACCOUNTS; i++){
        if (bank[i][1] == 1){
            bank[i][0] = bank[i][0] + bank[i][0] * (interest_rate/100);
        }
    }
}


void print(){
for (int i = 0; i < ACCOUNTS; i++)
{
    if(bank[i][1] == 1){
        printf("The account number %d  balance is: %.2lf\n", (i+901), bank[i][0]);
    }
}



}

void closeAll(){
    for (int i = 0; i < ACCOUNTS; i++)
{
    if(bank[i][1] == 1){
    bank[i][1] = 0;
}
}
}
void BufferClean()
{
	 char clear;
	 while ((clear = getchar()) != '\n' && clear != EOF);//  Buffer cleanner- clean the buffer. use in the program to clean the buffer
	 	 	 	 	 	 	 	 	 	 	 	 	 	 //after every input opreation
}