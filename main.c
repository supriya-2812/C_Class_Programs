#include <stdio.h>
#define MAX_USERS 3

// Define a struct to represent a user
struct User {
    int id;
    char name[50];
    int balance;
};

int main() {
    // Create two users
    struct User users[MAX_USERS];
    for(int i = 0;i < MAX_USERS; i++){
        printf("\n Enter the id:");
        scanf("%d",&users[i].id);
        printf("\n Enter the name:");
        scanf("%s",&users[i].name);
        printf("\n Enter the balance:");
        scanf("%d",&users[i].balance);
    }
    for(int i = 0; i < MAX_USERS; i++){
        printf("%d",users[i].id);
        printf("%s",users[i].name);
        printf("%d",users[i].balance);

    }

    int find,i;
    printf("\n Enter the UserID to check the balance: ");
    scanf("%d", &find);

    for(int i=0; i< MAX_USERS; i++){
            if(find==users[i].id){
                 printf("\n Balance of user %d: %d",find,users[i].balance);
    }
}
}
