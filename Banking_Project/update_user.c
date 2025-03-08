#include <stdio.h>
#include "create.h"

void updateUser(struct User *users, int *userCount)
{
    int user_id,update_choice;
    printf("\n Enter user id: \b");
    scanf("%d",&user_id);

    if (user_id!=users[*userCount].id)
    {
        printf("\n Wrong user ID!");
    }
    else
    {
        printf("\n What do you want to update? \n Select an option: \n 1 - User name \n 2 - User address \n");
        scanf("%d",&update_choice);
        switch(update_choice){
        case 1:
            printf("\n Enter new user name: \b");
            scanf("%s", &users[*userCount].name);
            printf("\n User name updated successfully! \n");
            break;
        case 2:
            printf("\n Enter new user address: \b");
            scanf("%s", &users[*userCount].address);
            printf("\n User address updated successfully! \n");
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
        }
    }
}
