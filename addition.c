#include<stdio.h>
int addition(int n);

int addition(int n)
{
    int count=0;
    if (n==0)
    {
        return 0;
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            count=count+1;
        }
    }
    if (count==2)
    {
        return addition(n-1);
    }
    return n+addition(n-1);
}

void main()
{
    int x=addition(10);
    printf("Sum is %d",&x);
//    return 0;
}
