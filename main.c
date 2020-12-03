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
        scanf("%lf", &cash);    
        openAccount(cash); 
        break;
            case 'B':
           
        printf("Please enter account number: ");
        scanf("%d", &account);
                Balance(account); 
                break;
            
            case 'D':
            printf("Please enter account number: ");
            scanf(" %d", &account);
            printf("Please enter the amount to deposit: ");
            scanf("%lf", &cash);
            deposit(account,cash); 
            break;

             case 'W':
             printf("Please enter account number: ");
            scanf(" %d", &account);
            printf("Please enter the amount to withdrawl: ");
            scanf("%lf", &cash);
                 withdrawal(account,cash); break;
             case 'C':
              printf("Please enter account number: ");
            scanf(" %d", &account);
                 closeAc(account); break;
             case 'I':
                
                printf("Please enter the interest rate: ");
                scanf(" %lf", &interest_rate);
                Interest(interest_rate); 
                break;
             case 'P':
                 print(); break;
            case 'E':
            //exit
                c='E';
        }
    
}

    return 0;
}