#include <stdio.h>
int main()
{
    char items[50];
    FILE *file = fopen("example.txt", "w");
    if (file== NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(file, "Your items list\n");

    for(int count=0; count<10; count++)
    {
        printf("Enter the item: \b");
        scanf("%s",&items);
        fprintf(file, "%d - %s \n",count, &items);
    }

    fclose(file);

    printf("Data written to file successfully!\n");
    return 0;
}


