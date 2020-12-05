#include "myBank.h"
#include <stdio.h>

int main(){
 int account=0;
    double cash=0;
    double interest_rate=1;
char c = ' ';
while (c != 'E')
{
        printf("\nPlease choose a transaction type:\n");
        printf(" O-Open Account\n");
        printf(" B-Balance Inquiry\n");
        printf(" D-Deposit\n");
        printf(" W-Withdrawal\n");
        printf(" C-Close Account\n");
        printf(" I-Interest\n");
        printf(" P-Print\n");
        printf(" E-Exit\n");
        scanf(" %c", &c);
         
         switch (c) {
            case 'O':
         
        printf("Please enter amount for deposit: ");
         if(scanf("%lf", &cash) != 1){
        printf("Failed to read the amount\n");
        BufferClean();
        break;
         }
        openAccount(cash); 
        break;
            case 'B':
           
        printf("Please enter account number: ");
        if(scanf("%d", &account) != 1){
                printf("Failed to read the amount\n");
        }
else
{
    Balance(account); 
                
}
BufferClean();
               break;
            
            case 'D':
            printf("Please enter account number: ");
            if (scanf(" %d", &account)!=1)
            printf("Failed to read the account number");
            else{
            printf("Please enter the amount to deposit: ");
            if(scanf("%lf", &cash)!=1)
            printf("Failed to read the account number");
            else
            deposit(account,cash); 
            }
            BufferClean();
            break;

             case 'W':
             printf("Please enter account number: ");
            scanf(" %d", &account);
            printf("Please enter the amount to withdrawl: ");
            scanf("%lf", &cash);
                 withdrawal(account,cash);
                 BufferClean();
                  break;
             case 'C':
              printf("Please enter account number: ");
            scanf(" %d", &account);
                 closeAc(account);
                 BufferClean();
                  break;
             case 'I':
                
                printf("Please enter the interest rate: ");
                scanf(" %lf", &interest_rate);
                Interest(interest_rate); 
                BufferClean();
                break;
             case 'P':
             
                 print(); 
                 BufferClean();
                 break;
            case 'E':
            closeAll();
            //exit
                c='E';
                BufferClean();
                break;

            default:
             
                printf("Invalid transaction type\n");
        }
    
}

    return 0;
}
