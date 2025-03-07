#include <stdio.h>
#include "create.h"

void createUser(struct User *users, int *userCount)
{
    if(*userCount > 100)
    {
        printf("\n Server full!");
        return;
    }

    printf("\n Enter user ID: \b");
    scanf("%d", &users[*userCount].id);

    printf("\n Enter user balance: \b");
    scanf("%d", &users[*userCount].balance);

    printf("\n Enter user name: \b");
    scanf("%s", &users[*userCount].name);

    printf("\n Enter user address: \b");
    scanf("%s", &users[*userCount].address);

    printf("\n User created successfully!");
}
