
#include<stdio.h>
int LCM(int x,int y);
int main()
{
    int a,b;

    printf("Enter You need value 1:");
    scanf("%d",&a);

    printf("Enter You need value 2:");
    scanf("%d",&b);

    printf("LCM is :%d\n",LCM(a,b));

    return 0;
}
int LCM(int x,int y)
{
    int z;
    if(x>y)
    {
        int lcd=x;
        while(lcd%x!=0 || lcd%y!=0)
        {
            lcd++;
        }
        return lcd;
    }
    else
    {
        z=x;
        x=y;
        y=z;
        int lcd=x;
        while(lcd%x!=0 || lcd%y!=0)
        {
            lcd++;
        }
        return lcd;
    }
}
