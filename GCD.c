#include<stdio.h>
int GCD(int x,int y);
int main()
{
    int a,b;

    printf("Enter You need value 1:");
    scanf("%d",&a);

    printf("Enter You need value 2:");
    scanf("%d",&b);

    printf("GCD is :%d\n",GCD(a,b));

    return 0;
}
int GCD(int x,int y)
{
    if(x>y)
    {
        for(int i=y/2;i>=1;i--)
        {
            if(y%i==0)
            {
                if(x%i==0)
                {
                    return i;
                    break;
                }
            }
        }
    }
    else
    {
        int z;
        
        z=y;
        y=x;
        x=z;

        for(int i=y/2;i>=1;i--)
        {
            if(y%i==0)
            {
                if(x%i==0)
                {
                    return i;
                    break;
                }
            }
        }
    }
}