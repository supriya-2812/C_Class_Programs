#include <stdio.h>
#include "create.h"

int main() {
    int options;
    struct User users[100];
    int countUsers=0;

    while (1) {
        printf("\nSelect an option:\n");
        printf("1. Create User\n");
        printf("2. Delete User\n");
        printf("3. Credit Money\n");
        printf("4. Debit Money\n");
        printf("5. Transfer Money\n");
        printf("6. Update Users\n");
        printf("7. Passbook\n");
        printf("8. Exit\n");

        printf("\n Enter your choice: ");
        scanf("%d", &options);

        switch (options) {
            case 1:
                printf("\nCreate User\n");
                createUser(users,&countUsers);
                break;
            case 2:
                printf("\nDelete User\n");
//                deleteUser();
                break;
            case 3:
                printf("\nCredit Money\n");
//                creditMoney();
                break;
            case 4:
                printf("\nDebit Money\n");
//                debitMoney();
                break;
            case 5:
                printf("\nTransfer Money\n");
//                transferMoney();
                break;
            case 6:
                printf("\nUpdate User\n");
                updateUser(users,&countUsers);
                break;
            case 8:
                return 0;
            case 7:
                passbook();
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
