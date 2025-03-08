#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file=fopen("example.txt",'w');
    if (FILE==NULL)
    {
        printf("No such file exists");
        return 1;
    }
    fprintf(file,"Hello world");
    fprintf(file,"This is a sample program!");

    fclose(file);
    printf("Successful");

    return 0;
}
