#include<stdio.h>

float calculatebill();
float applyDiscount(float x);

float calculatebill()
{
    int n;
    float T,price;
    T=0;
    printf("Enter No of items:");
    scanf("%d",&n);
    for(;n>0;n--)
    {
        printf("Enter price for each Item:");
        scanf("%f",&price);
        T+=price;
    }
    return T;
}
float applyDiscount(float x)
{
    if(x>=10000)
    {
        x-=0.1*x;
    }
    else if(x>=5000)
    {
        x-=0.05*x;
    }
    else
    {
        printf("No Discount\n");
    }
    return x;
}
int main()
{
    float final_Bill;
    float bill;
    bill=calculatebill();
    final_Bill=applyDiscount(bill);
    printf("Your final Bill:%.2f\n",final_Bill);
    return 0;
}
