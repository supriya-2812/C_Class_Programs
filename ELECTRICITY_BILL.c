#include <stdio.h>
#include <stdlib.h>

void customer_details()
{
    char name[50];
    char address[100];
    printf("\nEnter Customer Name: \n");
    scanf("%[^\n]%*c", name);
    printf("\nEnter Address: \n");
    scanf("%[^\n]%*c", address);
}

int main()
{
    float fixed_charge=100;
    float used_units, price,total_price;
    customer_details();
    printf("\nEnter the units of electricity used: \n");
    scanf("%f",&used_units);
    if (used_units<=100)
    {
        price=((used_units*5)+100);
    }
    else if(used_units>100 && used_units<=300)
    {
        price=(((100*5)+(used_units-100)*7)+100);
    }
    else if(used_units>300 && used_units<=1000)
    {
        price=(((100*5)+(200*7)+(used_units-200)*7)+100);
    }
    else if(used_units>1000)
    {
        total_price=((100*5)+(200*7)+(1000*7)+100);
        price=total_price+((5/100)*total_price);
    }
    else
    {
        printf("\nEnter proper units");
    }
    printf("\nTotal price for %f units used = %f \n",used_units,price);

    printf("\nTotal units used = %f \n \nTotal charge = %f \n \nSurcharge = %f\n",used_units,price,(5/100)*total_price);
    return 0;
}
