#include <stdio.h>
#include "create.h"

void passbook()
{
    FILE *file = fopen("passbook.txt", "w");
    if (file== NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    int which, no_of_transactions;
    float amount;

    fprintf(file, "Updated transactions \n");

    for(no_of_transactions=0; no_of_transactions<=5; no_of_transactions++)
    {
        printf("\n 1 - Debit or 2 - Credit? \n");
        scanf("%d",&which);
        switch(which){
        case 1:
//            fprintf(file,"Debit \n");
            printf("Enter debited amount: \t");
            scanf("%f",&amount);
            fprintf(file,"\n %d Debit - %f \n",no_of_transactions,amount);
            break;
        case 2:
//            fprintf(file,"Credit \n");
            printf("Enter credited amount: \t");
            scanf("%f",&amount);
            fprintf(file,"\n %d Credit - %f \n",no_of_transactions,amount);
            break;
        default:
            printf("Enter proper option \n");
        }
    }


    fclose(file);
    printf("Data written to file successfully!\n");
}

